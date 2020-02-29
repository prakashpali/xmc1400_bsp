#ifndef CLOCK_H
#define CLOCK_H

#include "std_int.h"
#include "xmc1400.h"


#define OSCHP_FREQUENCY (20000000U)
#define DCO1_FREQUENCY  (48000000U)


void SystemCoreClockUpdate(void);
uint32_t OSCHP_GetFrequency(void);

#endif