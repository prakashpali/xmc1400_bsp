
#include "..\include\dts.h"

/* To init dts. Has following functions:
1. It enables dts
2. Sets higher threshold
3. Sets lower threshold
4. Enable interrupt for higher or lower threshold crossing
*/
void dtsInit(void)
{
    dtsEnable();
}

void dtsEnable(void)
{
    SCU_DTS->ANATSECTRL = 0x1;
}

void dtsDisable(void)
{
    SCU_DTS->ANATSECTRL = 0x0;
}

void dtsSetHighIntVal(uint16_t val)
{
    SCU_DTS->ANATSEIH = val;
}

void dtsSetLowIntVal(uint16_t val)
{
    SCU_DTS->ANATSEIL = val;
}

uint8_t dtsIsTempAboveTh(void)
{
    return SCU_GENERAL->SRRAW & (0x1 << 30);    // SRRAW.TSE_HIGH
}

uint8_t dtsIsTempBelowTh(void)
{
    return SCU_GENERAL->SRRAW & (0x1 << 31);    // SRRAW.TSE_LOW
}

uint16_t dtsGetTemp(void)
{
    while(SCU_GENERAL->SRRAW & (0x1 << 29));
    return (SCU_DTS->ANATSEMON - 6000) * 393/65535;
}