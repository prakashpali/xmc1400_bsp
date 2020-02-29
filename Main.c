
#include "Main.h"

void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority);

uint32_t SysTick_Config(uint32_t ticks);

int main(void)
{
    unsigned long i = 3;
    unsigned long j = 5;
    
    // Clock configuration
    SCU_GENERAL->PASSWD = 0x000000C0UL; // disable bit protection
    SCU_CLK->CLKCR = 0x3FF00600UL; // MCLK = 8MHz, PCLK = 8MHz
    while((SCU_CLK->CLKCR & SCU_CLK_CLKCR_VDDC2LOW_Msk));
    SCU_GENERAL->PASSWD = 0x000000C3UL; // enable bit protection
    
    SystemCoreClockUpdate();
    
    UART_Init();
    
    SysTick_Config(8000000);
    
    // Enable interrupt for UART (USIC0_CH1) IRQ9_Handler as Rx, IRQ10_Handler as Tx & IRQ11_Handler as Pr
    SCU_GENERAL->INTCR0 &= 0xFC0000;
    NVIC_REG->ISER |= 0x700;
    NVIC_REG->IPR[3] |= 0x03030300;
    
    // Configure GPIO as o/p with open drain
    Pin_set_mode(4, 0, OUTPUT_OD_GP);
    Pin_set_mode(4, 1, OUTPUT_OD_GP);
    Pin_set_mode(4, 2, OUTPUT_OD_GP);
    Pin_set_mode(4, 3, OUTPUT_OD_GP);

    while(1);
    
}

void SysTick_Handler(void)
{
    volatile uint8_t init_message[20] = {"Timer Interrupt\r\n"};
    uint32_t i, j;
   
    for(i = 0; i < 18; i++) 
    {
        USIC0_CH1->IN[i] = init_message[i];
        for(j = 0; j < 1000; j++);
    }
    
    for(i = 0; i < 4; i++)
        Pin_toggle(4, i);       // Toggle LEDs - pins 4.0, 4.1, 4.2, 4.3
}


void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC_REG->IPR[_IP_IDX(IRQn)]  = ((uint32_t)(NVIC_REG->IPR[_IP_IDX(IRQn)]  & ~(0xFFUL << _BIT_SHIFT(IRQn))) |
       (((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL) << _BIT_SHIFT(IRQn)));
  }
  else
  {
    SCB->SHP[_SHP_IDX(IRQn)] = ((uint32_t)(SCB->SHP[_SHP_IDX(IRQn)] & ~(0xFFUL << _BIT_SHIFT(IRQn))) |
       (((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL) << _BIT_SHIFT(IRQn)));
  }
}


uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1) > 0xFFFFFFU)
  {
    return (1);                                                     /* Reload value impossible */
  }

  SYSTICK->LOAD  = (uint32_t)(ticks - 1UL);                         /* set reload register */
  NVIC_SetPriority (SysTick_IRQn, (1UL << __NVIC_PRIO_BITS) - 1UL); /* set Priority for Systick Interrupt */
  SYSTICK->VAL   = 0;                                               /* Load the SysTick Counter Value */
  SYSTICK->CTRL  = 0x7;                                             /* Set timer clock as Processor clock, emable SysTick IRQ and SysTick Timer */
  
  return (0);                                                       /* Function successful */
}