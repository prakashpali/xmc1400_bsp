

#include "std_int.h"
#include "xmc1400.h"

#define    IS_MEASUREMENT_DONE   (SCU_GENERAL->SRRAW)

void dtsInit(void);
void dtsEnable(void);
void dtsDisable(void);
void dtsSetHighIntVal(uint16_t);
void dtsSetLowIntVal(uint16_t);
uint8_t dtsIsTempAboveTh(void);    // SRRAW.TSE_HIGH
uint8_t dtsIsTempBelowTh(void);    // SRRAW.TSE_LOW
uint16_t dtsGetTemp(void);
