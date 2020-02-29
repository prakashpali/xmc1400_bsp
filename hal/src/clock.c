
#include "..\include\clock.h"

uint32_t SystemCoreClock __attribute__((section(".no_init")));

void SystemCoreClockUpdate(void)
{
  static uint32_t IDIV, FDIV;

  IDIV = ((SCU_CLK->CLKCR) & SCU_CLK_CLKCR_IDIV_Msk) >> SCU_CLK_CLKCR_IDIV_Pos;

  if (IDIV != 0)
  {
    FDIV = ((SCU_CLK->CLKCR) & SCU_CLK_CLKCR_FDIV_Msk) >> SCU_CLK_CLKCR_FDIV_Pos;
    FDIV |= ((SCU_CLK->CLKCR1) & SCU_CLK_CLKCR1_FDIV_Msk) << 8;
    
    /* Fractional divider is enabled and used */
    if (((SCU_CLK->CLKCR1) & SCU_CLK_CLKCR1_DCLKSEL_Msk) == 0U)
    {
       SystemCoreClock = ((uint32_t)((DCO1_FREQUENCY << 6U) / ((IDIV << 10) + FDIV))) << 4U;
    }
    else
    {
       SystemCoreClock = ((uint32_t)((OSCHP_GetFrequency() << 6U) / ((IDIV << 10) + FDIV))) << 4U;
    }
  }
  else
  {
    /* Fractional divider bypassed. */
    if (((SCU_CLK->CLKCR1) & SCU_CLK_CLKCR1_DCLKSEL_Msk) == 0U)
    {
        SystemCoreClock = DCO1_FREQUENCY;
    }
    else
    {
        SystemCoreClock = OSCHP_GetFrequency();
    }
  }
}

uint32_t OSCHP_GetFrequency(void)
{
  return OSCHP_FREQUENCY;
}
