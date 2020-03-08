
#include "..\include\uart.h"

volatile uint32_t i;
volatile uint32_t j = 0;

#define putc(c)     USIC0_CH1->IN[0] = c

inline void putChar(uint8_t c)
{
    USIC0_CH1->IN[0] = c;
}

void UART_Init(void)
{
    volatile uint8_t init_message[20] = {"UART Initialized\r\n"};
    
    // Disable clock gating to USIC0
    SCU_GENERAL->PASSWD = 0x000000C0UL; // disable bit protection
    SCU_CLK->CGATCLR0 |= SCU_CLK_CGATCLR0_USIC0_Msk;
    SCU_GENERAL->PASSWD = 0x000000C3UL; // enable bit protection

    /* Enable the module kernel clock and the module functionality  */
    USIC0_CH1->KSCFG |= USIC_CH_KSCFG_MODEN_Msk | USIC_CH_KSCFG_BPMODEN_Msk;

    /* fFD = fPB */
    /* FDR.DM = 02b (Fractional divider mode) */
    USIC0_CH1->FDR &= ~(USIC_CH_FDR_DM_Msk | USIC_CH_FDR_STEP_Msk);
    USIC0_CH1->FDR |= (0x02UL << USIC_CH_FDR_DM_Pos) | (FDR_STEP << USIC_CH_FDR_STEP_Pos);

    /* Configure baud rate generator */
    /* BAUDRATE = fCTQIN/(BRG.PCTQ x BRG.DCTQ) */
    /* CLKSEL = 0 (fPIN = fFD), CTQSEL = 00b (fCTQIN = fPDIV), PPPEN = 0 (fPPP=fPIN) */
    USIC0_CH0->BRG &= ~(USIC_CH_BRG_PCTQ_Msk | USIC_CH_BRG_DCTQ_Msk | USIC_CH_BRG_PDIV_Msk | USIC_CH_BRG_CLKSEL_Msk | USIC_CH_BRG_PPPEN_Msk);
    USIC0_CH1->BRG |= (BRG_PCTQ << USIC_CH_BRG_PCTQ_Pos) | (BRG_DCTQ << USIC_CH_BRG_DCTQ_Pos) | (BRG_PDIV << USIC_CH_BRG_PDIV_Pos);

    /* Configuration of USIC Shift Control */
    /* SCTR.FLE = 8 (Frame Length) */
    /* SCTR.WLE = 8 (Word Length) */
    /* SCTR.TRM = 1 (Transmission Mode) */
    /* SCTR.PDL = 1 (This bit defines the output level at the shift data output signal when no data is available for transmission) */
    USIC0_CH1->SCTR &= ~(USIC_CH_SCTR_TRM_Msk | USIC_CH_SCTR_FLE_Msk | USIC_CH_SCTR_WLE_Msk);
    USIC0_CH1->SCTR |= USIC_CH_SCTR_PDL_Msk | (0x01UL << USIC_CH_SCTR_TRM_Pos) | (0x07UL << USIC_CH_SCTR_FLE_Pos) | (0x07UL << USIC_CH_SCTR_WLE_Pos);

    /* Configuration of USIC Transmit Control/Status Register */
    /* TBUF.TDEN = 1 (TBUF Data Enable: A transmission of the data word in TBUF can be started if TDV = 1 */
    /* TBUF.TDSSM = 1 (Data Single Shot Mode: allow word-by-word data transmission which avoid sending the same data several times*/
    USIC0_CH1->TCSR &= ~(USIC_CH_TCSR_TDEN_Msk);
    USIC0_CH1->TCSR |= USIC_CH_TCSR_TDSSM_Msk | (0x01UL << USIC_CH_TCSR_TDEN_Pos);

    /* Configuration of Protocol Control Register */
    /* PCR.SMD = 1 (Sample Mode based on majority) */
    /* PCR.STPB = 0 (1x Stop bit) */
    /* PCR.SP = 5 (Sample Point) */
    /* PCR.PL = 0 (Pulse Length is equal to the bit length) */
    USIC0_CH1->PCR &= ~(USIC_CH_PCR_ASCMode_STPB_Msk | USIC_CH_PCR_ASCMode_SP_Msk | USIC_CH_PCR_ASCMode_PL_Msk);
    USIC0_CH1->PCR |= USIC_CH_PCR_ASCMode_SMD_Msk | (9 << USIC_CH_PCR_ASCMode_SP_Pos);

    /* Configure Transmit Buffer */
    /* Standard transmit buffer event is enabled */
    /* Define start entry of Transmit Data FIFO buffer DPTR = 0*/
    USIC0_CH1->TBCTR &= ~(USIC_CH_TBCTR_SIZE_Msk | USIC_CH_TBCTR_DPTR_Msk);

    /* Set Transmit Data Buffer to 64 */
    USIC0_CH1->TBCTR |= 0x06UL << USIC_CH_TBCTR_SIZE_Pos;

    /* Initialize UART_RX (DX0)*/
    /* P1.3 as input */
    Pin_set_mode(1, 3, INPUT);

    /* Select P1.3 as input for USIC DX0 */
    USIC0_CH1->DX0CR &= ~(USIC_CH_DX0CR_DSEL_Msk);

    /* Initialize UART_TX (DOUT)*/
    /* P1.2 as output controlled by ALT7 = U0C1.DOUT0 */
    Pin_set_mode(1, 2, OUTPUT_PP_AF7);

    /* Configuration of Channel Control Register */
    /* CCR.PM = 00 ( Disable parity generation) */
    /* CCR.MODE = 2 (ASC mode enabled. Note: 0 (USIC channel is disabled)) */
    USIC0_CH1->CCR &= ~(USIC_CH_CCR_PM_Msk | USIC_CH_CCR_MODE_Msk);
    USIC0_CH1->CCR |= 0x02UL << USIC_CH_CCR_MODE_Pos;
    
    // Enable Rx and Tx interrupt
    
    // Protocol-specific events in ASC mode
    // PSR.ST[8:2] - Indication Flag
    // PSCR.CST[8:2] - Indication cleared by
    // PCR.CTR[7]] - Enable Frame Finished Interrupt - both Rx and Tx frame
    USIC0_CH1->PCR |= USIC_CH_PCR_ASCMode_FFIEN_Msk | (1 << USIC_CH_PCR_ASCMode_FFIEN_Pos);
    // INPR.PINP - Select SR3 node for protocol interrupt
    USIC0_CH1->INPR |= USIC_CH_INPR_PINP_Msk | (2 << USIC_CH_INPR_PINP_Pos);
    
    // Standard receive event
    // PSR.RIF - Indication Flag
    // PSCR.CRIF - Flag cleared by
    // CCR.RIEN - Interrupt enabled by
    USIC0_CH1->CCR |= USIC_CH_CCR_RIEN_Msk | (1 << USIC_CH_CCR_RIEN_Pos);
    // INPR.RINP - SR o/p selected by
    USIC0_CH1->INPR |= USIC_CH_INPR_RINP_Msk | (0 << USIC_CH_INPR_RINP_Pos);
    
    // Transmit shift event 
    // PSR.TSIF - Indication Flag
    // PSCR.CTSIF - Flag cleared by 
    // CCR.TSIEN - Interrupt enabled by 
    USIC0_CH1->CCR |= USIC_CH_CCR_TSIEN_Msk | (1 << USIC_CH_CCR_TSIEN_Pos);
    // INPR.TSINP - SR o/p selected by
    USIC0_CH1->INPR |= USIC_CH_INPR_TSINP_Msk | (1 << USIC_CH_INPR_TSINP_Pos);
    
    for(i = 0; i < 18; i++) 
    {
        USIC0_CH1->IN[i] = init_message[i];
        for(j = 0; j < 1000; j++);
    }
}

