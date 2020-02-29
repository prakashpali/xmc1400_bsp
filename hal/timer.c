
#include "xmc1400.h"
#include "gpio.h"

uint32_t SysTick_Config(uint32_t ticks);
extern void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority);

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