
#include "..\include\xmc1400.h"
#include "..\include\gpio.h"

uint32_t SysTick_Config(uint32_t ticks);
extern void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority);


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