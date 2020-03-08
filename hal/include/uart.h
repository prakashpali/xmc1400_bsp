#ifndef UART_H
#define UART_H


#define CCR_BASE              0x40040400UL
#define OUTPUT_OD_GP            0xC0U

#include "std_int.h"
#include "xmc1400.h"
#include "gpio.h"

//The ASC mode is selected by CCR.MODE = 0010B
//The user has to take care that only one transmitter is active at a time.

/*
* ------|     |---------------|------|------|------
* IDLE  |_SOF_|_____DATA______|__P___| STOP   IDLE
*
*/

/*
Steps:
1. Enable the module by writing 1s to MODEN and BPMODEN bits in KSCFG register
2. Select either fractional divider mode or normal divider mode with FDR.DM bit.
3. Configure the bit timing and baud rate setting through register BRG and FDR.STEP bit field
4. Establish a connection of input stage DX0 with the receive data input pin (signal DIN0) selected by DX0CR.DSEL bit field and with bit DX0CR.INSW = 0.
5. Due to the handling of the input data stream by the synchronous protocol handler, the propagation delay of the synchronization in the input stage has to be considered.
6. For collision or idle detection of the transmitter, the input stage DX1 has to be connected to the selected transmit output pin, also with DX1CR.INSW = 0. Additionally, program DX2CR.INSW = 0.
7. The word length, the frame length, and the shift direction have to be set up according to the application requirements by programming the register SCTR.
8. Write SCTR.TRM = 01B to enable ASC data transfers.
9. If required by the application, the data input and output signals can be inverted with DX0CR.DPOL and SCTR.DOCFG respectively
10. Write TCSR.TDSSM = 1 and TCSR.TDEN = 01B to enable data transmission in single shot mode.
11. Select the idle detection mode, number of stop bits, sample mode and sample point through the register PCR.
12. Enable ASC mode with CCR.MODE = 0010B.
13. Additionally, the parity mode can be configured with CCR.PM.
14. Configure the transmit data output pin (signal DOUT0) through the selected pin’s port control register Pn_IOCR0/4/8/12. Refer to the port chapter.
15. The step to enable the output pin functions should only be done after the ASC mode is enabled with CCR.MODE, to avoided unintended spikes on the output.

*/

// ASC Module A registers


// ASC module B registers

// UART baud rate constants for 57.8kbps @ MCLK=8MHz
#define FDR_STEP 590UL
#define BRG_PDIV 4UL
#define BRG_DCTQ 15UL
#define BRG_PCTQ 0UL


void UART_Init();
void sendChar(uint8_t c);
volatile uint8_t print(const uint8_t *format, ...);


#endif