
#include "Main.h"

extern void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority);

extern uint32_t SysTick_Config(uint32_t ticks);

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