void sendChar(uint8_t c) {
    uint32_t i;
  
  USIC0_CH1->IN[0] = c;
  for(i =0; i < 10000; i ++);
  
  return;
}

volatile uint8_t print(const uint8_t *format, ...)
{
    //uint32_t val[20];
    // uint8_t *traverse, count = 0;
    //__asm("sendChar(R1+48)");
    // __asm("MOV %0, R1\n" : "=r" (val[0]) );		//Fetch char argument
    // __asm("MOV %0, R2\n" : "=r" (val[1]) );		//Fetch char argument
    // __asm("MOV %0, R3\n" : "=r" (val[2]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[3]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[4]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[5]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[6]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[7]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[8]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[9]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[10]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[11]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[12]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[13]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[14]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[15]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[16]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[17]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[18]) );		//Fetch char argument
    // __asm("POP {%0}\n" : "=r" (val[19]) );		//Fetch char argument

    for(; *format != '\0'; format++)
    {
        while( *format != '%' ) 
        { 
            format++; 
        } 
    
        format++;
        
    }



    return 1;
}

void IRQ9_Handler(void)
{
   volatile uint8_t init_message[20] = {"UART Rx Interrupt\r\n"};
   
    for(i = 0; i < 18; i++) 
    {
        sendChar(init_message[i]);
    }
}

void IRQ10_Handler(void)
{
    volatile uint8_t init_message[20] = {"UART Tx Interrupt\r\n"};
   
    for(i = 0; i < 18; i++) 
    {
        sendChar(init_message[i]);
    }
}

void IRQ11_Handler(void)
{
    volatile uint8_t init_message[20] = {"UART Pr Interrupt\r\n"};
   
    for(i = 0; i < 18; i++) 
    {
       sendChar(init_message[i]);
    }
}
