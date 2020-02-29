#ifndef XMC1400_H
#define XMC1400_H

#include "std_int.h"

#define USIC0_CH0_BASE                  (0x48000000U)
#define USIC0_CH1_BASE                  (0x48000200U)
#define USIC1_CH0_BASE                  (0x48004000U)
#define USIC1_CH1_BASE                  (0x48004200U)
#define SCU_CLK_BASE                    (0x40010300U)
#define SCU_GENERAL_BASE                (0x40010000U)
#define SCS_REG_BASE                    (0xE000E000U)

#define SYSTICK_BASE        (SCS_REG_BASE +  0x0010UL)                    /*!< SysTick Base Address */
#define NVIC_BASE           (SCS_REG_BASE +  0x0100UL)                    /*!< NVIC Base Address */
#define SCB_BASE            (SCS_REG_BASE +  0x0D00UL)                    /*!< System Control Block Base Address */

#define INPUT           0x00U
#define INPUT_PD        0x08U
#define INPUT_PU        0x10U
#define INPUT_PPS       0x18U
#define INPUT_INV       0x20U
#define INPUT_INV_PD    0x28U
#define INPUT_INV_PU    0x30U
#define INPUT_INV_PPS   0x38U
#define OUTPUT_PP_GP    0x80U
#define OUTPUT_PP_AF1   0x84U
#define OUTPUT_PP_AF2   0x88U
#define OUTPUT_PP_AF3   0x8CU
#define OUTPUT_PP_AF4   0x90U
#define OUTPUT_PP_AF5   0x94U
#define OUTPUT_PP_AF6   0x98U
#define OUTPUT_PP_AF7   0x9CU
#define OUTPUT_PP_AF8   0xA0U
#define OUTPUT_PP_AF9   0xA4U
#define OUTPUT_OD_GP    0xC0U
#define OUTPUT_OD_AF1   0xC4U
#define OUTPUT_OD_AF2   0xC8U
#define OUTPUT_OD_AF3   0xCCU
#define OUTPUT_OD_AF4   0XD0U
#define OUTPUT_OD_AF5   0xD4U
#define OUTPUT_OD_AF6   0xD8U
#define OUTPUT_OD_AF7   0XDCU
#define OUTPUT_OD_AF8   0XE0U
#define OUTPUT_OD_AF9   0XE4U


/* ================================================================================ */
/* ================          Group 'USIC' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  USIC_ID  ---------------------------------- */
#define USIC_ID_MOD_REV_Pos                   (0UL)                     /*!< USIC ID: MOD_REV (Bit 0)                                    */
#define USIC_ID_MOD_REV_Msk                   (0xffUL)                  /*!< USIC ID: MOD_REV (Bitfield-Mask: 0xff)                      */
#define USIC_ID_MOD_TYPE_Pos                  (8UL)                     /*!< USIC ID: MOD_TYPE (Bit 8)                                   */
#define USIC_ID_MOD_TYPE_Msk                  (0xff00UL)                /*!< USIC ID: MOD_TYPE (Bitfield-Mask: 0xff)                     */
#define USIC_ID_MOD_NUMBER_Pos                (16UL)                    /*!< USIC ID: MOD_NUMBER (Bit 16)                                */
#define USIC_ID_MOD_NUMBER_Msk                (0xffff0000UL)            /*!< USIC ID: MOD_NUMBER (Bitfield-Mask: 0xffff)                 */


/* ================================================================================ */
/* ================         Group 'USIC_CH' Position & Mask        ================ */
/* ================================================================================ */


/* --------------------------------  USIC_CH_CCFG  -------------------------------- */
#define USIC_CH_CCFG_SSC_Pos                  (0UL)                     /*!< USIC_CH CCFG: SSC (Bit 0)                                   */
#define USIC_CH_CCFG_SSC_Msk                  (0x1UL)                   /*!< USIC_CH CCFG: SSC (Bitfield-Mask: 0x01)                     */
#define USIC_CH_CCFG_ASC_Pos                  (1UL)                     /*!< USIC_CH CCFG: ASC (Bit 1)                                   */
#define USIC_CH_CCFG_ASC_Msk                  (0x2UL)                   /*!< USIC_CH CCFG: ASC (Bitfield-Mask: 0x01)                     */
#define USIC_CH_CCFG_IIC_Pos                  (2UL)                     /*!< USIC_CH CCFG: IIC (Bit 2)                                   */
#define USIC_CH_CCFG_IIC_Msk                  (0x4UL)                   /*!< USIC_CH CCFG: IIC (Bitfield-Mask: 0x01)                     */
#define USIC_CH_CCFG_IIS_Pos                  (3UL)                     /*!< USIC_CH CCFG: IIS (Bit 3)                                   */
#define USIC_CH_CCFG_IIS_Msk                  (0x8UL)                   /*!< USIC_CH CCFG: IIS (Bitfield-Mask: 0x01)                     */
#define USIC_CH_CCFG_RB_Pos                   (6UL)                     /*!< USIC_CH CCFG: RB (Bit 6)                                    */
#define USIC_CH_CCFG_RB_Msk                   (0x40UL)                  /*!< USIC_CH CCFG: RB (Bitfield-Mask: 0x01)                      */
#define USIC_CH_CCFG_TB_Pos                   (7UL)                     /*!< USIC_CH CCFG: TB (Bit 7)                                    */
#define USIC_CH_CCFG_TB_Msk                   (0x80UL)                  /*!< USIC_CH CCFG: TB (Bitfield-Mask: 0x01)                      */

/* --------------------------------  USIC_CH_KSCFG  ------------------------------- */
#define USIC_CH_KSCFG_MODEN_Pos               (0UL)                     /*!< USIC_CH KSCFG: MODEN (Bit 0)                                */
#define USIC_CH_KSCFG_MODEN_Msk               (0x1UL)                   /*!< USIC_CH KSCFG: MODEN (Bitfield-Mask: 0x01)                  */
#define USIC_CH_KSCFG_BPMODEN_Pos             (1UL)                     /*!< USIC_CH KSCFG: BPMODEN (Bit 1)                              */
#define USIC_CH_KSCFG_BPMODEN_Msk             (0x2UL)                   /*!< USIC_CH KSCFG: BPMODEN (Bitfield-Mask: 0x01)                */
#define USIC_CH_KSCFG_NOMCFG_Pos              (4UL)                     /*!< USIC_CH KSCFG: NOMCFG (Bit 4)                               */
#define USIC_CH_KSCFG_NOMCFG_Msk              (0x30UL)                  /*!< USIC_CH KSCFG: NOMCFG (Bitfield-Mask: 0x03)                 */
#define USIC_CH_KSCFG_BPNOM_Pos               (7UL)                     /*!< USIC_CH KSCFG: BPNOM (Bit 7)                                */
#define USIC_CH_KSCFG_BPNOM_Msk               (0x80UL)                  /*!< USIC_CH KSCFG: BPNOM (Bitfield-Mask: 0x01)                  */
#define USIC_CH_KSCFG_SUMCFG_Pos              (8UL)                     /*!< USIC_CH KSCFG: SUMCFG (Bit 8)                               */
#define USIC_CH_KSCFG_SUMCFG_Msk              (0x300UL)                 /*!< USIC_CH KSCFG: SUMCFG (Bitfield-Mask: 0x03)                 */
#define USIC_CH_KSCFG_BPSUM_Pos               (11UL)                    /*!< USIC_CH KSCFG: BPSUM (Bit 11)                               */
#define USIC_CH_KSCFG_BPSUM_Msk               (0x800UL)                 /*!< USIC_CH KSCFG: BPSUM (Bitfield-Mask: 0x01)                  */

/* ---------------------------------  USIC_CH_FDR  -------------------------------- */
#define USIC_CH_FDR_STEP_Pos                  (0UL)                     /*!< USIC_CH FDR: STEP (Bit 0)                                   */
#define USIC_CH_FDR_STEP_Msk                  (0x3ffUL)                 /*!< USIC_CH FDR: STEP (Bitfield-Mask: 0x3ff)                    */
#define USIC_CH_FDR_DM_Pos                    (14UL)                    /*!< USIC_CH FDR: DM (Bit 14)                                    */
#define USIC_CH_FDR_DM_Msk                    (0xc000UL)                /*!< USIC_CH FDR: DM (Bitfield-Mask: 0x03)                       */
#define USIC_CH_FDR_RESULT_Pos                (16UL)                    /*!< USIC_CH FDR: RESULT (Bit 16)                                */
#define USIC_CH_FDR_RESULT_Msk                (0x3ff0000UL)             /*!< USIC_CH FDR: RESULT (Bitfield-Mask: 0x3ff)                  */

/* ---------------------------------  USIC_CH_BRG  -------------------------------- */
#define USIC_CH_BRG_CLKSEL_Pos                (0UL)                     /*!< USIC_CH BRG: CLKSEL (Bit 0)                                 */
#define USIC_CH_BRG_CLKSEL_Msk                (0x3UL)                   /*!< USIC_CH BRG: CLKSEL (Bitfield-Mask: 0x03)                   */
#define USIC_CH_BRG_TMEN_Pos                  (3UL)                     /*!< USIC_CH BRG: TMEN (Bit 3)                                   */
#define USIC_CH_BRG_TMEN_Msk                  (0x8UL)                   /*!< USIC_CH BRG: TMEN (Bitfield-Mask: 0x01)                     */
#define USIC_CH_BRG_PPPEN_Pos                 (4UL)                     /*!< USIC_CH BRG: PPPEN (Bit 4)                                  */
#define USIC_CH_BRG_PPPEN_Msk                 (0x10UL)                  /*!< USIC_CH BRG: PPPEN (Bitfield-Mask: 0x01)                    */
#define USIC_CH_BRG_CTQSEL_Pos                (6UL)                     /*!< USIC_CH BRG: CTQSEL (Bit 6)                                 */
#define USIC_CH_BRG_CTQSEL_Msk                (0xc0UL)                  /*!< USIC_CH BRG: CTQSEL (Bitfield-Mask: 0x03)                   */
#define USIC_CH_BRG_PCTQ_Pos                  (8UL)                     /*!< USIC_CH BRG: PCTQ (Bit 8)                                   */
#define USIC_CH_BRG_PCTQ_Msk                  (0x300UL)                 /*!< USIC_CH BRG: PCTQ (Bitfield-Mask: 0x03)                     */
#define USIC_CH_BRG_DCTQ_Pos                  (10UL)                    /*!< USIC_CH BRG: DCTQ (Bit 10)                                  */
#define USIC_CH_BRG_DCTQ_Msk                  (0x7c00UL)                /*!< USIC_CH BRG: DCTQ (Bitfield-Mask: 0x1f)                     */
#define USIC_CH_BRG_PDIV_Pos                  (16UL)                    /*!< USIC_CH BRG: PDIV (Bit 16)                                  */
#define USIC_CH_BRG_PDIV_Msk                  (0x3ff0000UL)             /*!< USIC_CH BRG: PDIV (Bitfield-Mask: 0x3ff)                    */
#define USIC_CH_BRG_SCLKOSEL_Pos              (28UL)                    /*!< USIC_CH BRG: SCLKOSEL (Bit 28)                              */
#define USIC_CH_BRG_SCLKOSEL_Msk              (0x10000000UL)            /*!< USIC_CH BRG: SCLKOSEL (Bitfield-Mask: 0x01)                 */
#define USIC_CH_BRG_MCLKCFG_Pos               (29UL)                    /*!< USIC_CH BRG: MCLKCFG (Bit 29)                               */
#define USIC_CH_BRG_MCLKCFG_Msk               (0x20000000UL)            /*!< USIC_CH BRG: MCLKCFG (Bitfield-Mask: 0x01)                  */
#define USIC_CH_BRG_SCLKCFG_Pos               (30UL)                    /*!< USIC_CH BRG: SCLKCFG (Bit 30)                               */
#define USIC_CH_BRG_SCLKCFG_Msk               (0xc0000000UL)            /*!< USIC_CH BRG: SCLKCFG (Bitfield-Mask: 0x03)                  */

/* --------------------------------  USIC_CH_INPR  -------------------------------- */
#define USIC_CH_INPR_TSINP_Pos                (0UL)                     /*!< USIC_CH INPR: TSINP (Bit 0)                                 */
#define USIC_CH_INPR_TSINP_Msk                (0x7UL)                   /*!< USIC_CH INPR: TSINP (Bitfield-Mask: 0x07)                   */
#define USIC_CH_INPR_TBINP_Pos                (4UL)                     /*!< USIC_CH INPR: TBINP (Bit 4)                                 */
#define USIC_CH_INPR_TBINP_Msk                (0x70UL)                  /*!< USIC_CH INPR: TBINP (Bitfield-Mask: 0x07)                   */
#define USIC_CH_INPR_RINP_Pos                 (8UL)                     /*!< USIC_CH INPR: RINP (Bit 8)                                  */
#define USIC_CH_INPR_RINP_Msk                 (0x700UL)                 /*!< USIC_CH INPR: RINP (Bitfield-Mask: 0x07)                    */
#define USIC_CH_INPR_AINP_Pos                 (12UL)                    /*!< USIC_CH INPR: AINP (Bit 12)                                 */
#define USIC_CH_INPR_AINP_Msk                 (0x7000UL)                /*!< USIC_CH INPR: AINP (Bitfield-Mask: 0x07)                    */
#define USIC_CH_INPR_PINP_Pos                 (16UL)                    /*!< USIC_CH INPR: PINP (Bit 16)                                 */
#define USIC_CH_INPR_PINP_Msk                 (0x70000UL)               /*!< USIC_CH INPR: PINP (Bitfield-Mask: 0x07)                    */

/* --------------------------------  USIC_CH_DX0CR  ------------------------------- */
#define USIC_CH_DX0CR_DSEL_Pos                (0UL)                     /*!< USIC_CH DX0CR: DSEL (Bit 0)                                 */
#define USIC_CH_DX0CR_DSEL_Msk                (0x7UL)                   /*!< USIC_CH DX0CR: DSEL (Bitfield-Mask: 0x07)                   */
#define USIC_CH_DX0CR_INSW_Pos                (4UL)                     /*!< USIC_CH DX0CR: INSW (Bit 4)                                 */
#define USIC_CH_DX0CR_INSW_Msk                (0x10UL)                  /*!< USIC_CH DX0CR: INSW (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX0CR_DFEN_Pos                (5UL)                     /*!< USIC_CH DX0CR: DFEN (Bit 5)                                 */
#define USIC_CH_DX0CR_DFEN_Msk                (0x20UL)                  /*!< USIC_CH DX0CR: DFEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX0CR_DSEN_Pos                (6UL)                     /*!< USIC_CH DX0CR: DSEN (Bit 6)                                 */
#define USIC_CH_DX0CR_DSEN_Msk                (0x40UL)                  /*!< USIC_CH DX0CR: DSEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX0CR_DPOL_Pos                (8UL)                     /*!< USIC_CH DX0CR: DPOL (Bit 8)                                 */
#define USIC_CH_DX0CR_DPOL_Msk                (0x100UL)                 /*!< USIC_CH DX0CR: DPOL (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX0CR_SFSEL_Pos               (9UL)                     /*!< USIC_CH DX0CR: SFSEL (Bit 9)                                */
#define USIC_CH_DX0CR_SFSEL_Msk               (0x200UL)                 /*!< USIC_CH DX0CR: SFSEL (Bitfield-Mask: 0x01)                  */
#define USIC_CH_DX0CR_CM_Pos                  (10UL)                    /*!< USIC_CH DX0CR: CM (Bit 10)                                  */
#define USIC_CH_DX0CR_CM_Msk                  (0xc00UL)                 /*!< USIC_CH DX0CR: CM (Bitfield-Mask: 0x03)                     */
#define USIC_CH_DX0CR_DXS_Pos                 (15UL)                    /*!< USIC_CH DX0CR: DXS (Bit 15)                                 */
#define USIC_CH_DX0CR_DXS_Msk                 (0x8000UL)                /*!< USIC_CH DX0CR: DXS (Bitfield-Mask: 0x01)                    */

/* --------------------------------  USIC_CH_DX1CR  ------------------------------- */
#define USIC_CH_DX1CR_DSEL_Pos                (0UL)                     /*!< USIC_CH DX1CR: DSEL (Bit 0)                                 */
#define USIC_CH_DX1CR_DSEL_Msk                (0x7UL)                   /*!< USIC_CH DX1CR: DSEL (Bitfield-Mask: 0x07)                   */
#define USIC_CH_DX1CR_DCEN_Pos                (3UL)                     /*!< USIC_CH DX1CR: DCEN (Bit 3)                                 */
#define USIC_CH_DX1CR_DCEN_Msk                (0x8UL)                   /*!< USIC_CH DX1CR: DCEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX1CR_INSW_Pos                (4UL)                     /*!< USIC_CH DX1CR: INSW (Bit 4)                                 */
#define USIC_CH_DX1CR_INSW_Msk                (0x10UL)                  /*!< USIC_CH DX1CR: INSW (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX1CR_DFEN_Pos                (5UL)                     /*!< USIC_CH DX1CR: DFEN (Bit 5)                                 */
#define USIC_CH_DX1CR_DFEN_Msk                (0x20UL)                  /*!< USIC_CH DX1CR: DFEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX1CR_DSEN_Pos                (6UL)                     /*!< USIC_CH DX1CR: DSEN (Bit 6)                                 */
#define USIC_CH_DX1CR_DSEN_Msk                (0x40UL)                  /*!< USIC_CH DX1CR: DSEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX1CR_DPOL_Pos                (8UL)                     /*!< USIC_CH DX1CR: DPOL (Bit 8)                                 */
#define USIC_CH_DX1CR_DPOL_Msk                (0x100UL)                 /*!< USIC_CH DX1CR: DPOL (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX1CR_SFSEL_Pos               (9UL)                     /*!< USIC_CH DX1CR: SFSEL (Bit 9)                                */
#define USIC_CH_DX1CR_SFSEL_Msk               (0x200UL)                 /*!< USIC_CH DX1CR: SFSEL (Bitfield-Mask: 0x01)                  */
#define USIC_CH_DX1CR_CM_Pos                  (10UL)                    /*!< USIC_CH DX1CR: CM (Bit 10)                                  */
#define USIC_CH_DX1CR_CM_Msk                  (0xc00UL)                 /*!< USIC_CH DX1CR: CM (Bitfield-Mask: 0x03)                     */
#define USIC_CH_DX1CR_DXS_Pos                 (15UL)                    /*!< USIC_CH DX1CR: DXS (Bit 15)                                 */
#define USIC_CH_DX1CR_DXS_Msk                 (0x8000UL)                /*!< USIC_CH DX1CR: DXS (Bitfield-Mask: 0x01)                    */

/* --------------------------------  USIC_CH_DX2CR  ------------------------------- */
#define USIC_CH_DX2CR_DSEL_Pos                (0UL)                     /*!< USIC_CH DX2CR: DSEL (Bit 0)                                 */
#define USIC_CH_DX2CR_DSEL_Msk                (0x7UL)                   /*!< USIC_CH DX2CR: DSEL (Bitfield-Mask: 0x07)                   */
#define USIC_CH_DX2CR_INSW_Pos                (4UL)                     /*!< USIC_CH DX2CR: INSW (Bit 4)                                 */
#define USIC_CH_DX2CR_INSW_Msk                (0x10UL)                  /*!< USIC_CH DX2CR: INSW (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX2CR_DFEN_Pos                (5UL)                     /*!< USIC_CH DX2CR: DFEN (Bit 5)                                 */
#define USIC_CH_DX2CR_DFEN_Msk                (0x20UL)                  /*!< USIC_CH DX2CR: DFEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX2CR_DSEN_Pos                (6UL)                     /*!< USIC_CH DX2CR: DSEN (Bit 6)                                 */
#define USIC_CH_DX2CR_DSEN_Msk                (0x40UL)                  /*!< USIC_CH DX2CR: DSEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX2CR_DPOL_Pos                (8UL)                     /*!< USIC_CH DX2CR: DPOL (Bit 8)                                 */
#define USIC_CH_DX2CR_DPOL_Msk                (0x100UL)                 /*!< USIC_CH DX2CR: DPOL (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX2CR_SFSEL_Pos               (9UL)                     /*!< USIC_CH DX2CR: SFSEL (Bit 9)                                */
#define USIC_CH_DX2CR_SFSEL_Msk               (0x200UL)                 /*!< USIC_CH DX2CR: SFSEL (Bitfield-Mask: 0x01)                  */
#define USIC_CH_DX2CR_CM_Pos                  (10UL)                    /*!< USIC_CH DX2CR: CM (Bit 10)                                  */
#define USIC_CH_DX2CR_CM_Msk                  (0xc00UL)                 /*!< USIC_CH DX2CR: CM (Bitfield-Mask: 0x03)                     */
#define USIC_CH_DX2CR_DXS_Pos                 (15UL)                    /*!< USIC_CH DX2CR: DXS (Bit 15)                                 */
#define USIC_CH_DX2CR_DXS_Msk                 (0x8000UL)                /*!< USIC_CH DX2CR: DXS (Bitfield-Mask: 0x01)                    */

/* --------------------------------  USIC_CH_DX3CR  ------------------------------- */
#define USIC_CH_DX3CR_DSEL_Pos                (0UL)                     /*!< USIC_CH DX3CR: DSEL (Bit 0)                                 */
#define USIC_CH_DX3CR_DSEL_Msk                (0x7UL)                   /*!< USIC_CH DX3CR: DSEL (Bitfield-Mask: 0x07)                   */
#define USIC_CH_DX3CR_INSW_Pos                (4UL)                     /*!< USIC_CH DX3CR: INSW (Bit 4)                                 */
#define USIC_CH_DX3CR_INSW_Msk                (0x10UL)                  /*!< USIC_CH DX3CR: INSW (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX3CR_DFEN_Pos                (5UL)                     /*!< USIC_CH DX3CR: DFEN (Bit 5)                                 */
#define USIC_CH_DX3CR_DFEN_Msk                (0x20UL)                  /*!< USIC_CH DX3CR: DFEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX3CR_DSEN_Pos                (6UL)                     /*!< USIC_CH DX3CR: DSEN (Bit 6)                                 */
#define USIC_CH_DX3CR_DSEN_Msk                (0x40UL)                  /*!< USIC_CH DX3CR: DSEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX3CR_DPOL_Pos                (8UL)                     /*!< USIC_CH DX3CR: DPOL (Bit 8)                                 */
#define USIC_CH_DX3CR_DPOL_Msk                (0x100UL)                 /*!< USIC_CH DX3CR: DPOL (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX3CR_SFSEL_Pos               (9UL)                     /*!< USIC_CH DX3CR: SFSEL (Bit 9)                                */
#define USIC_CH_DX3CR_SFSEL_Msk               (0x200UL)                 /*!< USIC_CH DX3CR: SFSEL (Bitfield-Mask: 0x01)                  */
#define USIC_CH_DX3CR_CM_Pos                  (10UL)                    /*!< USIC_CH DX3CR: CM (Bit 10)                                  */
#define USIC_CH_DX3CR_CM_Msk                  (0xc00UL)                 /*!< USIC_CH DX3CR: CM (Bitfield-Mask: 0x03)                     */
#define USIC_CH_DX3CR_DXS_Pos                 (15UL)                    /*!< USIC_CH DX3CR: DXS (Bit 15)                                 */
#define USIC_CH_DX3CR_DXS_Msk                 (0x8000UL)                /*!< USIC_CH DX3CR: DXS (Bitfield-Mask: 0x01)                    */

/* --------------------------------  USIC_CH_DX4CR  ------------------------------- */
#define USIC_CH_DX4CR_DSEL_Pos                (0UL)                     /*!< USIC_CH DX4CR: DSEL (Bit 0)                                 */
#define USIC_CH_DX4CR_DSEL_Msk                (0x7UL)                   /*!< USIC_CH DX4CR: DSEL (Bitfield-Mask: 0x07)                   */
#define USIC_CH_DX4CR_INSW_Pos                (4UL)                     /*!< USIC_CH DX4CR: INSW (Bit 4)                                 */
#define USIC_CH_DX4CR_INSW_Msk                (0x10UL)                  /*!< USIC_CH DX4CR: INSW (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX4CR_DFEN_Pos                (5UL)                     /*!< USIC_CH DX4CR: DFEN (Bit 5)                                 */
#define USIC_CH_DX4CR_DFEN_Msk                (0x20UL)                  /*!< USIC_CH DX4CR: DFEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX4CR_DSEN_Pos                (6UL)                     /*!< USIC_CH DX4CR: DSEN (Bit 6)                                 */
#define USIC_CH_DX4CR_DSEN_Msk                (0x40UL)                  /*!< USIC_CH DX4CR: DSEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX4CR_DPOL_Pos                (8UL)                     /*!< USIC_CH DX4CR: DPOL (Bit 8)                                 */
#define USIC_CH_DX4CR_DPOL_Msk                (0x100UL)                 /*!< USIC_CH DX4CR: DPOL (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX4CR_SFSEL_Pos               (9UL)                     /*!< USIC_CH DX4CR: SFSEL (Bit 9)                                */
#define USIC_CH_DX4CR_SFSEL_Msk               (0x200UL)                 /*!< USIC_CH DX4CR: SFSEL (Bitfield-Mask: 0x01)                  */
#define USIC_CH_DX4CR_CM_Pos                  (10UL)                    /*!< USIC_CH DX4CR: CM (Bit 10)                                  */
#define USIC_CH_DX4CR_CM_Msk                  (0xc00UL)                 /*!< USIC_CH DX4CR: CM (Bitfield-Mask: 0x03)                     */
#define USIC_CH_DX4CR_DXS_Pos                 (15UL)                    /*!< USIC_CH DX4CR: DXS (Bit 15)                                 */
#define USIC_CH_DX4CR_DXS_Msk                 (0x8000UL)                /*!< USIC_CH DX4CR: DXS (Bitfield-Mask: 0x01)                    */

/* --------------------------------  USIC_CH_DX5CR  ------------------------------- */
#define USIC_CH_DX5CR_DSEL_Pos                (0UL)                     /*!< USIC_CH DX5CR: DSEL (Bit 0)                                 */
#define USIC_CH_DX5CR_DSEL_Msk                (0x7UL)                   /*!< USIC_CH DX5CR: DSEL (Bitfield-Mask: 0x07)                   */
#define USIC_CH_DX5CR_INSW_Pos                (4UL)                     /*!< USIC_CH DX5CR: INSW (Bit 4)                                 */
#define USIC_CH_DX5CR_INSW_Msk                (0x10UL)                  /*!< USIC_CH DX5CR: INSW (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX5CR_DFEN_Pos                (5UL)                     /*!< USIC_CH DX5CR: DFEN (Bit 5)                                 */
#define USIC_CH_DX5CR_DFEN_Msk                (0x20UL)                  /*!< USIC_CH DX5CR: DFEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX5CR_DSEN_Pos                (6UL)                     /*!< USIC_CH DX5CR: DSEN (Bit 6)                                 */
#define USIC_CH_DX5CR_DSEN_Msk                (0x40UL)                  /*!< USIC_CH DX5CR: DSEN (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX5CR_DPOL_Pos                (8UL)                     /*!< USIC_CH DX5CR: DPOL (Bit 8)                                 */
#define USIC_CH_DX5CR_DPOL_Msk                (0x100UL)                 /*!< USIC_CH DX5CR: DPOL (Bitfield-Mask: 0x01)                   */
#define USIC_CH_DX5CR_SFSEL_Pos               (9UL)                     /*!< USIC_CH DX5CR: SFSEL (Bit 9)                                */
#define USIC_CH_DX5CR_SFSEL_Msk               (0x200UL)                 /*!< USIC_CH DX5CR: SFSEL (Bitfield-Mask: 0x01)                  */
#define USIC_CH_DX5CR_CM_Pos                  (10UL)                    /*!< USIC_CH DX5CR: CM (Bit 10)                                  */
#define USIC_CH_DX5CR_CM_Msk                  (0xc00UL)                 /*!< USIC_CH DX5CR: CM (Bitfield-Mask: 0x03)                     */
#define USIC_CH_DX5CR_DXS_Pos                 (15UL)                    /*!< USIC_CH DX5CR: DXS (Bit 15)                                 */
#define USIC_CH_DX5CR_DXS_Msk                 (0x8000UL)                /*!< USIC_CH DX5CR: DXS (Bitfield-Mask: 0x01)                    */

/* --------------------------------  USIC_CH_SCTR  -------------------------------- */
#define USIC_CH_SCTR_SDIR_Pos                 (0UL)                     /*!< USIC_CH SCTR: SDIR (Bit 0)                                  */
#define USIC_CH_SCTR_SDIR_Msk                 (0x1UL)                   /*!< USIC_CH SCTR: SDIR (Bitfield-Mask: 0x01)                    */
#define USIC_CH_SCTR_PDL_Pos                  (1UL)                     /*!< USIC_CH SCTR: PDL (Bit 1)                                   */
#define USIC_CH_SCTR_PDL_Msk                  (0x2UL)                   /*!< USIC_CH SCTR: PDL (Bitfield-Mask: 0x01)                     */
#define USIC_CH_SCTR_DSM_Pos                  (2UL)                     /*!< USIC_CH SCTR: DSM (Bit 2)                                   */
#define USIC_CH_SCTR_DSM_Msk                  (0xcUL)                   /*!< USIC_CH SCTR: DSM (Bitfield-Mask: 0x03)                     */
#define USIC_CH_SCTR_HPCDIR_Pos               (4UL)                     /*!< USIC_CH SCTR: HPCDIR (Bit 4)                                */
#define USIC_CH_SCTR_HPCDIR_Msk               (0x10UL)                  /*!< USIC_CH SCTR: HPCDIR (Bitfield-Mask: 0x01)                  */
#define USIC_CH_SCTR_DOCFG_Pos                (6UL)                     /*!< USIC_CH SCTR: DOCFG (Bit 6)                                 */
#define USIC_CH_SCTR_DOCFG_Msk                (0xc0UL)                  /*!< USIC_CH SCTR: DOCFG (Bitfield-Mask: 0x03)                   */
#define USIC_CH_SCTR_TRM_Pos                  (8UL)                     /*!< USIC_CH SCTR: TRM (Bit 8)                                   */
#define USIC_CH_SCTR_TRM_Msk                  (0x300UL)                 /*!< USIC_CH SCTR: TRM (Bitfield-Mask: 0x03)                     */
#define USIC_CH_SCTR_FLE_Pos                  (16UL)                    /*!< USIC_CH SCTR: FLE (Bit 16)                                  */
#define USIC_CH_SCTR_FLE_Msk                  (0x3f0000UL)              /*!< USIC_CH SCTR: FLE (Bitfield-Mask: 0x3f)                     */
#define USIC_CH_SCTR_WLE_Pos                  (24UL)                    /*!< USIC_CH SCTR: WLE (Bit 24)                                  */
#define USIC_CH_SCTR_WLE_Msk                  (0xf000000UL)             /*!< USIC_CH SCTR: WLE (Bitfield-Mask: 0x0f)                     */

/* --------------------------------  USIC_CH_TCSR  -------------------------------- */
#define USIC_CH_TCSR_WLEMD_Pos                (0UL)                     /*!< USIC_CH TCSR: WLEMD (Bit 0)                                 */
#define USIC_CH_TCSR_WLEMD_Msk                (0x1UL)                   /*!< USIC_CH TCSR: WLEMD (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TCSR_SELMD_Pos                (1UL)                     /*!< USIC_CH TCSR: SELMD (Bit 1)                                 */
#define USIC_CH_TCSR_SELMD_Msk                (0x2UL)                   /*!< USIC_CH TCSR: SELMD (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TCSR_FLEMD_Pos                (2UL)                     /*!< USIC_CH TCSR: FLEMD (Bit 2)                                 */
#define USIC_CH_TCSR_FLEMD_Msk                (0x4UL)                   /*!< USIC_CH TCSR: FLEMD (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TCSR_WAMD_Pos                 (3UL)                     /*!< USIC_CH TCSR: WAMD (Bit 3)                                  */
#define USIC_CH_TCSR_WAMD_Msk                 (0x8UL)                   /*!< USIC_CH TCSR: WAMD (Bitfield-Mask: 0x01)                    */
#define USIC_CH_TCSR_HPCMD_Pos                (4UL)                     /*!< USIC_CH TCSR: HPCMD (Bit 4)                                 */
#define USIC_CH_TCSR_HPCMD_Msk                (0x10UL)                  /*!< USIC_CH TCSR: HPCMD (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TCSR_SOF_Pos                  (5UL)                     /*!< USIC_CH TCSR: SOF (Bit 5)                                   */
#define USIC_CH_TCSR_SOF_Msk                  (0x20UL)                  /*!< USIC_CH TCSR: SOF (Bitfield-Mask: 0x01)                     */
#define USIC_CH_TCSR_EOF_Pos                  (6UL)                     /*!< USIC_CH TCSR: EOF (Bit 6)                                   */
#define USIC_CH_TCSR_EOF_Msk                  (0x40UL)                  /*!< USIC_CH TCSR: EOF (Bitfield-Mask: 0x01)                     */
#define USIC_CH_TCSR_TDV_Pos                  (7UL)                     /*!< USIC_CH TCSR: TDV (Bit 7)                                   */
#define USIC_CH_TCSR_TDV_Msk                  (0x80UL)                  /*!< USIC_CH TCSR: TDV (Bitfield-Mask: 0x01)                     */
#define USIC_CH_TCSR_TDSSM_Pos                (8UL)                     /*!< USIC_CH TCSR: TDSSM (Bit 8)                                 */
#define USIC_CH_TCSR_TDSSM_Msk                (0x100UL)                 /*!< USIC_CH TCSR: TDSSM (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TCSR_TDEN_Pos                 (10UL)                    /*!< USIC_CH TCSR: TDEN (Bit 10)                                 */
#define USIC_CH_TCSR_TDEN_Msk                 (0xc00UL)                 /*!< USIC_CH TCSR: TDEN (Bitfield-Mask: 0x03)                    */
#define USIC_CH_TCSR_TDVTR_Pos                (12UL)                    /*!< USIC_CH TCSR: TDVTR (Bit 12)                                */
#define USIC_CH_TCSR_TDVTR_Msk                (0x1000UL)                /*!< USIC_CH TCSR: TDVTR (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TCSR_WA_Pos                   (13UL)                    /*!< USIC_CH TCSR: WA (Bit 13)                                   */
#define USIC_CH_TCSR_WA_Msk                   (0x2000UL)                /*!< USIC_CH TCSR: WA (Bitfield-Mask: 0x01)                      */
#define USIC_CH_TCSR_TSOF_Pos                 (24UL)                    /*!< USIC_CH TCSR: TSOF (Bit 24)                                 */
#define USIC_CH_TCSR_TSOF_Msk                 (0x1000000UL)             /*!< USIC_CH TCSR: TSOF (Bitfield-Mask: 0x01)                    */
#define USIC_CH_TCSR_TV_Pos                   (26UL)                    /*!< USIC_CH TCSR: TV (Bit 26)                                   */
#define USIC_CH_TCSR_TV_Msk                   (0x4000000UL)             /*!< USIC_CH TCSR: TV (Bitfield-Mask: 0x01)                      */
#define USIC_CH_TCSR_TVC_Pos                  (27UL)                    /*!< USIC_CH TCSR: TVC (Bit 27)                                  */
#define USIC_CH_TCSR_TVC_Msk                  (0x8000000UL)             /*!< USIC_CH TCSR: TVC (Bitfield-Mask: 0x01)                     */
#define USIC_CH_TCSR_TE_Pos                   (28UL)                    /*!< USIC_CH TCSR: TE (Bit 28)                                   */
#define USIC_CH_TCSR_TE_Msk                   (0x10000000UL)            /*!< USIC_CH TCSR: TE (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  USIC_CH_PCR  -------------------------------- */
#define USIC_CH_PCR_CTR0_Pos                  (0UL)                     /*!< USIC_CH PCR: CTR0 (Bit 0)                                   */
#define USIC_CH_PCR_CTR0_Msk                  (0x1UL)                   /*!< USIC_CH PCR: CTR0 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PCR_CTR1_Pos                  (1UL)                     /*!< USIC_CH PCR: CTR1 (Bit 1)                                   */
#define USIC_CH_PCR_CTR1_Msk                  (0x2UL)                   /*!< USIC_CH PCR: CTR1 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PCR_CTR2_Pos                  (2UL)                     /*!< USIC_CH PCR: CTR2 (Bit 2)                                   */
#define USIC_CH_PCR_CTR2_Msk                  (0x4UL)                   /*!< USIC_CH PCR: CTR2 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PCR_CTR3_Pos                  (3UL)                     /*!< USIC_CH PCR: CTR3 (Bit 3)                                   */
#define USIC_CH_PCR_CTR3_Msk                  (0x8UL)                   /*!< USIC_CH PCR: CTR3 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PCR_CTR4_Pos                  (4UL)                     /*!< USIC_CH PCR: CTR4 (Bit 4)                                   */
#define USIC_CH_PCR_CTR4_Msk                  (0x10UL)                  /*!< USIC_CH PCR: CTR4 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PCR_CTR5_Pos                  (5UL)                     /*!< USIC_CH PCR: CTR5 (Bit 5)                                   */
#define USIC_CH_PCR_CTR5_Msk                  (0x20UL)                  /*!< USIC_CH PCR: CTR5 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PCR_CTR6_Pos                  (6UL)                     /*!< USIC_CH PCR: CTR6 (Bit 6)                                   */
#define USIC_CH_PCR_CTR6_Msk                  (0x40UL)                  /*!< USIC_CH PCR: CTR6 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PCR_CTR7_Pos                  (7UL)                     /*!< USIC_CH PCR: CTR7 (Bit 7)                                   */
#define USIC_CH_PCR_CTR7_Msk                  (0x80UL)                  /*!< USIC_CH PCR: CTR7 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PCR_CTR8_Pos                  (8UL)                     /*!< USIC_CH PCR: CTR8 (Bit 8)                                   */
#define USIC_CH_PCR_CTR8_Msk                  (0x100UL)                 /*!< USIC_CH PCR: CTR8 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PCR_CTR9_Pos                  (9UL)                     /*!< USIC_CH PCR: CTR9 (Bit 9)                                   */
#define USIC_CH_PCR_CTR9_Msk                  (0x200UL)                 /*!< USIC_CH PCR: CTR9 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PCR_CTR10_Pos                 (10UL)                    /*!< USIC_CH PCR: CTR10 (Bit 10)                                 */
#define USIC_CH_PCR_CTR10_Msk                 (0x400UL)                 /*!< USIC_CH PCR: CTR10 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR11_Pos                 (11UL)                    /*!< USIC_CH PCR: CTR11 (Bit 11)                                 */
#define USIC_CH_PCR_CTR11_Msk                 (0x800UL)                 /*!< USIC_CH PCR: CTR11 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR12_Pos                 (12UL)                    /*!< USIC_CH PCR: CTR12 (Bit 12)                                 */
#define USIC_CH_PCR_CTR12_Msk                 (0x1000UL)                /*!< USIC_CH PCR: CTR12 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR13_Pos                 (13UL)                    /*!< USIC_CH PCR: CTR13 (Bit 13)                                 */
#define USIC_CH_PCR_CTR13_Msk                 (0x2000UL)                /*!< USIC_CH PCR: CTR13 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR14_Pos                 (14UL)                    /*!< USIC_CH PCR: CTR14 (Bit 14)                                 */
#define USIC_CH_PCR_CTR14_Msk                 (0x4000UL)                /*!< USIC_CH PCR: CTR14 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR15_Pos                 (15UL)                    /*!< USIC_CH PCR: CTR15 (Bit 15)                                 */
#define USIC_CH_PCR_CTR15_Msk                 (0x8000UL)                /*!< USIC_CH PCR: CTR15 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR16_Pos                 (16UL)                    /*!< USIC_CH PCR: CTR16 (Bit 16)                                 */
#define USIC_CH_PCR_CTR16_Msk                 (0x10000UL)               /*!< USIC_CH PCR: CTR16 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR17_Pos                 (17UL)                    /*!< USIC_CH PCR: CTR17 (Bit 17)                                 */
#define USIC_CH_PCR_CTR17_Msk                 (0x20000UL)               /*!< USIC_CH PCR: CTR17 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR18_Pos                 (18UL)                    /*!< USIC_CH PCR: CTR18 (Bit 18)                                 */
#define USIC_CH_PCR_CTR18_Msk                 (0x40000UL)               /*!< USIC_CH PCR: CTR18 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR19_Pos                 (19UL)                    /*!< USIC_CH PCR: CTR19 (Bit 19)                                 */
#define USIC_CH_PCR_CTR19_Msk                 (0x80000UL)               /*!< USIC_CH PCR: CTR19 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR20_Pos                 (20UL)                    /*!< USIC_CH PCR: CTR20 (Bit 20)                                 */
#define USIC_CH_PCR_CTR20_Msk                 (0x100000UL)              /*!< USIC_CH PCR: CTR20 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR21_Pos                 (21UL)                    /*!< USIC_CH PCR: CTR21 (Bit 21)                                 */
#define USIC_CH_PCR_CTR21_Msk                 (0x200000UL)              /*!< USIC_CH PCR: CTR21 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR22_Pos                 (22UL)                    /*!< USIC_CH PCR: CTR22 (Bit 22)                                 */
#define USIC_CH_PCR_CTR22_Msk                 (0x400000UL)              /*!< USIC_CH PCR: CTR22 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR23_Pos                 (23UL)                    /*!< USIC_CH PCR: CTR23 (Bit 23)                                 */
#define USIC_CH_PCR_CTR23_Msk                 (0x800000UL)              /*!< USIC_CH PCR: CTR23 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR24_Pos                 (24UL)                    /*!< USIC_CH PCR: CTR24 (Bit 24)                                 */
#define USIC_CH_PCR_CTR24_Msk                 (0x1000000UL)             /*!< USIC_CH PCR: CTR24 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR25_Pos                 (25UL)                    /*!< USIC_CH PCR: CTR25 (Bit 25)                                 */
#define USIC_CH_PCR_CTR25_Msk                 (0x2000000UL)             /*!< USIC_CH PCR: CTR25 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR26_Pos                 (26UL)                    /*!< USIC_CH PCR: CTR26 (Bit 26)                                 */
#define USIC_CH_PCR_CTR26_Msk                 (0x4000000UL)             /*!< USIC_CH PCR: CTR26 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR27_Pos                 (27UL)                    /*!< USIC_CH PCR: CTR27 (Bit 27)                                 */
#define USIC_CH_PCR_CTR27_Msk                 (0x8000000UL)             /*!< USIC_CH PCR: CTR27 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR28_Pos                 (28UL)                    /*!< USIC_CH PCR: CTR28 (Bit 28)                                 */
#define USIC_CH_PCR_CTR28_Msk                 (0x10000000UL)            /*!< USIC_CH PCR: CTR28 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR29_Pos                 (29UL)                    /*!< USIC_CH PCR: CTR29 (Bit 29)                                 */
#define USIC_CH_PCR_CTR29_Msk                 (0x20000000UL)            /*!< USIC_CH PCR: CTR29 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR30_Pos                 (30UL)                    /*!< USIC_CH PCR: CTR30 (Bit 30)                                 */
#define USIC_CH_PCR_CTR30_Msk                 (0x40000000UL)            /*!< USIC_CH PCR: CTR30 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PCR_CTR31_Pos                 (31UL)                    /*!< USIC_CH PCR: CTR31 (Bit 31)                                 */
#define USIC_CH_PCR_CTR31_Msk                 (0x80000000UL)            /*!< USIC_CH PCR: CTR31 (Bitfield-Mask: 0x01)                    */

/* -----------------------------  USIC_CH_PCR_ASCMode  ---------------------------- */
#define USIC_CH_PCR_ASCMode_SMD_Pos           (0UL)                     /*!< USIC_CH PCR_ASCMode: SMD (Bit 0)                            */
#define USIC_CH_PCR_ASCMode_SMD_Msk           (0x1UL)                   /*!< USIC_CH PCR_ASCMode: SMD (Bitfield-Mask: 0x01)              */
#define USIC_CH_PCR_ASCMode_STPB_Pos          (1UL)                     /*!< USIC_CH PCR_ASCMode: STPB (Bit 1)                           */
#define USIC_CH_PCR_ASCMode_STPB_Msk          (0x2UL)                   /*!< USIC_CH PCR_ASCMode: STPB (Bitfield-Mask: 0x01)             */
#define USIC_CH_PCR_ASCMode_IDM_Pos           (2UL)                     /*!< USIC_CH PCR_ASCMode: IDM (Bit 2)                            */
#define USIC_CH_PCR_ASCMode_IDM_Msk           (0x4UL)                   /*!< USIC_CH PCR_ASCMode: IDM (Bitfield-Mask: 0x01)              */
#define USIC_CH_PCR_ASCMode_SBIEN_Pos         (3UL)                     /*!< USIC_CH PCR_ASCMode: SBIEN (Bit 3)                          */
#define USIC_CH_PCR_ASCMode_SBIEN_Msk         (0x8UL)                   /*!< USIC_CH PCR_ASCMode: SBIEN (Bitfield-Mask: 0x01)            */
#define USIC_CH_PCR_ASCMode_CDEN_Pos          (4UL)                     /*!< USIC_CH PCR_ASCMode: CDEN (Bit 4)                           */
#define USIC_CH_PCR_ASCMode_CDEN_Msk          (0x10UL)                  /*!< USIC_CH PCR_ASCMode: CDEN (Bitfield-Mask: 0x01)             */
#define USIC_CH_PCR_ASCMode_RNIEN_Pos         (5UL)                     /*!< USIC_CH PCR_ASCMode: RNIEN (Bit 5)                          */
#define USIC_CH_PCR_ASCMode_RNIEN_Msk         (0x20UL)                  /*!< USIC_CH PCR_ASCMode: RNIEN (Bitfield-Mask: 0x01)            */
#define USIC_CH_PCR_ASCMode_FEIEN_Pos         (6UL)                     /*!< USIC_CH PCR_ASCMode: FEIEN (Bit 6)                          */
#define USIC_CH_PCR_ASCMode_FEIEN_Msk         (0x40UL)                  /*!< USIC_CH PCR_ASCMode: FEIEN (Bitfield-Mask: 0x01)            */
#define USIC_CH_PCR_ASCMode_FFIEN_Pos         (7UL)                     /*!< USIC_CH PCR_ASCMode: FFIEN (Bit 7)                          */
#define USIC_CH_PCR_ASCMode_FFIEN_Msk         (0x80UL)                  /*!< USIC_CH PCR_ASCMode: FFIEN (Bitfield-Mask: 0x01)            */
#define USIC_CH_PCR_ASCMode_SP_Pos            (8UL)                     /*!< USIC_CH PCR_ASCMode: SP (Bit 8)                             */
#define USIC_CH_PCR_ASCMode_SP_Msk            (0x1f00UL)                /*!< USIC_CH PCR_ASCMode: SP (Bitfield-Mask: 0x1f)               */
#define USIC_CH_PCR_ASCMode_PL_Pos            (13UL)                    /*!< USIC_CH PCR_ASCMode: PL (Bit 13)                            */
#define USIC_CH_PCR_ASCMode_PL_Msk            (0xe000UL)                /*!< USIC_CH PCR_ASCMode: PL (Bitfield-Mask: 0x07)               */
#define USIC_CH_PCR_ASCMode_RSTEN_Pos         (16UL)                    /*!< USIC_CH PCR_ASCMode: RSTEN (Bit 16)                         */
#define USIC_CH_PCR_ASCMode_RSTEN_Msk         (0x10000UL)               /*!< USIC_CH PCR_ASCMode: RSTEN (Bitfield-Mask: 0x01)            */
#define USIC_CH_PCR_ASCMode_TSTEN_Pos         (17UL)                    /*!< USIC_CH PCR_ASCMode: TSTEN (Bit 17)                         */
#define USIC_CH_PCR_ASCMode_TSTEN_Msk         (0x20000UL)               /*!< USIC_CH PCR_ASCMode: TSTEN (Bitfield-Mask: 0x01)            */
#define USIC_CH_PCR_ASCMode_MCLK_Pos          (31UL)                    /*!< USIC_CH PCR_ASCMode: MCLK (Bit 31)                          */
#define USIC_CH_PCR_ASCMode_MCLK_Msk          (0x80000000UL)            /*!< USIC_CH PCR_ASCMode: MCLK (Bitfield-Mask: 0x01)             */

/* -----------------------------  USIC_CH_PCR_SSCMode  ---------------------------- */
#define USIC_CH_PCR_SSCMode_MSLSEN_Pos        (0UL)                     /*!< USIC_CH PCR_SSCMode: MSLSEN (Bit 0)                         */
#define USIC_CH_PCR_SSCMode_MSLSEN_Msk        (0x1UL)                   /*!< USIC_CH PCR_SSCMode: MSLSEN (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_SSCMode_SELCTR_Pos        (1UL)                     /*!< USIC_CH PCR_SSCMode: SELCTR (Bit 1)                         */
#define USIC_CH_PCR_SSCMode_SELCTR_Msk        (0x2UL)                   /*!< USIC_CH PCR_SSCMode: SELCTR (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_SSCMode_SELINV_Pos        (2UL)                     /*!< USIC_CH PCR_SSCMode: SELINV (Bit 2)                         */
#define USIC_CH_PCR_SSCMode_SELINV_Msk        (0x4UL)                   /*!< USIC_CH PCR_SSCMode: SELINV (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_SSCMode_FEM_Pos           (3UL)                     /*!< USIC_CH PCR_SSCMode: FEM (Bit 3)                            */
#define USIC_CH_PCR_SSCMode_FEM_Msk           (0x8UL)                   /*!< USIC_CH PCR_SSCMode: FEM (Bitfield-Mask: 0x01)              */
#define USIC_CH_PCR_SSCMode_CTQSEL1_Pos       (4UL)                     /*!< USIC_CH PCR_SSCMode: CTQSEL1 (Bit 4)                        */
#define USIC_CH_PCR_SSCMode_CTQSEL1_Msk       (0x30UL)                  /*!< USIC_CH PCR_SSCMode: CTQSEL1 (Bitfield-Mask: 0x03)          */
#define USIC_CH_PCR_SSCMode_PCTQ1_Pos         (6UL)                     /*!< USIC_CH PCR_SSCMode: PCTQ1 (Bit 6)                          */
#define USIC_CH_PCR_SSCMode_PCTQ1_Msk         (0xc0UL)                  /*!< USIC_CH PCR_SSCMode: PCTQ1 (Bitfield-Mask: 0x03)            */
#define USIC_CH_PCR_SSCMode_DCTQ1_Pos         (8UL)                     /*!< USIC_CH PCR_SSCMode: DCTQ1 (Bit 8)                          */
#define USIC_CH_PCR_SSCMode_DCTQ1_Msk         (0x1f00UL)                /*!< USIC_CH PCR_SSCMode: DCTQ1 (Bitfield-Mask: 0x1f)            */
#define USIC_CH_PCR_SSCMode_PARIEN_Pos        (13UL)                    /*!< USIC_CH PCR_SSCMode: PARIEN (Bit 13)                        */
#define USIC_CH_PCR_SSCMode_PARIEN_Msk        (0x2000UL)                /*!< USIC_CH PCR_SSCMode: PARIEN (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_SSCMode_MSLSIEN_Pos       (14UL)                    /*!< USIC_CH PCR_SSCMode: MSLSIEN (Bit 14)                       */
#define USIC_CH_PCR_SSCMode_MSLSIEN_Msk       (0x4000UL)                /*!< USIC_CH PCR_SSCMode: MSLSIEN (Bitfield-Mask: 0x01)          */
#define USIC_CH_PCR_SSCMode_DX2TIEN_Pos       (15UL)                    /*!< USIC_CH PCR_SSCMode: DX2TIEN (Bit 15)                       */
#define USIC_CH_PCR_SSCMode_DX2TIEN_Msk       (0x8000UL)                /*!< USIC_CH PCR_SSCMode: DX2TIEN (Bitfield-Mask: 0x01)          */
#define USIC_CH_PCR_SSCMode_SELO_Pos          (16UL)                    /*!< USIC_CH PCR_SSCMode: SELO (Bit 16)                          */
#define USIC_CH_PCR_SSCMode_SELO_Msk          (0xff0000UL)              /*!< USIC_CH PCR_SSCMode: SELO (Bitfield-Mask: 0xff)             */
#define USIC_CH_PCR_SSCMode_TIWEN_Pos         (24UL)                    /*!< USIC_CH PCR_SSCMode: TIWEN (Bit 24)                         */
#define USIC_CH_PCR_SSCMode_TIWEN_Msk         (0x1000000UL)             /*!< USIC_CH PCR_SSCMode: TIWEN (Bitfield-Mask: 0x01)            */
#define USIC_CH_PCR_SSCMode_SLPHSEL_Pos       (25UL)                    /*!< USIC_CH PCR_SSCMode: SLPHSEL (Bit 25)                       */
#define USIC_CH_PCR_SSCMode_SLPHSEL_Msk       (0x2000000UL)             /*!< USIC_CH PCR_SSCMode: SLPHSEL (Bitfield-Mask: 0x01)          */
#define USIC_CH_PCR_SSCMode_MCLK_Pos          (31UL)                    /*!< USIC_CH PCR_SSCMode: MCLK (Bit 31)                          */
#define USIC_CH_PCR_SSCMode_MCLK_Msk          (0x80000000UL)            /*!< USIC_CH PCR_SSCMode: MCLK (Bitfield-Mask: 0x01)             */

/* -----------------------------  USIC_CH_PCR_IICMode  ---------------------------- */
#define USIC_CH_PCR_IICMode_SLAD_Pos          (0UL)                     /*!< USIC_CH PCR_IICMode: SLAD (Bit 0)                           */
#define USIC_CH_PCR_IICMode_SLAD_Msk          (0xffffUL)                /*!< USIC_CH PCR_IICMode: SLAD (Bitfield-Mask: 0xffff)           */
#define USIC_CH_PCR_IICMode_ACK00_Pos         (16UL)                    /*!< USIC_CH PCR_IICMode: ACK00 (Bit 16)                         */
#define USIC_CH_PCR_IICMode_ACK00_Msk         (0x10000UL)               /*!< USIC_CH PCR_IICMode: ACK00 (Bitfield-Mask: 0x01)            */
#define USIC_CH_PCR_IICMode_STIM_Pos          (17UL)                    /*!< USIC_CH PCR_IICMode: STIM (Bit 17)                          */
#define USIC_CH_PCR_IICMode_STIM_Msk          (0x20000UL)               /*!< USIC_CH PCR_IICMode: STIM (Bitfield-Mask: 0x01)             */
#define USIC_CH_PCR_IICMode_SCRIEN_Pos        (18UL)                    /*!< USIC_CH PCR_IICMode: SCRIEN (Bit 18)                        */
#define USIC_CH_PCR_IICMode_SCRIEN_Msk        (0x40000UL)               /*!< USIC_CH PCR_IICMode: SCRIEN (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_IICMode_RSCRIEN_Pos       (19UL)                    /*!< USIC_CH PCR_IICMode: RSCRIEN (Bit 19)                       */
#define USIC_CH_PCR_IICMode_RSCRIEN_Msk       (0x80000UL)               /*!< USIC_CH PCR_IICMode: RSCRIEN (Bitfield-Mask: 0x01)          */
#define USIC_CH_PCR_IICMode_PCRIEN_Pos        (20UL)                    /*!< USIC_CH PCR_IICMode: PCRIEN (Bit 20)                        */
#define USIC_CH_PCR_IICMode_PCRIEN_Msk        (0x100000UL)              /*!< USIC_CH PCR_IICMode: PCRIEN (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_IICMode_NACKIEN_Pos       (21UL)                    /*!< USIC_CH PCR_IICMode: NACKIEN (Bit 21)                       */
#define USIC_CH_PCR_IICMode_NACKIEN_Msk       (0x200000UL)              /*!< USIC_CH PCR_IICMode: NACKIEN (Bitfield-Mask: 0x01)          */
#define USIC_CH_PCR_IICMode_ARLIEN_Pos        (22UL)                    /*!< USIC_CH PCR_IICMode: ARLIEN (Bit 22)                        */
#define USIC_CH_PCR_IICMode_ARLIEN_Msk        (0x400000UL)              /*!< USIC_CH PCR_IICMode: ARLIEN (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_IICMode_SRRIEN_Pos        (23UL)                    /*!< USIC_CH PCR_IICMode: SRRIEN (Bit 23)                        */
#define USIC_CH_PCR_IICMode_SRRIEN_Msk        (0x800000UL)              /*!< USIC_CH PCR_IICMode: SRRIEN (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_IICMode_ERRIEN_Pos        (24UL)                    /*!< USIC_CH PCR_IICMode: ERRIEN (Bit 24)                        */
#define USIC_CH_PCR_IICMode_ERRIEN_Msk        (0x1000000UL)             /*!< USIC_CH PCR_IICMode: ERRIEN (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_IICMode_SACKDIS_Pos       (25UL)                    /*!< USIC_CH PCR_IICMode: SACKDIS (Bit 25)                       */
#define USIC_CH_PCR_IICMode_SACKDIS_Msk       (0x2000000UL)             /*!< USIC_CH PCR_IICMode: SACKDIS (Bitfield-Mask: 0x01)          */
#define USIC_CH_PCR_IICMode_HDEL_Pos          (26UL)                    /*!< USIC_CH PCR_IICMode: HDEL (Bit 26)                          */
#define USIC_CH_PCR_IICMode_HDEL_Msk          (0x3c000000UL)            /*!< USIC_CH PCR_IICMode: HDEL (Bitfield-Mask: 0x0f)             */
#define USIC_CH_PCR_IICMode_ACKIEN_Pos        (30UL)                    /*!< USIC_CH PCR_IICMode: ACKIEN (Bit 30)                        */
#define USIC_CH_PCR_IICMode_ACKIEN_Msk        (0x40000000UL)            /*!< USIC_CH PCR_IICMode: ACKIEN (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_IICMode_MCLK_Pos          (31UL)                    /*!< USIC_CH PCR_IICMode: MCLK (Bit 31)                          */
#define USIC_CH_PCR_IICMode_MCLK_Msk          (0x80000000UL)            /*!< USIC_CH PCR_IICMode: MCLK (Bitfield-Mask: 0x01)             */

/* -----------------------------  USIC_CH_PCR_IISMode  ---------------------------- */
#define USIC_CH_PCR_IISMode_WAGEN_Pos         (0UL)                     /*!< USIC_CH PCR_IISMode: WAGEN (Bit 0)                          */
#define USIC_CH_PCR_IISMode_WAGEN_Msk         (0x1UL)                   /*!< USIC_CH PCR_IISMode: WAGEN (Bitfield-Mask: 0x01)            */
#define USIC_CH_PCR_IISMode_DTEN_Pos          (1UL)                     /*!< USIC_CH PCR_IISMode: DTEN (Bit 1)                           */
#define USIC_CH_PCR_IISMode_DTEN_Msk          (0x2UL)                   /*!< USIC_CH PCR_IISMode: DTEN (Bitfield-Mask: 0x01)             */
#define USIC_CH_PCR_IISMode_SELINV_Pos        (2UL)                     /*!< USIC_CH PCR_IISMode: SELINV (Bit 2)                         */
#define USIC_CH_PCR_IISMode_SELINV_Msk        (0x4UL)                   /*!< USIC_CH PCR_IISMode: SELINV (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_IISMode_WAFEIEN_Pos       (4UL)                     /*!< USIC_CH PCR_IISMode: WAFEIEN (Bit 4)                        */
#define USIC_CH_PCR_IISMode_WAFEIEN_Msk       (0x10UL)                  /*!< USIC_CH PCR_IISMode: WAFEIEN (Bitfield-Mask: 0x01)          */
#define USIC_CH_PCR_IISMode_WAREIEN_Pos       (5UL)                     /*!< USIC_CH PCR_IISMode: WAREIEN (Bit 5)                        */
#define USIC_CH_PCR_IISMode_WAREIEN_Msk       (0x20UL)                  /*!< USIC_CH PCR_IISMode: WAREIEN (Bitfield-Mask: 0x01)          */
#define USIC_CH_PCR_IISMode_ENDIEN_Pos        (6UL)                     /*!< USIC_CH PCR_IISMode: ENDIEN (Bit 6)                         */
#define USIC_CH_PCR_IISMode_ENDIEN_Msk        (0x40UL)                  /*!< USIC_CH PCR_IISMode: ENDIEN (Bitfield-Mask: 0x01)           */
#define USIC_CH_PCR_IISMode_DX2TIEN_Pos       (15UL)                    /*!< USIC_CH PCR_IISMode: DX2TIEN (Bit 15)                       */
#define USIC_CH_PCR_IISMode_DX2TIEN_Msk       (0x8000UL)                /*!< USIC_CH PCR_IISMode: DX2TIEN (Bitfield-Mask: 0x01)          */
#define USIC_CH_PCR_IISMode_TDEL_Pos          (16UL)                    /*!< USIC_CH PCR_IISMode: TDEL (Bit 16)                          */
#define USIC_CH_PCR_IISMode_TDEL_Msk          (0x3f0000UL)              /*!< USIC_CH PCR_IISMode: TDEL (Bitfield-Mask: 0x3f)             */
#define USIC_CH_PCR_IISMode_MCLK_Pos          (31UL)                    /*!< USIC_CH PCR_IISMode: MCLK (Bit 31)                          */
#define USIC_CH_PCR_IISMode_MCLK_Msk          (0x80000000UL)            /*!< USIC_CH PCR_IISMode: MCLK (Bitfield-Mask: 0x01)             */

/* ---------------------------------  USIC_CH_CCR  -------------------------------- */
#define USIC_CH_CCR_MODE_Pos                  (0UL)                     /*!< USIC_CH CCR: MODE (Bit 0)                                   */
#define USIC_CH_CCR_MODE_Msk                  (0xfUL)                   /*!< USIC_CH CCR: MODE (Bitfield-Mask: 0x0f)                     */
#define USIC_CH_CCR_HPCEN_Pos                 (6UL)                     /*!< USIC_CH CCR: HPCEN (Bit 6)                                  */
#define USIC_CH_CCR_HPCEN_Msk                 (0xc0UL)                  /*!< USIC_CH CCR: HPCEN (Bitfield-Mask: 0x03)                    */
#define USIC_CH_CCR_PM_Pos                    (8UL)                     /*!< USIC_CH CCR: PM (Bit 8)                                     */
#define USIC_CH_CCR_PM_Msk                    (0x300UL)                 /*!< USIC_CH CCR: PM (Bitfield-Mask: 0x03)                       */
#define USIC_CH_CCR_RSIEN_Pos                 (10UL)                    /*!< USIC_CH CCR: RSIEN (Bit 10)                                 */
#define USIC_CH_CCR_RSIEN_Msk                 (0x400UL)                 /*!< USIC_CH CCR: RSIEN (Bitfield-Mask: 0x01)                    */
#define USIC_CH_CCR_DLIEN_Pos                 (11UL)                    /*!< USIC_CH CCR: DLIEN (Bit 11)                                 */
#define USIC_CH_CCR_DLIEN_Msk                 (0x800UL)                 /*!< USIC_CH CCR: DLIEN (Bitfield-Mask: 0x01)                    */
#define USIC_CH_CCR_TSIEN_Pos                 (12UL)                    /*!< USIC_CH CCR: TSIEN (Bit 12)                                 */
#define USIC_CH_CCR_TSIEN_Msk                 (0x1000UL)                /*!< USIC_CH CCR: TSIEN (Bitfield-Mask: 0x01)                    */
#define USIC_CH_CCR_TBIEN_Pos                 (13UL)                    /*!< USIC_CH CCR: TBIEN (Bit 13)                                 */
#define USIC_CH_CCR_TBIEN_Msk                 (0x2000UL)                /*!< USIC_CH CCR: TBIEN (Bitfield-Mask: 0x01)                    */
#define USIC_CH_CCR_RIEN_Pos                  (14UL)                    /*!< USIC_CH CCR: RIEN (Bit 14)                                  */
#define USIC_CH_CCR_RIEN_Msk                  (0x4000UL)                /*!< USIC_CH CCR: RIEN (Bitfield-Mask: 0x01)                     */
#define USIC_CH_CCR_AIEN_Pos                  (15UL)                    /*!< USIC_CH CCR: AIEN (Bit 15)                                  */
#define USIC_CH_CCR_AIEN_Msk                  (0x8000UL)                /*!< USIC_CH CCR: AIEN (Bitfield-Mask: 0x01)                     */
#define USIC_CH_CCR_BRGIEN_Pos                (16UL)                    /*!< USIC_CH CCR: BRGIEN (Bit 16)                                */
#define USIC_CH_CCR_BRGIEN_Msk                (0x10000UL)               /*!< USIC_CH CCR: BRGIEN (Bitfield-Mask: 0x01)                   */

/* --------------------------------  USIC_CH_CMTR  -------------------------------- */
#define USIC_CH_CMTR_CTV_Pos                  (0UL)                     /*!< USIC_CH CMTR: CTV (Bit 0)                                   */
#define USIC_CH_CMTR_CTV_Msk                  (0x3ffUL)                 /*!< USIC_CH CMTR: CTV (Bitfield-Mask: 0x3ff)                    */

/* ---------------------------------  USIC_CH_PSR  -------------------------------- */
#define USIC_CH_PSR_ST0_Pos                   (0UL)                     /*!< USIC_CH PSR: ST0 (Bit 0)                                    */
#define USIC_CH_PSR_ST0_Msk                   (0x1UL)                   /*!< USIC_CH PSR: ST0 (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_ST1_Pos                   (1UL)                     /*!< USIC_CH PSR: ST1 (Bit 1)                                    */
#define USIC_CH_PSR_ST1_Msk                   (0x2UL)                   /*!< USIC_CH PSR: ST1 (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_ST2_Pos                   (2UL)                     /*!< USIC_CH PSR: ST2 (Bit 2)                                    */
#define USIC_CH_PSR_ST2_Msk                   (0x4UL)                   /*!< USIC_CH PSR: ST2 (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_ST3_Pos                   (3UL)                     /*!< USIC_CH PSR: ST3 (Bit 3)                                    */
#define USIC_CH_PSR_ST3_Msk                   (0x8UL)                   /*!< USIC_CH PSR: ST3 (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_ST4_Pos                   (4UL)                     /*!< USIC_CH PSR: ST4 (Bit 4)                                    */
#define USIC_CH_PSR_ST4_Msk                   (0x10UL)                  /*!< USIC_CH PSR: ST4 (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_ST5_Pos                   (5UL)                     /*!< USIC_CH PSR: ST5 (Bit 5)                                    */
#define USIC_CH_PSR_ST5_Msk                   (0x20UL)                  /*!< USIC_CH PSR: ST5 (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_ST6_Pos                   (6UL)                     /*!< USIC_CH PSR: ST6 (Bit 6)                                    */
#define USIC_CH_PSR_ST6_Msk                   (0x40UL)                  /*!< USIC_CH PSR: ST6 (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_ST7_Pos                   (7UL)                     /*!< USIC_CH PSR: ST7 (Bit 7)                                    */
#define USIC_CH_PSR_ST7_Msk                   (0x80UL)                  /*!< USIC_CH PSR: ST7 (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_ST8_Pos                   (8UL)                     /*!< USIC_CH PSR: ST8 (Bit 8)                                    */
#define USIC_CH_PSR_ST8_Msk                   (0x100UL)                 /*!< USIC_CH PSR: ST8 (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_ST9_Pos                   (9UL)                     /*!< USIC_CH PSR: ST9 (Bit 9)                                    */
#define USIC_CH_PSR_ST9_Msk                   (0x200UL)                 /*!< USIC_CH PSR: ST9 (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_RSIF_Pos                  (10UL)                    /*!< USIC_CH PSR: RSIF (Bit 10)                                  */
#define USIC_CH_PSR_RSIF_Msk                  (0x400UL)                 /*!< USIC_CH PSR: RSIF (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PSR_DLIF_Pos                  (11UL)                    /*!< USIC_CH PSR: DLIF (Bit 11)                                  */
#define USIC_CH_PSR_DLIF_Msk                  (0x800UL)                 /*!< USIC_CH PSR: DLIF (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PSR_TSIF_Pos                  (12UL)                    /*!< USIC_CH PSR: TSIF (Bit 12)                                  */
#define USIC_CH_PSR_TSIF_Msk                  (0x1000UL)                /*!< USIC_CH PSR: TSIF (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PSR_TBIF_Pos                  (13UL)                    /*!< USIC_CH PSR: TBIF (Bit 13)                                  */
#define USIC_CH_PSR_TBIF_Msk                  (0x2000UL)                /*!< USIC_CH PSR: TBIF (Bitfield-Mask: 0x01)                     */
#define USIC_CH_PSR_RIF_Pos                   (14UL)                    /*!< USIC_CH PSR: RIF (Bit 14)                                   */
#define USIC_CH_PSR_RIF_Msk                   (0x4000UL)                /*!< USIC_CH PSR: RIF (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_AIF_Pos                   (15UL)                    /*!< USIC_CH PSR: AIF (Bit 15)                                   */
#define USIC_CH_PSR_AIF_Msk                   (0x8000UL)                /*!< USIC_CH PSR: AIF (Bitfield-Mask: 0x01)                      */
#define USIC_CH_PSR_BRGIF_Pos                 (16UL)                    /*!< USIC_CH PSR: BRGIF (Bit 16)                                 */
#define USIC_CH_PSR_BRGIF_Msk                 (0x10000UL)               /*!< USIC_CH PSR: BRGIF (Bitfield-Mask: 0x01)                    */

/* -----------------------------  USIC_CH_PSR_ASCMode  ---------------------------- */
#define USIC_CH_PSR_ASCMode_TXIDLE_Pos        (0UL)                     /*!< USIC_CH PSR_ASCMode: TXIDLE (Bit 0)                         */
#define USIC_CH_PSR_ASCMode_TXIDLE_Msk        (0x1UL)                   /*!< USIC_CH PSR_ASCMode: TXIDLE (Bitfield-Mask: 0x01)           */
#define USIC_CH_PSR_ASCMode_RXIDLE_Pos        (1UL)                     /*!< USIC_CH PSR_ASCMode: RXIDLE (Bit 1)                         */
#define USIC_CH_PSR_ASCMode_RXIDLE_Msk        (0x2UL)                   /*!< USIC_CH PSR_ASCMode: RXIDLE (Bitfield-Mask: 0x01)           */
#define USIC_CH_PSR_ASCMode_SBD_Pos           (2UL)                     /*!< USIC_CH PSR_ASCMode: SBD (Bit 2)                            */
#define USIC_CH_PSR_ASCMode_SBD_Msk           (0x4UL)                   /*!< USIC_CH PSR_ASCMode: SBD (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_ASCMode_COL_Pos           (3UL)                     /*!< USIC_CH PSR_ASCMode: COL (Bit 3)                            */
#define USIC_CH_PSR_ASCMode_COL_Msk           (0x8UL)                   /*!< USIC_CH PSR_ASCMode: COL (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_ASCMode_RNS_Pos           (4UL)                     /*!< USIC_CH PSR_ASCMode: RNS (Bit 4)                            */
#define USIC_CH_PSR_ASCMode_RNS_Msk           (0x10UL)                  /*!< USIC_CH PSR_ASCMode: RNS (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_ASCMode_FER0_Pos          (5UL)                     /*!< USIC_CH PSR_ASCMode: FER0 (Bit 5)                           */
#define USIC_CH_PSR_ASCMode_FER0_Msk          (0x20UL)                  /*!< USIC_CH PSR_ASCMode: FER0 (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_ASCMode_FER1_Pos          (6UL)                     /*!< USIC_CH PSR_ASCMode: FER1 (Bit 6)                           */
#define USIC_CH_PSR_ASCMode_FER1_Msk          (0x40UL)                  /*!< USIC_CH PSR_ASCMode: FER1 (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_ASCMode_RFF_Pos           (7UL)                     /*!< USIC_CH PSR_ASCMode: RFF (Bit 7)                            */
#define USIC_CH_PSR_ASCMode_RFF_Msk           (0x80UL)                  /*!< USIC_CH PSR_ASCMode: RFF (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_ASCMode_TFF_Pos           (8UL)                     /*!< USIC_CH PSR_ASCMode: TFF (Bit 8)                            */
#define USIC_CH_PSR_ASCMode_TFF_Msk           (0x100UL)                 /*!< USIC_CH PSR_ASCMode: TFF (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_ASCMode_BUSY_Pos          (9UL)                     /*!< USIC_CH PSR_ASCMode: BUSY (Bit 9)                           */
#define USIC_CH_PSR_ASCMode_BUSY_Msk          (0x200UL)                 /*!< USIC_CH PSR_ASCMode: BUSY (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_ASCMode_RSIF_Pos          (10UL)                    /*!< USIC_CH PSR_ASCMode: RSIF (Bit 10)                          */
#define USIC_CH_PSR_ASCMode_RSIF_Msk          (0x400UL)                 /*!< USIC_CH PSR_ASCMode: RSIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_ASCMode_DLIF_Pos          (11UL)                    /*!< USIC_CH PSR_ASCMode: DLIF (Bit 11)                          */
#define USIC_CH_PSR_ASCMode_DLIF_Msk          (0x800UL)                 /*!< USIC_CH PSR_ASCMode: DLIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_ASCMode_TSIF_Pos          (12UL)                    /*!< USIC_CH PSR_ASCMode: TSIF (Bit 12)                          */
#define USIC_CH_PSR_ASCMode_TSIF_Msk          (0x1000UL)                /*!< USIC_CH PSR_ASCMode: TSIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_ASCMode_TBIF_Pos          (13UL)                    /*!< USIC_CH PSR_ASCMode: TBIF (Bit 13)                          */
#define USIC_CH_PSR_ASCMode_TBIF_Msk          (0x2000UL)                /*!< USIC_CH PSR_ASCMode: TBIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_ASCMode_RIF_Pos           (14UL)                    /*!< USIC_CH PSR_ASCMode: RIF (Bit 14)                           */
#define USIC_CH_PSR_ASCMode_RIF_Msk           (0x4000UL)                /*!< USIC_CH PSR_ASCMode: RIF (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_ASCMode_AIF_Pos           (15UL)                    /*!< USIC_CH PSR_ASCMode: AIF (Bit 15)                           */
#define USIC_CH_PSR_ASCMode_AIF_Msk           (0x8000UL)                /*!< USIC_CH PSR_ASCMode: AIF (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_ASCMode_BRGIF_Pos         (16UL)                    /*!< USIC_CH PSR_ASCMode: BRGIF (Bit 16)                         */
#define USIC_CH_PSR_ASCMode_BRGIF_Msk         (0x10000UL)               /*!< USIC_CH PSR_ASCMode: BRGIF (Bitfield-Mask: 0x01)            */

/* -----------------------------  USIC_CH_PSR_SSCMode  ---------------------------- */
#define USIC_CH_PSR_SSCMode_MSLS_Pos          (0UL)                     /*!< USIC_CH PSR_SSCMode: MSLS (Bit 0)                           */
#define USIC_CH_PSR_SSCMode_MSLS_Msk          (0x1UL)                   /*!< USIC_CH PSR_SSCMode: MSLS (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_SSCMode_DX2S_Pos          (1UL)                     /*!< USIC_CH PSR_SSCMode: DX2S (Bit 1)                           */
#define USIC_CH_PSR_SSCMode_DX2S_Msk          (0x2UL)                   /*!< USIC_CH PSR_SSCMode: DX2S (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_SSCMode_MSLSEV_Pos        (2UL)                     /*!< USIC_CH PSR_SSCMode: MSLSEV (Bit 2)                         */
#define USIC_CH_PSR_SSCMode_MSLSEV_Msk        (0x4UL)                   /*!< USIC_CH PSR_SSCMode: MSLSEV (Bitfield-Mask: 0x01)           */
#define USIC_CH_PSR_SSCMode_DX2TEV_Pos        (3UL)                     /*!< USIC_CH PSR_SSCMode: DX2TEV (Bit 3)                         */
#define USIC_CH_PSR_SSCMode_DX2TEV_Msk        (0x8UL)                   /*!< USIC_CH PSR_SSCMode: DX2TEV (Bitfield-Mask: 0x01)           */
#define USIC_CH_PSR_SSCMode_PARERR_Pos        (4UL)                     /*!< USIC_CH PSR_SSCMode: PARERR (Bit 4)                         */
#define USIC_CH_PSR_SSCMode_PARERR_Msk        (0x10UL)                  /*!< USIC_CH PSR_SSCMode: PARERR (Bitfield-Mask: 0x01)           */
#define USIC_CH_PSR_SSCMode_RSIF_Pos          (10UL)                    /*!< USIC_CH PSR_SSCMode: RSIF (Bit 10)                          */
#define USIC_CH_PSR_SSCMode_RSIF_Msk          (0x400UL)                 /*!< USIC_CH PSR_SSCMode: RSIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_SSCMode_DLIF_Pos          (11UL)                    /*!< USIC_CH PSR_SSCMode: DLIF (Bit 11)                          */
#define USIC_CH_PSR_SSCMode_DLIF_Msk          (0x800UL)                 /*!< USIC_CH PSR_SSCMode: DLIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_SSCMode_TSIF_Pos          (12UL)                    /*!< USIC_CH PSR_SSCMode: TSIF (Bit 12)                          */
#define USIC_CH_PSR_SSCMode_TSIF_Msk          (0x1000UL)                /*!< USIC_CH PSR_SSCMode: TSIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_SSCMode_TBIF_Pos          (13UL)                    /*!< USIC_CH PSR_SSCMode: TBIF (Bit 13)                          */
#define USIC_CH_PSR_SSCMode_TBIF_Msk          (0x2000UL)                /*!< USIC_CH PSR_SSCMode: TBIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_SSCMode_RIF_Pos           (14UL)                    /*!< USIC_CH PSR_SSCMode: RIF (Bit 14)                           */
#define USIC_CH_PSR_SSCMode_RIF_Msk           (0x4000UL)                /*!< USIC_CH PSR_SSCMode: RIF (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_SSCMode_AIF_Pos           (15UL)                    /*!< USIC_CH PSR_SSCMode: AIF (Bit 15)                           */
#define USIC_CH_PSR_SSCMode_AIF_Msk           (0x8000UL)                /*!< USIC_CH PSR_SSCMode: AIF (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_SSCMode_BRGIF_Pos         (16UL)                    /*!< USIC_CH PSR_SSCMode: BRGIF (Bit 16)                         */
#define USIC_CH_PSR_SSCMode_BRGIF_Msk         (0x10000UL)               /*!< USIC_CH PSR_SSCMode: BRGIF (Bitfield-Mask: 0x01)            */

/* -----------------------------  USIC_CH_PSR_IICMode  ---------------------------- */
#define USIC_CH_PSR_IICMode_SLSEL_Pos         (0UL)                     /*!< USIC_CH PSR_IICMode: SLSEL (Bit 0)                          */
#define USIC_CH_PSR_IICMode_SLSEL_Msk         (0x1UL)                   /*!< USIC_CH PSR_IICMode: SLSEL (Bitfield-Mask: 0x01)            */
#define USIC_CH_PSR_IICMode_WTDF_Pos          (1UL)                     /*!< USIC_CH PSR_IICMode: WTDF (Bit 1)                           */
#define USIC_CH_PSR_IICMode_WTDF_Msk          (0x2UL)                   /*!< USIC_CH PSR_IICMode: WTDF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IICMode_SCR_Pos           (2UL)                     /*!< USIC_CH PSR_IICMode: SCR (Bit 2)                            */
#define USIC_CH_PSR_IICMode_SCR_Msk           (0x4UL)                   /*!< USIC_CH PSR_IICMode: SCR (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_IICMode_RSCR_Pos          (3UL)                     /*!< USIC_CH PSR_IICMode: RSCR (Bit 3)                           */
#define USIC_CH_PSR_IICMode_RSCR_Msk          (0x8UL)                   /*!< USIC_CH PSR_IICMode: RSCR (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IICMode_PCR_Pos           (4UL)                     /*!< USIC_CH PSR_IICMode: PCR (Bit 4)                            */
#define USIC_CH_PSR_IICMode_PCR_Msk           (0x10UL)                  /*!< USIC_CH PSR_IICMode: PCR (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_IICMode_NACK_Pos          (5UL)                     /*!< USIC_CH PSR_IICMode: NACK (Bit 5)                           */
#define USIC_CH_PSR_IICMode_NACK_Msk          (0x20UL)                  /*!< USIC_CH PSR_IICMode: NACK (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IICMode_ARL_Pos           (6UL)                     /*!< USIC_CH PSR_IICMode: ARL (Bit 6)                            */
#define USIC_CH_PSR_IICMode_ARL_Msk           (0x40UL)                  /*!< USIC_CH PSR_IICMode: ARL (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_IICMode_SRR_Pos           (7UL)                     /*!< USIC_CH PSR_IICMode: SRR (Bit 7)                            */
#define USIC_CH_PSR_IICMode_SRR_Msk           (0x80UL)                  /*!< USIC_CH PSR_IICMode: SRR (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_IICMode_ERR_Pos           (8UL)                     /*!< USIC_CH PSR_IICMode: ERR (Bit 8)                            */
#define USIC_CH_PSR_IICMode_ERR_Msk           (0x100UL)                 /*!< USIC_CH PSR_IICMode: ERR (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_IICMode_ACK_Pos           (9UL)                     /*!< USIC_CH PSR_IICMode: ACK (Bit 9)                            */
#define USIC_CH_PSR_IICMode_ACK_Msk           (0x200UL)                 /*!< USIC_CH PSR_IICMode: ACK (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_IICMode_RSIF_Pos          (10UL)                    /*!< USIC_CH PSR_IICMode: RSIF (Bit 10)                          */
#define USIC_CH_PSR_IICMode_RSIF_Msk          (0x400UL)                 /*!< USIC_CH PSR_IICMode: RSIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IICMode_DLIF_Pos          (11UL)                    /*!< USIC_CH PSR_IICMode: DLIF (Bit 11)                          */
#define USIC_CH_PSR_IICMode_DLIF_Msk          (0x800UL)                 /*!< USIC_CH PSR_IICMode: DLIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IICMode_TSIF_Pos          (12UL)                    /*!< USIC_CH PSR_IICMode: TSIF (Bit 12)                          */
#define USIC_CH_PSR_IICMode_TSIF_Msk          (0x1000UL)                /*!< USIC_CH PSR_IICMode: TSIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IICMode_TBIF_Pos          (13UL)                    /*!< USIC_CH PSR_IICMode: TBIF (Bit 13)                          */
#define USIC_CH_PSR_IICMode_TBIF_Msk          (0x2000UL)                /*!< USIC_CH PSR_IICMode: TBIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IICMode_RIF_Pos           (14UL)                    /*!< USIC_CH PSR_IICMode: RIF (Bit 14)                           */
#define USIC_CH_PSR_IICMode_RIF_Msk           (0x4000UL)                /*!< USIC_CH PSR_IICMode: RIF (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_IICMode_AIF_Pos           (15UL)                    /*!< USIC_CH PSR_IICMode: AIF (Bit 15)                           */
#define USIC_CH_PSR_IICMode_AIF_Msk           (0x8000UL)                /*!< USIC_CH PSR_IICMode: AIF (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_IICMode_BRGIF_Pos         (16UL)                    /*!< USIC_CH PSR_IICMode: BRGIF (Bit 16)                         */
#define USIC_CH_PSR_IICMode_BRGIF_Msk         (0x10000UL)               /*!< USIC_CH PSR_IICMode: BRGIF (Bitfield-Mask: 0x01)            */

/* -----------------------------  USIC_CH_PSR_IISMode  ---------------------------- */
#define USIC_CH_PSR_IISMode_WA_Pos            (0UL)                     /*!< USIC_CH PSR_IISMode: WA (Bit 0)                             */
#define USIC_CH_PSR_IISMode_WA_Msk            (0x1UL)                   /*!< USIC_CH PSR_IISMode: WA (Bitfield-Mask: 0x01)               */
#define USIC_CH_PSR_IISMode_DX2S_Pos          (1UL)                     /*!< USIC_CH PSR_IISMode: DX2S (Bit 1)                           */
#define USIC_CH_PSR_IISMode_DX2S_Msk          (0x2UL)                   /*!< USIC_CH PSR_IISMode: DX2S (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IISMode_DX2TEV_Pos        (3UL)                     /*!< USIC_CH PSR_IISMode: DX2TEV (Bit 3)                         */
#define USIC_CH_PSR_IISMode_DX2TEV_Msk        (0x8UL)                   /*!< USIC_CH PSR_IISMode: DX2TEV (Bitfield-Mask: 0x01)           */
#define USIC_CH_PSR_IISMode_WAFE_Pos          (4UL)                     /*!< USIC_CH PSR_IISMode: WAFE (Bit 4)                           */
#define USIC_CH_PSR_IISMode_WAFE_Msk          (0x10UL)                  /*!< USIC_CH PSR_IISMode: WAFE (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IISMode_WARE_Pos          (5UL)                     /*!< USIC_CH PSR_IISMode: WARE (Bit 5)                           */
#define USIC_CH_PSR_IISMode_WARE_Msk          (0x20UL)                  /*!< USIC_CH PSR_IISMode: WARE (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IISMode_END_Pos           (6UL)                     /*!< USIC_CH PSR_IISMode: END (Bit 6)                            */
#define USIC_CH_PSR_IISMode_END_Msk           (0x40UL)                  /*!< USIC_CH PSR_IISMode: END (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_IISMode_RSIF_Pos          (10UL)                    /*!< USIC_CH PSR_IISMode: RSIF (Bit 10)                          */
#define USIC_CH_PSR_IISMode_RSIF_Msk          (0x400UL)                 /*!< USIC_CH PSR_IISMode: RSIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IISMode_DLIF_Pos          (11UL)                    /*!< USIC_CH PSR_IISMode: DLIF (Bit 11)                          */
#define USIC_CH_PSR_IISMode_DLIF_Msk          (0x800UL)                 /*!< USIC_CH PSR_IISMode: DLIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IISMode_TSIF_Pos          (12UL)                    /*!< USIC_CH PSR_IISMode: TSIF (Bit 12)                          */
#define USIC_CH_PSR_IISMode_TSIF_Msk          (0x1000UL)                /*!< USIC_CH PSR_IISMode: TSIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IISMode_TBIF_Pos          (13UL)                    /*!< USIC_CH PSR_IISMode: TBIF (Bit 13)                          */
#define USIC_CH_PSR_IISMode_TBIF_Msk          (0x2000UL)                /*!< USIC_CH PSR_IISMode: TBIF (Bitfield-Mask: 0x01)             */
#define USIC_CH_PSR_IISMode_RIF_Pos           (14UL)                    /*!< USIC_CH PSR_IISMode: RIF (Bit 14)                           */
#define USIC_CH_PSR_IISMode_RIF_Msk           (0x4000UL)                /*!< USIC_CH PSR_IISMode: RIF (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_IISMode_AIF_Pos           (15UL)                    /*!< USIC_CH PSR_IISMode: AIF (Bit 15)                           */
#define USIC_CH_PSR_IISMode_AIF_Msk           (0x8000UL)                /*!< USIC_CH PSR_IISMode: AIF (Bitfield-Mask: 0x01)              */
#define USIC_CH_PSR_IISMode_BRGIF_Pos         (16UL)                    /*!< USIC_CH PSR_IISMode: BRGIF (Bit 16)                         */
#define USIC_CH_PSR_IISMode_BRGIF_Msk         (0x10000UL)               /*!< USIC_CH PSR_IISMode: BRGIF (Bitfield-Mask: 0x01)            */

/* --------------------------------  USIC_CH_PSCR  -------------------------------- */
#define USIC_CH_PSCR_CST0_Pos                 (0UL)                     /*!< USIC_CH PSCR: CST0 (Bit 0)                                  */
#define USIC_CH_PSCR_CST0_Msk                 (0x1UL)                   /*!< USIC_CH PSCR: CST0 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CST1_Pos                 (1UL)                     /*!< USIC_CH PSCR: CST1 (Bit 1)                                  */
#define USIC_CH_PSCR_CST1_Msk                 (0x2UL)                   /*!< USIC_CH PSCR: CST1 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CST2_Pos                 (2UL)                     /*!< USIC_CH PSCR: CST2 (Bit 2)                                  */
#define USIC_CH_PSCR_CST2_Msk                 (0x4UL)                   /*!< USIC_CH PSCR: CST2 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CST3_Pos                 (3UL)                     /*!< USIC_CH PSCR: CST3 (Bit 3)                                  */
#define USIC_CH_PSCR_CST3_Msk                 (0x8UL)                   /*!< USIC_CH PSCR: CST3 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CST4_Pos                 (4UL)                     /*!< USIC_CH PSCR: CST4 (Bit 4)                                  */
#define USIC_CH_PSCR_CST4_Msk                 (0x10UL)                  /*!< USIC_CH PSCR: CST4 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CST5_Pos                 (5UL)                     /*!< USIC_CH PSCR: CST5 (Bit 5)                                  */
#define USIC_CH_PSCR_CST5_Msk                 (0x20UL)                  /*!< USIC_CH PSCR: CST5 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CST6_Pos                 (6UL)                     /*!< USIC_CH PSCR: CST6 (Bit 6)                                  */
#define USIC_CH_PSCR_CST6_Msk                 (0x40UL)                  /*!< USIC_CH PSCR: CST6 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CST7_Pos                 (7UL)                     /*!< USIC_CH PSCR: CST7 (Bit 7)                                  */
#define USIC_CH_PSCR_CST7_Msk                 (0x80UL)                  /*!< USIC_CH PSCR: CST7 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CST8_Pos                 (8UL)                     /*!< USIC_CH PSCR: CST8 (Bit 8)                                  */
#define USIC_CH_PSCR_CST8_Msk                 (0x100UL)                 /*!< USIC_CH PSCR: CST8 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CST9_Pos                 (9UL)                     /*!< USIC_CH PSCR: CST9 (Bit 9)                                  */
#define USIC_CH_PSCR_CST9_Msk                 (0x200UL)                 /*!< USIC_CH PSCR: CST9 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CRSIF_Pos                (10UL)                    /*!< USIC_CH PSCR: CRSIF (Bit 10)                                */
#define USIC_CH_PSCR_CRSIF_Msk                (0x400UL)                 /*!< USIC_CH PSCR: CRSIF (Bitfield-Mask: 0x01)                   */
#define USIC_CH_PSCR_CDLIF_Pos                (11UL)                    /*!< USIC_CH PSCR: CDLIF (Bit 11)                                */
#define USIC_CH_PSCR_CDLIF_Msk                (0x800UL)                 /*!< USIC_CH PSCR: CDLIF (Bitfield-Mask: 0x01)                   */
#define USIC_CH_PSCR_CTSIF_Pos                (12UL)                    /*!< USIC_CH PSCR: CTSIF (Bit 12)                                */
#define USIC_CH_PSCR_CTSIF_Msk                (0x1000UL)                /*!< USIC_CH PSCR: CTSIF (Bitfield-Mask: 0x01)                   */
#define USIC_CH_PSCR_CTBIF_Pos                (13UL)                    /*!< USIC_CH PSCR: CTBIF (Bit 13)                                */
#define USIC_CH_PSCR_CTBIF_Msk                (0x2000UL)                /*!< USIC_CH PSCR: CTBIF (Bitfield-Mask: 0x01)                   */
#define USIC_CH_PSCR_CRIF_Pos                 (14UL)                    /*!< USIC_CH PSCR: CRIF (Bit 14)                                 */
#define USIC_CH_PSCR_CRIF_Msk                 (0x4000UL)                /*!< USIC_CH PSCR: CRIF (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CAIF_Pos                 (15UL)                    /*!< USIC_CH PSCR: CAIF (Bit 15)                                 */
#define USIC_CH_PSCR_CAIF_Msk                 (0x8000UL)                /*!< USIC_CH PSCR: CAIF (Bitfield-Mask: 0x01)                    */
#define USIC_CH_PSCR_CBRGIF_Pos               (16UL)                    /*!< USIC_CH PSCR: CBRGIF (Bit 16)                               */
#define USIC_CH_PSCR_CBRGIF_Msk               (0x10000UL)               /*!< USIC_CH PSCR: CBRGIF (Bitfield-Mask: 0x01)                  */

/* -------------------------------  USIC_CH_RBUFSR  ------------------------------- */
#define USIC_CH_RBUFSR_WLEN_Pos               (0UL)                     /*!< USIC_CH RBUFSR: WLEN (Bit 0)                                */
#define USIC_CH_RBUFSR_WLEN_Msk               (0xfUL)                   /*!< USIC_CH RBUFSR: WLEN (Bitfield-Mask: 0x0f)                  */
#define USIC_CH_RBUFSR_SOF_Pos                (6UL)                     /*!< USIC_CH RBUFSR: SOF (Bit 6)                                 */
#define USIC_CH_RBUFSR_SOF_Msk                (0x40UL)                  /*!< USIC_CH RBUFSR: SOF (Bitfield-Mask: 0x01)                   */
#define USIC_CH_RBUFSR_PAR_Pos                (8UL)                     /*!< USIC_CH RBUFSR: PAR (Bit 8)                                 */
#define USIC_CH_RBUFSR_PAR_Msk                (0x100UL)                 /*!< USIC_CH RBUFSR: PAR (Bitfield-Mask: 0x01)                   */
#define USIC_CH_RBUFSR_PERR_Pos               (9UL)                     /*!< USIC_CH RBUFSR: PERR (Bit 9)                                */
#define USIC_CH_RBUFSR_PERR_Msk               (0x200UL)                 /*!< USIC_CH RBUFSR: PERR (Bitfield-Mask: 0x01)                  */
#define USIC_CH_RBUFSR_RDV0_Pos               (13UL)                    /*!< USIC_CH RBUFSR: RDV0 (Bit 13)                               */
#define USIC_CH_RBUFSR_RDV0_Msk               (0x2000UL)                /*!< USIC_CH RBUFSR: RDV0 (Bitfield-Mask: 0x01)                  */
#define USIC_CH_RBUFSR_RDV1_Pos               (14UL)                    /*!< USIC_CH RBUFSR: RDV1 (Bit 14)                               */
#define USIC_CH_RBUFSR_RDV1_Msk               (0x4000UL)                /*!< USIC_CH RBUFSR: RDV1 (Bitfield-Mask: 0x01)                  */
#define USIC_CH_RBUFSR_DS_Pos                 (15UL)                    /*!< USIC_CH RBUFSR: DS (Bit 15)                                 */
#define USIC_CH_RBUFSR_DS_Msk                 (0x8000UL)                /*!< USIC_CH RBUFSR: DS (Bitfield-Mask: 0x01)                    */

/* --------------------------------  USIC_CH_RBUF  -------------------------------- */
#define USIC_CH_RBUF_DSR_Pos                  (0UL)                     /*!< USIC_CH RBUF: DSR (Bit 0)                                   */
#define USIC_CH_RBUF_DSR_Msk                  (0xffffUL)                /*!< USIC_CH RBUF: DSR (Bitfield-Mask: 0xffff)                   */

/* --------------------------------  USIC_CH_RBUFD  ------------------------------- */
#define USIC_CH_RBUFD_DSR_Pos                 (0UL)                     /*!< USIC_CH RBUFD: DSR (Bit 0)                                  */
#define USIC_CH_RBUFD_DSR_Msk                 (0xffffUL)                /*!< USIC_CH RBUFD: DSR (Bitfield-Mask: 0xffff)                  */

/* --------------------------------  USIC_CH_RBUF0  ------------------------------- */
#define USIC_CH_RBUF0_DSR0_Pos                (0UL)                     /*!< USIC_CH RBUF0: DSR0 (Bit 0)                                 */
#define USIC_CH_RBUF0_DSR0_Msk                (0xffffUL)                /*!< USIC_CH RBUF0: DSR0 (Bitfield-Mask: 0xffff)                 */

/* --------------------------------  USIC_CH_RBUF1  ------------------------------- */
#define USIC_CH_RBUF1_DSR1_Pos                (0UL)                     /*!< USIC_CH RBUF1: DSR1 (Bit 0)                                 */
#define USIC_CH_RBUF1_DSR1_Msk                (0xffffUL)                /*!< USIC_CH RBUF1: DSR1 (Bitfield-Mask: 0xffff)                 */

/* ------------------------------  USIC_CH_RBUF01SR  ------------------------------ */
#define USIC_CH_RBUF01SR_WLEN0_Pos            (0UL)                     /*!< USIC_CH RBUF01SR: WLEN0 (Bit 0)                             */
#define USIC_CH_RBUF01SR_WLEN0_Msk            (0xfUL)                   /*!< USIC_CH RBUF01SR: WLEN0 (Bitfield-Mask: 0x0f)               */
#define USIC_CH_RBUF01SR_SOF0_Pos             (6UL)                     /*!< USIC_CH RBUF01SR: SOF0 (Bit 6)                              */
#define USIC_CH_RBUF01SR_SOF0_Msk             (0x40UL)                  /*!< USIC_CH RBUF01SR: SOF0 (Bitfield-Mask: 0x01)                */
#define USIC_CH_RBUF01SR_PAR0_Pos             (8UL)                     /*!< USIC_CH RBUF01SR: PAR0 (Bit 8)                              */
#define USIC_CH_RBUF01SR_PAR0_Msk             (0x100UL)                 /*!< USIC_CH RBUF01SR: PAR0 (Bitfield-Mask: 0x01)                */
#define USIC_CH_RBUF01SR_PERR0_Pos            (9UL)                     /*!< USIC_CH RBUF01SR: PERR0 (Bit 9)                             */
#define USIC_CH_RBUF01SR_PERR0_Msk            (0x200UL)                 /*!< USIC_CH RBUF01SR: PERR0 (Bitfield-Mask: 0x01)               */
#define USIC_CH_RBUF01SR_RDV00_Pos            (13UL)                    /*!< USIC_CH RBUF01SR: RDV00 (Bit 13)                            */
#define USIC_CH_RBUF01SR_RDV00_Msk            (0x2000UL)                /*!< USIC_CH RBUF01SR: RDV00 (Bitfield-Mask: 0x01)               */
#define USIC_CH_RBUF01SR_RDV01_Pos            (14UL)                    /*!< USIC_CH RBUF01SR: RDV01 (Bit 14)                            */
#define USIC_CH_RBUF01SR_RDV01_Msk            (0x4000UL)                /*!< USIC_CH RBUF01SR: RDV01 (Bitfield-Mask: 0x01)               */
#define USIC_CH_RBUF01SR_DS0_Pos              (15UL)                    /*!< USIC_CH RBUF01SR: DS0 (Bit 15)                              */
#define USIC_CH_RBUF01SR_DS0_Msk              (0x8000UL)                /*!< USIC_CH RBUF01SR: DS0 (Bitfield-Mask: 0x01)                 */
#define USIC_CH_RBUF01SR_WLEN1_Pos            (16UL)                    /*!< USIC_CH RBUF01SR: WLEN1 (Bit 16)                            */
#define USIC_CH_RBUF01SR_WLEN1_Msk            (0xf0000UL)               /*!< USIC_CH RBUF01SR: WLEN1 (Bitfield-Mask: 0x0f)               */
#define USIC_CH_RBUF01SR_SOF1_Pos             (22UL)                    /*!< USIC_CH RBUF01SR: SOF1 (Bit 22)                             */
#define USIC_CH_RBUF01SR_SOF1_Msk             (0x400000UL)              /*!< USIC_CH RBUF01SR: SOF1 (Bitfield-Mask: 0x01)                */
#define USIC_CH_RBUF01SR_PAR1_Pos             (24UL)                    /*!< USIC_CH RBUF01SR: PAR1 (Bit 24)                             */
#define USIC_CH_RBUF01SR_PAR1_Msk             (0x1000000UL)             /*!< USIC_CH RBUF01SR: PAR1 (Bitfield-Mask: 0x01)                */
#define USIC_CH_RBUF01SR_PERR1_Pos            (25UL)                    /*!< USIC_CH RBUF01SR: PERR1 (Bit 25)                            */
#define USIC_CH_RBUF01SR_PERR1_Msk            (0x2000000UL)             /*!< USIC_CH RBUF01SR: PERR1 (Bitfield-Mask: 0x01)               */
#define USIC_CH_RBUF01SR_RDV10_Pos            (29UL)                    /*!< USIC_CH RBUF01SR: RDV10 (Bit 29)                            */
#define USIC_CH_RBUF01SR_RDV10_Msk            (0x20000000UL)            /*!< USIC_CH RBUF01SR: RDV10 (Bitfield-Mask: 0x01)               */
#define USIC_CH_RBUF01SR_RDV11_Pos            (30UL)                    /*!< USIC_CH RBUF01SR: RDV11 (Bit 30)                            */
#define USIC_CH_RBUF01SR_RDV11_Msk            (0x40000000UL)            /*!< USIC_CH RBUF01SR: RDV11 (Bitfield-Mask: 0x01)               */
#define USIC_CH_RBUF01SR_DS1_Pos              (31UL)                    /*!< USIC_CH RBUF01SR: DS1 (Bit 31)                              */
#define USIC_CH_RBUF01SR_DS1_Msk              (0x80000000UL)            /*!< USIC_CH RBUF01SR: DS1 (Bitfield-Mask: 0x01)                 */

/* ---------------------------------  USIC_CH_FMR  -------------------------------- */
#define USIC_CH_FMR_MTDV_Pos                  (0UL)                     /*!< USIC_CH FMR: MTDV (Bit 0)                                   */
#define USIC_CH_FMR_MTDV_Msk                  (0x3UL)                   /*!< USIC_CH FMR: MTDV (Bitfield-Mask: 0x03)                     */
#define USIC_CH_FMR_ATVC_Pos                  (4UL)                     /*!< USIC_CH FMR: ATVC (Bit 4)                                   */
#define USIC_CH_FMR_ATVC_Msk                  (0x10UL)                  /*!< USIC_CH FMR: ATVC (Bitfield-Mask: 0x01)                     */
#define USIC_CH_FMR_CRDV0_Pos                 (14UL)                    /*!< USIC_CH FMR: CRDV0 (Bit 14)                                 */
#define USIC_CH_FMR_CRDV0_Msk                 (0x4000UL)                /*!< USIC_CH FMR: CRDV0 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_FMR_CRDV1_Pos                 (15UL)                    /*!< USIC_CH FMR: CRDV1 (Bit 15)                                 */
#define USIC_CH_FMR_CRDV1_Msk                 (0x8000UL)                /*!< USIC_CH FMR: CRDV1 (Bitfield-Mask: 0x01)                    */
#define USIC_CH_FMR_SIO0_Pos                  (16UL)                    /*!< USIC_CH FMR: SIO0 (Bit 16)                                  */
#define USIC_CH_FMR_SIO0_Msk                  (0x10000UL)               /*!< USIC_CH FMR: SIO0 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_FMR_SIO1_Pos                  (17UL)                    /*!< USIC_CH FMR: SIO1 (Bit 17)                                  */
#define USIC_CH_FMR_SIO1_Msk                  (0x20000UL)               /*!< USIC_CH FMR: SIO1 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_FMR_SIO2_Pos                  (18UL)                    /*!< USIC_CH FMR: SIO2 (Bit 18)                                  */
#define USIC_CH_FMR_SIO2_Msk                  (0x40000UL)               /*!< USIC_CH FMR: SIO2 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_FMR_SIO3_Pos                  (19UL)                    /*!< USIC_CH FMR: SIO3 (Bit 19)                                  */
#define USIC_CH_FMR_SIO3_Msk                  (0x80000UL)               /*!< USIC_CH FMR: SIO3 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_FMR_SIO4_Pos                  (20UL)                    /*!< USIC_CH FMR: SIO4 (Bit 20)                                  */
#define USIC_CH_FMR_SIO4_Msk                  (0x100000UL)              /*!< USIC_CH FMR: SIO4 (Bitfield-Mask: 0x01)                     */
#define USIC_CH_FMR_SIO5_Pos                  (21UL)                    /*!< USIC_CH FMR: SIO5 (Bit 21)                                  */
#define USIC_CH_FMR_SIO5_Msk                  (0x200000UL)              /*!< USIC_CH FMR: SIO5 (Bitfield-Mask: 0x01)                     */

/* --------------------------------  USIC_CH_TBUF  -------------------------------- */
#define USIC_CH_TBUF_TDATA_Pos                (0UL)                     /*!< USIC_CH TBUF: TDATA (Bit 0)                                 */
#define USIC_CH_TBUF_TDATA_Msk                (0xffffUL)                /*!< USIC_CH TBUF: TDATA (Bitfield-Mask: 0xffff)                 */

/* ---------------------------------  USIC_CH_BYP  -------------------------------- */
#define USIC_CH_BYP_BDATA_Pos                 (0UL)                     /*!< USIC_CH BYP: BDATA (Bit 0)                                  */
#define USIC_CH_BYP_BDATA_Msk                 (0xffffUL)                /*!< USIC_CH BYP: BDATA (Bitfield-Mask: 0xffff)                  */

/* --------------------------------  USIC_CH_BYPCR  ------------------------------- */
#define USIC_CH_BYPCR_BWLE_Pos                (0UL)                     /*!< USIC_CH BYPCR: BWLE (Bit 0)                                 */
#define USIC_CH_BYPCR_BWLE_Msk                (0xfUL)                   /*!< USIC_CH BYPCR: BWLE (Bitfield-Mask: 0x0f)                   */
#define USIC_CH_BYPCR_BDSSM_Pos               (8UL)                     /*!< USIC_CH BYPCR: BDSSM (Bit 8)                                */
#define USIC_CH_BYPCR_BDSSM_Msk               (0x100UL)                 /*!< USIC_CH BYPCR: BDSSM (Bitfield-Mask: 0x01)                  */
#define USIC_CH_BYPCR_BDEN_Pos                (10UL)                    /*!< USIC_CH BYPCR: BDEN (Bit 10)                                */
#define USIC_CH_BYPCR_BDEN_Msk                (0xc00UL)                 /*!< USIC_CH BYPCR: BDEN (Bitfield-Mask: 0x03)                   */
#define USIC_CH_BYPCR_BDVTR_Pos               (12UL)                    /*!< USIC_CH BYPCR: BDVTR (Bit 12)                               */
#define USIC_CH_BYPCR_BDVTR_Msk               (0x1000UL)                /*!< USIC_CH BYPCR: BDVTR (Bitfield-Mask: 0x01)                  */
#define USIC_CH_BYPCR_BPRIO_Pos               (13UL)                    /*!< USIC_CH BYPCR: BPRIO (Bit 13)                               */
#define USIC_CH_BYPCR_BPRIO_Msk               (0x2000UL)                /*!< USIC_CH BYPCR: BPRIO (Bitfield-Mask: 0x01)                  */
#define USIC_CH_BYPCR_BDV_Pos                 (15UL)                    /*!< USIC_CH BYPCR: BDV (Bit 15)                                 */
#define USIC_CH_BYPCR_BDV_Msk                 (0x8000UL)                /*!< USIC_CH BYPCR: BDV (Bitfield-Mask: 0x01)                    */
#define USIC_CH_BYPCR_BSELO_Pos               (16UL)                    /*!< USIC_CH BYPCR: BSELO (Bit 16)                               */
#define USIC_CH_BYPCR_BSELO_Msk               (0x1f0000UL)              /*!< USIC_CH BYPCR: BSELO (Bitfield-Mask: 0x1f)                  */
#define USIC_CH_BYPCR_BHPC_Pos                (21UL)                    /*!< USIC_CH BYPCR: BHPC (Bit 21)                                */
#define USIC_CH_BYPCR_BHPC_Msk                (0xe00000UL)              /*!< USIC_CH BYPCR: BHPC (Bitfield-Mask: 0x07)                   */

/* --------------------------------  USIC_CH_TBCTR  ------------------------------- */
#define USIC_CH_TBCTR_DPTR_Pos                (0UL)                     /*!< USIC_CH TBCTR: DPTR (Bit 0)                                 */
#define USIC_CH_TBCTR_DPTR_Msk                (0x3fUL)                  /*!< USIC_CH TBCTR: DPTR (Bitfield-Mask: 0x3f)                   */
#define USIC_CH_TBCTR_LIMIT_Pos               (8UL)                     /*!< USIC_CH TBCTR: LIMIT (Bit 8)                                */
#define USIC_CH_TBCTR_LIMIT_Msk               (0x3f00UL)                /*!< USIC_CH TBCTR: LIMIT (Bitfield-Mask: 0x3f)                  */
#define USIC_CH_TBCTR_STBTM_Pos               (14UL)                    /*!< USIC_CH TBCTR: STBTM (Bit 14)                               */
#define USIC_CH_TBCTR_STBTM_Msk               (0x4000UL)                /*!< USIC_CH TBCTR: STBTM (Bitfield-Mask: 0x01)                  */
#define USIC_CH_TBCTR_STBTEN_Pos              (15UL)                    /*!< USIC_CH TBCTR: STBTEN (Bit 15)                              */
#define USIC_CH_TBCTR_STBTEN_Msk              (0x8000UL)                /*!< USIC_CH TBCTR: STBTEN (Bitfield-Mask: 0x01)                 */
#define USIC_CH_TBCTR_STBINP_Pos              (16UL)                    /*!< USIC_CH TBCTR: STBINP (Bit 16)                              */
#define USIC_CH_TBCTR_STBINP_Msk              (0x70000UL)               /*!< USIC_CH TBCTR: STBINP (Bitfield-Mask: 0x07)                 */
#define USIC_CH_TBCTR_ATBINP_Pos              (19UL)                    /*!< USIC_CH TBCTR: ATBINP (Bit 19)                              */
#define USIC_CH_TBCTR_ATBINP_Msk              (0x380000UL)              /*!< USIC_CH TBCTR: ATBINP (Bitfield-Mask: 0x07)                 */
#define USIC_CH_TBCTR_SIZE_Pos                (24UL)                    /*!< USIC_CH TBCTR: SIZE (Bit 24)                                */
#define USIC_CH_TBCTR_SIZE_Msk                (0x7000000UL)             /*!< USIC_CH TBCTR: SIZE (Bitfield-Mask: 0x07)                   */
#define USIC_CH_TBCTR_LOF_Pos                 (28UL)                    /*!< USIC_CH TBCTR: LOF (Bit 28)                                 */
#define USIC_CH_TBCTR_LOF_Msk                 (0x10000000UL)            /*!< USIC_CH TBCTR: LOF (Bitfield-Mask: 0x01)                    */
#define USIC_CH_TBCTR_STBIEN_Pos              (30UL)                    /*!< USIC_CH TBCTR: STBIEN (Bit 30)                              */
#define USIC_CH_TBCTR_STBIEN_Msk              (0x40000000UL)            /*!< USIC_CH TBCTR: STBIEN (Bitfield-Mask: 0x01)                 */
#define USIC_CH_TBCTR_TBERIEN_Pos             (31UL)                    /*!< USIC_CH TBCTR: TBERIEN (Bit 31)                             */
#define USIC_CH_TBCTR_TBERIEN_Msk             (0x80000000UL)            /*!< USIC_CH TBCTR: TBERIEN (Bitfield-Mask: 0x01)                */

/* --------------------------------  USIC_CH_RBCTR  ------------------------------- */
#define USIC_CH_RBCTR_DPTR_Pos                (0UL)                     /*!< USIC_CH RBCTR: DPTR (Bit 0)                                 */
#define USIC_CH_RBCTR_DPTR_Msk                (0x3fUL)                  /*!< USIC_CH RBCTR: DPTR (Bitfield-Mask: 0x3f)                   */
#define USIC_CH_RBCTR_LIMIT_Pos               (8UL)                     /*!< USIC_CH RBCTR: LIMIT (Bit 8)                                */
#define USIC_CH_RBCTR_LIMIT_Msk               (0x3f00UL)                /*!< USIC_CH RBCTR: LIMIT (Bitfield-Mask: 0x3f)                  */
#define USIC_CH_RBCTR_SRBTM_Pos               (14UL)                    /*!< USIC_CH RBCTR: SRBTM (Bit 14)                               */
#define USIC_CH_RBCTR_SRBTM_Msk               (0x4000UL)                /*!< USIC_CH RBCTR: SRBTM (Bitfield-Mask: 0x01)                  */
#define USIC_CH_RBCTR_SRBTEN_Pos              (15UL)                    /*!< USIC_CH RBCTR: SRBTEN (Bit 15)                              */
#define USIC_CH_RBCTR_SRBTEN_Msk              (0x8000UL)                /*!< USIC_CH RBCTR: SRBTEN (Bitfield-Mask: 0x01)                 */
#define USIC_CH_RBCTR_SRBINP_Pos              (16UL)                    /*!< USIC_CH RBCTR: SRBINP (Bit 16)                              */
#define USIC_CH_RBCTR_SRBINP_Msk              (0x70000UL)               /*!< USIC_CH RBCTR: SRBINP (Bitfield-Mask: 0x07)                 */
#define USIC_CH_RBCTR_ARBINP_Pos              (19UL)                    /*!< USIC_CH RBCTR: ARBINP (Bit 19)                              */
#define USIC_CH_RBCTR_ARBINP_Msk              (0x380000UL)              /*!< USIC_CH RBCTR: ARBINP (Bitfield-Mask: 0x07)                 */
#define USIC_CH_RBCTR_RCIM_Pos                (22UL)                    /*!< USIC_CH RBCTR: RCIM (Bit 22)                                */
#define USIC_CH_RBCTR_RCIM_Msk                (0xc00000UL)              /*!< USIC_CH RBCTR: RCIM (Bitfield-Mask: 0x03)                   */
#define USIC_CH_RBCTR_SIZE_Pos                (24UL)                    /*!< USIC_CH RBCTR: SIZE (Bit 24)                                */
#define USIC_CH_RBCTR_SIZE_Msk                (0x7000000UL)             /*!< USIC_CH RBCTR: SIZE (Bitfield-Mask: 0x07)                   */
#define USIC_CH_RBCTR_RNM_Pos                 (27UL)                    /*!< USIC_CH RBCTR: RNM (Bit 27)                                 */
#define USIC_CH_RBCTR_RNM_Msk                 (0x8000000UL)             /*!< USIC_CH RBCTR: RNM (Bitfield-Mask: 0x01)                    */
#define USIC_CH_RBCTR_LOF_Pos                 (28UL)                    /*!< USIC_CH RBCTR: LOF (Bit 28)                                 */
#define USIC_CH_RBCTR_LOF_Msk                 (0x10000000UL)            /*!< USIC_CH RBCTR: LOF (Bitfield-Mask: 0x01)                    */
#define USIC_CH_RBCTR_ARBIEN_Pos              (29UL)                    /*!< USIC_CH RBCTR: ARBIEN (Bit 29)                              */
#define USIC_CH_RBCTR_ARBIEN_Msk              (0x20000000UL)            /*!< USIC_CH RBCTR: ARBIEN (Bitfield-Mask: 0x01)                 */
#define USIC_CH_RBCTR_SRBIEN_Pos              (30UL)                    /*!< USIC_CH RBCTR: SRBIEN (Bit 30)                              */
#define USIC_CH_RBCTR_SRBIEN_Msk              (0x40000000UL)            /*!< USIC_CH RBCTR: SRBIEN (Bitfield-Mask: 0x01)                 */
#define USIC_CH_RBCTR_RBERIEN_Pos             (31UL)                    /*!< USIC_CH RBCTR: RBERIEN (Bit 31)                             */
#define USIC_CH_RBCTR_RBERIEN_Msk             (0x80000000UL)            /*!< USIC_CH RBCTR: RBERIEN (Bitfield-Mask: 0x01)                */

/* -------------------------------  USIC_CH_TRBPTR  ------------------------------- */
#define USIC_CH_TRBPTR_TDIPTR_Pos             (0UL)                     /*!< USIC_CH TRBPTR: TDIPTR (Bit 0)                              */
#define USIC_CH_TRBPTR_TDIPTR_Msk             (0x3fUL)                  /*!< USIC_CH TRBPTR: TDIPTR (Bitfield-Mask: 0x3f)                */
#define USIC_CH_TRBPTR_TDOPTR_Pos             (8UL)                     /*!< USIC_CH TRBPTR: TDOPTR (Bit 8)                              */
#define USIC_CH_TRBPTR_TDOPTR_Msk             (0x3f00UL)                /*!< USIC_CH TRBPTR: TDOPTR (Bitfield-Mask: 0x3f)                */
#define USIC_CH_TRBPTR_RDIPTR_Pos             (16UL)                    /*!< USIC_CH TRBPTR: RDIPTR (Bit 16)                             */
#define USIC_CH_TRBPTR_RDIPTR_Msk             (0x3f0000UL)              /*!< USIC_CH TRBPTR: RDIPTR (Bitfield-Mask: 0x3f)                */
#define USIC_CH_TRBPTR_RDOPTR_Pos             (24UL)                    /*!< USIC_CH TRBPTR: RDOPTR (Bit 24)                             */
#define USIC_CH_TRBPTR_RDOPTR_Msk             (0x3f000000UL)            /*!< USIC_CH TRBPTR: RDOPTR (Bitfield-Mask: 0x3f)                */

/* --------------------------------  USIC_CH_TRBSR  ------------------------------- */
#define USIC_CH_TRBSR_SRBI_Pos                (0UL)                     /*!< USIC_CH TRBSR: SRBI (Bit 0)                                 */
#define USIC_CH_TRBSR_SRBI_Msk                (0x1UL)                   /*!< USIC_CH TRBSR: SRBI (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TRBSR_RBERI_Pos               (1UL)                     /*!< USIC_CH TRBSR: RBERI (Bit 1)                                */
#define USIC_CH_TRBSR_RBERI_Msk               (0x2UL)                   /*!< USIC_CH TRBSR: RBERI (Bitfield-Mask: 0x01)                  */
#define USIC_CH_TRBSR_ARBI_Pos                (2UL)                     /*!< USIC_CH TRBSR: ARBI (Bit 2)                                 */
#define USIC_CH_TRBSR_ARBI_Msk                (0x4UL)                   /*!< USIC_CH TRBSR: ARBI (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TRBSR_REMPTY_Pos              (3UL)                     /*!< USIC_CH TRBSR: REMPTY (Bit 3)                               */
#define USIC_CH_TRBSR_REMPTY_Msk              (0x8UL)                   /*!< USIC_CH TRBSR: REMPTY (Bitfield-Mask: 0x01)                 */
#define USIC_CH_TRBSR_RFULL_Pos               (4UL)                     /*!< USIC_CH TRBSR: RFULL (Bit 4)                                */
#define USIC_CH_TRBSR_RFULL_Msk               (0x10UL)                  /*!< USIC_CH TRBSR: RFULL (Bitfield-Mask: 0x01)                  */
#define USIC_CH_TRBSR_RBUS_Pos                (5UL)                     /*!< USIC_CH TRBSR: RBUS (Bit 5)                                 */
#define USIC_CH_TRBSR_RBUS_Msk                (0x20UL)                  /*!< USIC_CH TRBSR: RBUS (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TRBSR_SRBT_Pos                (6UL)                     /*!< USIC_CH TRBSR: SRBT (Bit 6)                                 */
#define USIC_CH_TRBSR_SRBT_Msk                (0x40UL)                  /*!< USIC_CH TRBSR: SRBT (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TRBSR_STBI_Pos                (8UL)                     /*!< USIC_CH TRBSR: STBI (Bit 8)                                 */
#define USIC_CH_TRBSR_STBI_Msk                (0x100UL)                 /*!< USIC_CH TRBSR: STBI (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TRBSR_TBERI_Pos               (9UL)                     /*!< USIC_CH TRBSR: TBERI (Bit 9)                                */
#define USIC_CH_TRBSR_TBERI_Msk               (0x200UL)                 /*!< USIC_CH TRBSR: TBERI (Bitfield-Mask: 0x01)                  */
#define USIC_CH_TRBSR_TEMPTY_Pos              (11UL)                    /*!< USIC_CH TRBSR: TEMPTY (Bit 11)                              */
#define USIC_CH_TRBSR_TEMPTY_Msk              (0x800UL)                 /*!< USIC_CH TRBSR: TEMPTY (Bitfield-Mask: 0x01)                 */
#define USIC_CH_TRBSR_TFULL_Pos               (12UL)                    /*!< USIC_CH TRBSR: TFULL (Bit 12)                               */
#define USIC_CH_TRBSR_TFULL_Msk               (0x1000UL)                /*!< USIC_CH TRBSR: TFULL (Bitfield-Mask: 0x01)                  */
#define USIC_CH_TRBSR_TBUS_Pos                (13UL)                    /*!< USIC_CH TRBSR: TBUS (Bit 13)                                */
#define USIC_CH_TRBSR_TBUS_Msk                (0x2000UL)                /*!< USIC_CH TRBSR: TBUS (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TRBSR_STBT_Pos                (14UL)                    /*!< USIC_CH TRBSR: STBT (Bit 14)                                */
#define USIC_CH_TRBSR_STBT_Msk                (0x4000UL)                /*!< USIC_CH TRBSR: STBT (Bitfield-Mask: 0x01)                   */
#define USIC_CH_TRBSR_RBFLVL_Pos              (16UL)                    /*!< USIC_CH TRBSR: RBFLVL (Bit 16)                              */
#define USIC_CH_TRBSR_RBFLVL_Msk              (0x7f0000UL)              /*!< USIC_CH TRBSR: RBFLVL (Bitfield-Mask: 0x7f)                 */
#define USIC_CH_TRBSR_TBFLVL_Pos              (24UL)                    /*!< USIC_CH TRBSR: TBFLVL (Bit 24)                              */
#define USIC_CH_TRBSR_TBFLVL_Msk              (0x7f000000UL)            /*!< USIC_CH TRBSR: TBFLVL (Bitfield-Mask: 0x7f)                 */

/* -------------------------------  USIC_CH_TRBSCR  ------------------------------- */
#define USIC_CH_TRBSCR_CSRBI_Pos              (0UL)                     /*!< USIC_CH TRBSCR: CSRBI (Bit 0)                               */
#define USIC_CH_TRBSCR_CSRBI_Msk              (0x1UL)                   /*!< USIC_CH TRBSCR: CSRBI (Bitfield-Mask: 0x01)                 */
#define USIC_CH_TRBSCR_CRBERI_Pos             (1UL)                     /*!< USIC_CH TRBSCR: CRBERI (Bit 1)                              */
#define USIC_CH_TRBSCR_CRBERI_Msk             (0x2UL)                   /*!< USIC_CH TRBSCR: CRBERI (Bitfield-Mask: 0x01)                */
#define USIC_CH_TRBSCR_CARBI_Pos              (2UL)                     /*!< USIC_CH TRBSCR: CARBI (Bit 2)                               */
#define USIC_CH_TRBSCR_CARBI_Msk              (0x4UL)                   /*!< USIC_CH TRBSCR: CARBI (Bitfield-Mask: 0x01)                 */
#define USIC_CH_TRBSCR_CSTBI_Pos              (8UL)                     /*!< USIC_CH TRBSCR: CSTBI (Bit 8)                               */
#define USIC_CH_TRBSCR_CSTBI_Msk              (0x100UL)                 /*!< USIC_CH TRBSCR: CSTBI (Bitfield-Mask: 0x01)                 */
#define USIC_CH_TRBSCR_CTBERI_Pos             (9UL)                     /*!< USIC_CH TRBSCR: CTBERI (Bit 9)                              */
#define USIC_CH_TRBSCR_CTBERI_Msk             (0x200UL)                 /*!< USIC_CH TRBSCR: CTBERI (Bitfield-Mask: 0x01)                */
#define USIC_CH_TRBSCR_CBDV_Pos               (10UL)                    /*!< USIC_CH TRBSCR: CBDV (Bit 10)                               */
#define USIC_CH_TRBSCR_CBDV_Msk               (0x400UL)                 /*!< USIC_CH TRBSCR: CBDV (Bitfield-Mask: 0x01)                  */
#define USIC_CH_TRBSCR_FLUSHRB_Pos            (14UL)                    /*!< USIC_CH TRBSCR: FLUSHRB (Bit 14)                            */
#define USIC_CH_TRBSCR_FLUSHRB_Msk            (0x4000UL)                /*!< USIC_CH TRBSCR: FLUSHRB (Bitfield-Mask: 0x01)               */
#define USIC_CH_TRBSCR_FLUSHTB_Pos            (15UL)                    /*!< USIC_CH TRBSCR: FLUSHTB (Bit 15)                            */
#define USIC_CH_TRBSCR_FLUSHTB_Msk            (0x8000UL)                /*!< USIC_CH TRBSCR: FLUSHTB (Bitfield-Mask: 0x01)               */

/* --------------------------------  USIC_CH_OUTR  -------------------------------- */
#define USIC_CH_OUTR_DSR_Pos                  (0UL)                     /*!< USIC_CH OUTR: DSR (Bit 0)                                   */
#define USIC_CH_OUTR_DSR_Msk                  (0xffffUL)                /*!< USIC_CH OUTR: DSR (Bitfield-Mask: 0xffff)                   */
#define USIC_CH_OUTR_RCI_Pos                  (16UL)                    /*!< USIC_CH OUTR: RCI (Bit 16)                                  */
#define USIC_CH_OUTR_RCI_Msk                  (0x1f0000UL)              /*!< USIC_CH OUTR: RCI (Bitfield-Mask: 0x1f)                     */

/* --------------------------------  USIC_CH_OUTDR  ------------------------------- */
#define USIC_CH_OUTDR_DSR_Pos                 (0UL)                     /*!< USIC_CH OUTDR: DSR (Bit 0)                                  */
#define USIC_CH_OUTDR_DSR_Msk                 (0xffffUL)                /*!< USIC_CH OUTDR: DSR (Bitfield-Mask: 0xffff)                  */
#define USIC_CH_OUTDR_RCI_Pos                 (16UL)                    /*!< USIC_CH OUTDR: RCI (Bit 16)                                 */
#define USIC_CH_OUTDR_RCI_Msk                 (0x1f0000UL)              /*!< USIC_CH OUTDR: RCI (Bitfield-Mask: 0x1f)                    */

/* ---------------------------------  USIC_CH_IN  --------------------------------- */
#define USIC_CH_IN_TDATA_Pos                  (0UL)                     /*!< USIC_CH IN: TDATA (Bit 0)                                   */
#define USIC_CH_IN_TDATA_Msk                  (0xffffUL)                /*!< USIC_CH IN: TDATA (Bitfield-Mask: 0xffff)                   */


/* ================================================================================ */
/* ================        struct 'SCU_CLK' Position & Mask        ================ */
/* ================================================================================ */


/* --------------------------------  SCU_CLK_CLKCR  ------------------------------- */
#define SCU_CLK_CLKCR_FDIV_Pos                (0UL)                     /*!< SCU_CLK CLKCR: FDIV (Bit 0)                                 */
#define SCU_CLK_CLKCR_FDIV_Msk                (0xffUL)                  /*!< SCU_CLK CLKCR: FDIV (Bitfield-Mask: 0xff)                   */
#define SCU_CLK_CLKCR_IDIV_Pos                (8UL)                     /*!< SCU_CLK CLKCR: IDIV (Bit 8)                                 */
#define SCU_CLK_CLKCR_IDIV_Msk                (0xff00UL)                /*!< SCU_CLK CLKCR: IDIV (Bitfield-Mask: 0xff)                   */
#define SCU_CLK_CLKCR_PCLKSEL_Pos             (16UL)                    /*!< SCU_CLK CLKCR: PCLKSEL (Bit 16)                             */
#define SCU_CLK_CLKCR_PCLKSEL_Msk             (0x10000UL)               /*!< SCU_CLK CLKCR: PCLKSEL (Bitfield-Mask: 0x01)                */
#define SCU_CLK_CLKCR_RTCCLKSEL_Pos           (17UL)                    /*!< SCU_CLK CLKCR: RTCCLKSEL (Bit 17)                           */
#define SCU_CLK_CLKCR_RTCCLKSEL_Msk           (0xe0000UL)               /*!< SCU_CLK CLKCR: RTCCLKSEL (Bitfield-Mask: 0x07)              */
#define SCU_CLK_CLKCR_CNTADJ_Pos              (20UL)                    /*!< SCU_CLK CLKCR: CNTADJ (Bit 20)                              */
#define SCU_CLK_CLKCR_CNTADJ_Msk              (0x3ff00000UL)            /*!< SCU_CLK CLKCR: CNTADJ (Bitfield-Mask: 0x3ff)                */
#define SCU_CLK_CLKCR_VDDC2LOW_Pos            (30UL)                    /*!< SCU_CLK CLKCR: VDDC2LOW (Bit 30)                            */
#define SCU_CLK_CLKCR_VDDC2LOW_Msk            (0x40000000UL)            /*!< SCU_CLK CLKCR: VDDC2LOW (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CLKCR_VDDC2HIGH_Pos           (31UL)                    /*!< SCU_CLK CLKCR: VDDC2HIGH (Bit 31)                           */
#define SCU_CLK_CLKCR_VDDC2HIGH_Msk           (0x80000000UL)            /*!< SCU_CLK CLKCR: VDDC2HIGH (Bitfield-Mask: 0x01)              */

/* -------------------------------  SCU_CLK_PWRSVCR  ------------------------------ */
#define SCU_CLK_PWRSVCR_FPD_Pos               (0UL)                     /*!< SCU_CLK PWRSVCR: FPD (Bit 0)                                */
#define SCU_CLK_PWRSVCR_FPD_Msk               (0x1UL)                   /*!< SCU_CLK PWRSVCR: FPD (Bitfield-Mask: 0x01)                  */

/* ------------------------------  SCU_CLK_CGATSTAT0  ----------------------------- */
#define SCU_CLK_CGATSTAT0_VADC_Pos            (0UL)                     /*!< SCU_CLK CGATSTAT0: VADC (Bit 0)                             */
#define SCU_CLK_CGATSTAT0_VADC_Msk            (0x1UL)                   /*!< SCU_CLK CGATSTAT0: VADC (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATSTAT0_CCU80_Pos           (1UL)                     /*!< SCU_CLK CGATSTAT0: CCU80 (Bit 1)                            */
#define SCU_CLK_CGATSTAT0_CCU80_Msk           (0x2UL)                   /*!< SCU_CLK CGATSTAT0: CCU80 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSTAT0_CCU40_Pos           (2UL)                     /*!< SCU_CLK CGATSTAT0: CCU40 (Bit 2)                            */
#define SCU_CLK_CGATSTAT0_CCU40_Msk           (0x4UL)                   /*!< SCU_CLK CGATSTAT0: CCU40 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSTAT0_USIC0_Pos           (3UL)                     /*!< SCU_CLK CGATSTAT0: USIC0 (Bit 3)                            */
#define SCU_CLK_CGATSTAT0_USIC0_Msk           (0x8UL)                   /*!< SCU_CLK CGATSTAT0: USIC0 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSTAT0_BCCU0_Pos           (4UL)                     /*!< SCU_CLK CGATSTAT0: BCCU0 (Bit 4)                            */
#define SCU_CLK_CGATSTAT0_BCCU0_Msk           (0x10UL)                  /*!< SCU_CLK CGATSTAT0: BCCU0 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSTAT0_LEDTS0_Pos          (5UL)                     /*!< SCU_CLK CGATSTAT0: LEDTS0 (Bit 5)                           */
#define SCU_CLK_CGATSTAT0_LEDTS0_Msk          (0x20UL)                  /*!< SCU_CLK CGATSTAT0: LEDTS0 (Bitfield-Mask: 0x01)             */
#define SCU_CLK_CGATSTAT0_LEDTS1_Pos          (6UL)                     /*!< SCU_CLK CGATSTAT0: LEDTS1 (Bit 6)                           */
#define SCU_CLK_CGATSTAT0_LEDTS1_Msk          (0x40UL)                  /*!< SCU_CLK CGATSTAT0: LEDTS1 (Bitfield-Mask: 0x01)             */
#define SCU_CLK_CGATSTAT0_POSIF0_Pos          (7UL)                     /*!< SCU_CLK CGATSTAT0: POSIF0 (Bit 7)                           */
#define SCU_CLK_CGATSTAT0_POSIF0_Msk          (0x80UL)                  /*!< SCU_CLK CGATSTAT0: POSIF0 (Bitfield-Mask: 0x01)             */
#define SCU_CLK_CGATSTAT0_MATH_Pos            (8UL)                     /*!< SCU_CLK CGATSTAT0: MATH (Bit 8)                             */
#define SCU_CLK_CGATSTAT0_MATH_Msk            (0x100UL)                 /*!< SCU_CLK CGATSTAT0: MATH (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATSTAT0_WDT_Pos             (9UL)                     /*!< SCU_CLK CGATSTAT0: WDT (Bit 9)                              */
#define SCU_CLK_CGATSTAT0_WDT_Msk             (0x200UL)                 /*!< SCU_CLK CGATSTAT0: WDT (Bitfield-Mask: 0x01)                */
#define SCU_CLK_CGATSTAT0_RTC_Pos             (10UL)                    /*!< SCU_CLK CGATSTAT0: RTC (Bit 10)                             */
#define SCU_CLK_CGATSTAT0_RTC_Msk             (0x400UL)                 /*!< SCU_CLK CGATSTAT0: RTC (Bitfield-Mask: 0x01)                */
#define SCU_CLK_CGATSTAT0_CCU81_Pos           (16UL)                    /*!< SCU_CLK CGATSTAT0: CCU81 (Bit 16)                           */
#define SCU_CLK_CGATSTAT0_CCU81_Msk           (0x10000UL)               /*!< SCU_CLK CGATSTAT0: CCU81 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSTAT0_CCU41_Pos           (17UL)                    /*!< SCU_CLK CGATSTAT0: CCU41 (Bit 17)                           */
#define SCU_CLK_CGATSTAT0_CCU41_Msk           (0x20000UL)               /*!< SCU_CLK CGATSTAT0: CCU41 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSTAT0_USIC1_Pos           (18UL)                    /*!< SCU_CLK CGATSTAT0: USIC1 (Bit 18)                           */
#define SCU_CLK_CGATSTAT0_USIC1_Msk           (0x40000UL)               /*!< SCU_CLK CGATSTAT0: USIC1 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSTAT0_LEDTS2_Pos          (19UL)                    /*!< SCU_CLK CGATSTAT0: LEDTS2 (Bit 19)                          */
#define SCU_CLK_CGATSTAT0_LEDTS2_Msk          (0x80000UL)               /*!< SCU_CLK CGATSTAT0: LEDTS2 (Bitfield-Mask: 0x01)             */
#define SCU_CLK_CGATSTAT0_POSIF1_Pos          (20UL)                    /*!< SCU_CLK CGATSTAT0: POSIF1 (Bit 20)                          */
#define SCU_CLK_CGATSTAT0_POSIF1_Msk          (0x100000UL)              /*!< SCU_CLK CGATSTAT0: POSIF1 (Bitfield-Mask: 0x01)             */
#define SCU_CLK_CGATSTAT0_MCAN0_Pos           (21UL)                    /*!< SCU_CLK CGATSTAT0: MCAN0 (Bit 21)                           */
#define SCU_CLK_CGATSTAT0_MCAN0_Msk           (0x200000UL)              /*!< SCU_CLK CGATSTAT0: MCAN0 (Bitfield-Mask: 0x01)              */

/* ------------------------------  SCU_CLK_CGATSET0  ------------------------------ */
#define SCU_CLK_CGATSET0_VADC_Pos             (0UL)                     /*!< SCU_CLK CGATSET0: VADC (Bit 0)                              */
#define SCU_CLK_CGATSET0_VADC_Msk             (0x1UL)                   /*!< SCU_CLK CGATSET0: VADC (Bitfield-Mask: 0x01)                */
#define SCU_CLK_CGATSET0_CCU80_Pos            (1UL)                     /*!< SCU_CLK CGATSET0: CCU80 (Bit 1)                             */
#define SCU_CLK_CGATSET0_CCU80_Msk            (0x2UL)                   /*!< SCU_CLK CGATSET0: CCU80 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATSET0_CCU40_Pos            (2UL)                     /*!< SCU_CLK CGATSET0: CCU40 (Bit 2)                             */
#define SCU_CLK_CGATSET0_CCU40_Msk            (0x4UL)                   /*!< SCU_CLK CGATSET0: CCU40 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATSET0_USIC0_Pos            (3UL)                     /*!< SCU_CLK CGATSET0: USIC0 (Bit 3)                             */
#define SCU_CLK_CGATSET0_USIC0_Msk            (0x8UL)                   /*!< SCU_CLK CGATSET0: USIC0 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATSET0_BCCU0_Pos            (4UL)                     /*!< SCU_CLK CGATSET0: BCCU0 (Bit 4)                             */
#define SCU_CLK_CGATSET0_BCCU0_Msk            (0x10UL)                  /*!< SCU_CLK CGATSET0: BCCU0 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATSET0_LEDTS0_Pos           (5UL)                     /*!< SCU_CLK CGATSET0: LEDTS0 (Bit 5)                            */
#define SCU_CLK_CGATSET0_LEDTS0_Msk           (0x20UL)                  /*!< SCU_CLK CGATSET0: LEDTS0 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSET0_LEDTS1_Pos           (6UL)                     /*!< SCU_CLK CGATSET0: LEDTS1 (Bit 6)                            */
#define SCU_CLK_CGATSET0_LEDTS1_Msk           (0x40UL)                  /*!< SCU_CLK CGATSET0: LEDTS1 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSET0_POSIF0_Pos           (7UL)                     /*!< SCU_CLK CGATSET0: POSIF0 (Bit 7)                            */
#define SCU_CLK_CGATSET0_POSIF0_Msk           (0x80UL)                  /*!< SCU_CLK CGATSET0: POSIF0 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSET0_MATH_Pos             (8UL)                     /*!< SCU_CLK CGATSET0: MATH (Bit 8)                              */
#define SCU_CLK_CGATSET0_MATH_Msk             (0x100UL)                 /*!< SCU_CLK CGATSET0: MATH (Bitfield-Mask: 0x01)                */
#define SCU_CLK_CGATSET0_WDT_Pos              (9UL)                     /*!< SCU_CLK CGATSET0: WDT (Bit 9)                               */
#define SCU_CLK_CGATSET0_WDT_Msk              (0x200UL)                 /*!< SCU_CLK CGATSET0: WDT (Bitfield-Mask: 0x01)                 */
#define SCU_CLK_CGATSET0_RTC_Pos              (10UL)                    /*!< SCU_CLK CGATSET0: RTC (Bit 10)                              */
#define SCU_CLK_CGATSET0_RTC_Msk              (0x400UL)                 /*!< SCU_CLK CGATSET0: RTC (Bitfield-Mask: 0x01)                 */
#define SCU_CLK_CGATSET0_CCU81_Pos            (16UL)                    /*!< SCU_CLK CGATSET0: CCU81 (Bit 16)                            */
#define SCU_CLK_CGATSET0_CCU81_Msk            (0x10000UL)               /*!< SCU_CLK CGATSET0: CCU81 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATSET0_CCU41_Pos            (17UL)                    /*!< SCU_CLK CGATSET0: CCU41 (Bit 17)                            */
#define SCU_CLK_CGATSET0_CCU41_Msk            (0x20000UL)               /*!< SCU_CLK CGATSET0: CCU41 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATSET0_USIC1_Pos            (18UL)                    /*!< SCU_CLK CGATSET0: USIC1 (Bit 18)                            */
#define SCU_CLK_CGATSET0_USIC1_Msk            (0x40000UL)               /*!< SCU_CLK CGATSET0: USIC1 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATSET0_LEDTS2_Pos           (19UL)                    /*!< SCU_CLK CGATSET0: LEDTS2 (Bit 19)                           */
#define SCU_CLK_CGATSET0_LEDTS2_Msk           (0x80000UL)               /*!< SCU_CLK CGATSET0: LEDTS2 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSET0_POSIF1_Pos           (20UL)                    /*!< SCU_CLK CGATSET0: POSIF1 (Bit 20)                           */
#define SCU_CLK_CGATSET0_POSIF1_Msk           (0x100000UL)              /*!< SCU_CLK CGATSET0: POSIF1 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATSET0_MCAN0_Pos            (21UL)                    /*!< SCU_CLK CGATSET0: MCAN0 (Bit 21)                            */
#define SCU_CLK_CGATSET0_MCAN0_Msk            (0x200000UL)              /*!< SCU_CLK CGATSET0: MCAN0 (Bitfield-Mask: 0x01)               */

/* ------------------------------  SCU_CLK_CGATCLR0  ------------------------------ */
#define SCU_CLK_CGATCLR0_VADC_Pos             (0UL)                     /*!< SCU_CLK CGATCLR0: VADC (Bit 0)                              */
#define SCU_CLK_CGATCLR0_VADC_Msk             (0x1UL)                   /*!< SCU_CLK CGATCLR0: VADC (Bitfield-Mask: 0x01)                */
#define SCU_CLK_CGATCLR0_CCU80_Pos            (1UL)                     /*!< SCU_CLK CGATCLR0: CCU80 (Bit 1)                             */
#define SCU_CLK_CGATCLR0_CCU80_Msk            (0x2UL)                   /*!< SCU_CLK CGATCLR0: CCU80 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATCLR0_CCU40_Pos            (2UL)                     /*!< SCU_CLK CGATCLR0: CCU40 (Bit 2)                             */
#define SCU_CLK_CGATCLR0_CCU40_Msk            (0x4UL)                   /*!< SCU_CLK CGATCLR0: CCU40 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATCLR0_USIC0_Pos            (3UL)                     /*!< SCU_CLK CGATCLR0: USIC0 (Bit 3)                             */
#define SCU_CLK_CGATCLR0_USIC0_Msk            (0x8UL)                   /*!< SCU_CLK CGATCLR0: USIC0 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATCLR0_BCCU0_Pos            (4UL)                     /*!< SCU_CLK CGATCLR0: BCCU0 (Bit 4)                             */
#define SCU_CLK_CGATCLR0_BCCU0_Msk            (0x10UL)                  /*!< SCU_CLK CGATCLR0: BCCU0 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATCLR0_LEDTS0_Pos           (5UL)                     /*!< SCU_CLK CGATCLR0: LEDTS0 (Bit 5)                            */
#define SCU_CLK_CGATCLR0_LEDTS0_Msk           (0x20UL)                  /*!< SCU_CLK CGATCLR0: LEDTS0 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATCLR0_LEDTS1_Pos           (6UL)                     /*!< SCU_CLK CGATCLR0: LEDTS1 (Bit 6)                            */
#define SCU_CLK_CGATCLR0_LEDTS1_Msk           (0x40UL)                  /*!< SCU_CLK CGATCLR0: LEDTS1 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATCLR0_POSIF0_Pos           (7UL)                     /*!< SCU_CLK CGATCLR0: POSIF0 (Bit 7)                            */
#define SCU_CLK_CGATCLR0_POSIF0_Msk           (0x80UL)                  /*!< SCU_CLK CGATCLR0: POSIF0 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATCLR0_MATH_Pos             (8UL)                     /*!< SCU_CLK CGATCLR0: MATH (Bit 8)                              */
#define SCU_CLK_CGATCLR0_MATH_Msk             (0x100UL)                 /*!< SCU_CLK CGATCLR0: MATH (Bitfield-Mask: 0x01)                */
#define SCU_CLK_CGATCLR0_WDT_Pos              (9UL)                     /*!< SCU_CLK CGATCLR0: WDT (Bit 9)                               */
#define SCU_CLK_CGATCLR0_WDT_Msk              (0x200UL)                 /*!< SCU_CLK CGATCLR0: WDT (Bitfield-Mask: 0x01)                 */
#define SCU_CLK_CGATCLR0_RTC_Pos              (10UL)                    /*!< SCU_CLK CGATCLR0: RTC (Bit 10)                              */
#define SCU_CLK_CGATCLR0_RTC_Msk              (0x400UL)                 /*!< SCU_CLK CGATCLR0: RTC (Bitfield-Mask: 0x01)                 */
#define SCU_CLK_CGATCLR0_CCU81_Pos            (16UL)                    /*!< SCU_CLK CGATCLR0: CCU81 (Bit 16)                            */
#define SCU_CLK_CGATCLR0_CCU81_Msk            (0x10000UL)               /*!< SCU_CLK CGATCLR0: CCU81 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATCLR0_CCU41_Pos            (17UL)                    /*!< SCU_CLK CGATCLR0: CCU41 (Bit 17)                            */
#define SCU_CLK_CGATCLR0_CCU41_Msk            (0x20000UL)               /*!< SCU_CLK CGATCLR0: CCU41 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATCLR0_USIC1_Pos            (18UL)                    /*!< SCU_CLK CGATCLR0: USIC1 (Bit 18)                            */
#define SCU_CLK_CGATCLR0_USIC1_Msk            (0x40000UL)               /*!< SCU_CLK CGATCLR0: USIC1 (Bitfield-Mask: 0x01)               */
#define SCU_CLK_CGATCLR0_LEDTS2_Pos           (19UL)                    /*!< SCU_CLK CGATCLR0: LEDTS2 (Bit 19)                           */
#define SCU_CLK_CGATCLR0_LEDTS2_Msk           (0x80000UL)               /*!< SCU_CLK CGATCLR0: LEDTS2 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATCLR0_POSIF1_Pos           (20UL)                    /*!< SCU_CLK CGATCLR0: POSIF1 (Bit 20)                           */
#define SCU_CLK_CGATCLR0_POSIF1_Msk           (0x100000UL)              /*!< SCU_CLK CGATCLR0: POSIF1 (Bitfield-Mask: 0x01)              */
#define SCU_CLK_CGATCLR0_MCAN0_Pos            (21UL)                    /*!< SCU_CLK CGATCLR0: MCAN0 (Bit 21)                            */
#define SCU_CLK_CGATCLR0_MCAN0_Msk            (0x200000UL)              /*!< SCU_CLK CGATCLR0: MCAN0 (Bitfield-Mask: 0x01)               */

/* -------------------------------  SCU_CLK_OSCCSR  ------------------------------- */
#define SCU_CLK_OSCCSR_OSC2L_Pos              (0UL)                     /*!< SCU_CLK OSCCSR: OSC2L (Bit 0)                               */
#define SCU_CLK_OSCCSR_OSC2L_Msk              (0x1UL)                   /*!< SCU_CLK OSCCSR: OSC2L (Bitfield-Mask: 0x01)                 */
#define SCU_CLK_OSCCSR_OSC2H_Pos              (1UL)                     /*!< SCU_CLK OSCCSR: OSC2H (Bit 1)                               */
#define SCU_CLK_OSCCSR_OSC2H_Msk              (0x2UL)                   /*!< SCU_CLK OSCCSR: OSC2H (Bitfield-Mask: 0x01)                 */
#define SCU_CLK_OSCCSR_DCO1PD_Pos             (8UL)                     /*!< SCU_CLK OSCCSR: DCO1PD (Bit 8)                              */
#define SCU_CLK_OSCCSR_DCO1PD_Msk             (0x100UL)                 /*!< SCU_CLK OSCCSR: DCO1PD (Bitfield-Mask: 0x01)                */
#define SCU_CLK_OSCCSR_OWDRES_Pos             (16UL)                    /*!< SCU_CLK OSCCSR: OWDRES (Bit 16)                             */
#define SCU_CLK_OSCCSR_OWDRES_Msk             (0x10000UL)               /*!< SCU_CLK OSCCSR: OWDRES (Bitfield-Mask: 0x01)                */
#define SCU_CLK_OSCCSR_OWDEN_Pos              (17UL)                    /*!< SCU_CLK OSCCSR: OWDEN (Bit 17)                              */
#define SCU_CLK_OSCCSR_OWDEN_Msk              (0x20000UL)               /*!< SCU_CLK OSCCSR: OWDEN (Bitfield-Mask: 0x01)                 */
#define SCU_CLK_OSCCSR_XOWDRES_Pos            (24UL)                    /*!< SCU_CLK OSCCSR: XOWDRES (Bit 24)                            */
#define SCU_CLK_OSCCSR_XOWDRES_Msk            (0x1000000UL)             /*!< SCU_CLK OSCCSR: XOWDRES (Bitfield-Mask: 0x01)               */
#define SCU_CLK_OSCCSR_XOWDEN_Pos             (25UL)                    /*!< SCU_CLK OSCCSR: XOWDEN (Bit 25)                             */
#define SCU_CLK_OSCCSR_XOWDEN_Msk             (0x2000000UL)             /*!< SCU_CLK OSCCSR: XOWDEN (Bitfield-Mask: 0x01)                */

/* -------------------------------  SCU_CLK_CLKCR1  ------------------------------- */
#define SCU_CLK_CLKCR1_FDIV_Pos               (0UL)                     /*!< SCU_CLK CLKCR1: FDIV (Bit 0)                                */
#define SCU_CLK_CLKCR1_FDIV_Msk               (0x3UL)                   /*!< SCU_CLK CLKCR1: FDIV (Bitfield-Mask: 0x03)                  */
#define SCU_CLK_CLKCR1_ADCCLKSEL_Pos          (8UL)                     /*!< SCU_CLK CLKCR1: ADCCLKSEL (Bit 8)                           */
#define SCU_CLK_CLKCR1_ADCCLKSEL_Msk          (0x100UL)                 /*!< SCU_CLK CLKCR1: ADCCLKSEL (Bitfield-Mask: 0x01)             */
#define SCU_CLK_CLKCR1_DCLKSEL_Pos            (9UL)                     /*!< SCU_CLK CLKCR1: DCLKSEL (Bit 9)                             */
#define SCU_CLK_CLKCR1_DCLKSEL_Msk            (0x200UL)                 /*!< SCU_CLK CLKCR1: DCLKSEL (Bitfield-Mask: 0x01)               */



typedef struct {                                    /*!< (@ 0x40010300) SCU_CLK Structure                                      */
  __RW uint32_t  CLKCR;                             /*!< (@ 0x40010300) Clock Control Register                                 */
  __RW uint32_t  PWRSVCR;                           /*!< (@ 0x40010304) Power Save Control Register                            */
  __R  uint32_t  CGATSTAT0;                         /*!< (@ 0x40010308) Peripheral 0 Clock Gating Status                       */
  __W  uint32_t  CGATSET0;                          /*!< (@ 0x4001030C) Peripheral 0 Clock Gating Set                          */
  __W  uint32_t  CGATCLR0;                          /*!< (@ 0x40010310) Peripheral 0 Clock Gating Clear                        */
  __RW uint32_t  OSCCSR;                            /*!< (@ 0x40010314) Oscillator Control and Status Register                 */
  __R  uint32_t  RESERVED;
  __RW uint32_t  CLKCR1;                            /*!< (@ 0x4001031C) Clock Control Register 1                               */
} SCU_CLK_t;


typedef struct {                                    /*!< (@ 0x48000000) USIC_CH Structure                                      */
  __R  uint32_t  RESERVED;
  __R  uint32_t  CCFG;                              /*!< (@ 0x48000004) Channel Configuration Register                         */
  __R  uint32_t  RESERVED1;
  __RW uint32_t  KSCFG;                             /*!< (@ 0x4800000C) Kernel State Configuration Register                    */
  __RW uint32_t  FDR;                               /*!< (@ 0x48000010) Fractional Divider Register                            */
  __RW uint32_t  BRG;                               /*!< (@ 0x48000014) Baud Rate Generator Register                           */
  __RW uint32_t  INPR;                              /*!< (@ 0x48000018) Interrupt Node Pointer Register                        */
  __RW uint32_t  DX0CR;                             /*!< (@ 0x4800001C) Input Control Register 0                               */
  __RW uint32_t  DX1CR;                             /*!< (@ 0x48000020) Input Control Register 1                               */
  __RW uint32_t  DX2CR;                             /*!< (@ 0x48000024) Input Control Register 2                               */
  __RW uint32_t  DX3CR;                             /*!< (@ 0x48000028) Input Control Register 3                               */
  __RW uint32_t  DX4CR;                             /*!< (@ 0x4800002C) Input Control Register 4                               */
  __RW uint32_t  DX5CR;                             /*!< (@ 0x48000030) Input Control Register 5                               */
  __RW uint32_t  SCTR;                              /*!< (@ 0x48000034) Shift Control Register                                 */
  __RW uint32_t  TCSR;                              /*!< (@ 0x48000038) Transmit Control/Status Register                       */
  
  union {
    __RW uint32_t  PCR_IICMode;                     /*!< (@ 0x4800003C) Protocol Control Register [IIC Mode]                   */
    __RW uint32_t  PCR_IISMode;                     /*!< (@ 0x4800003C) Protocol Control Register [IIS Mode]                   */
    __RW uint32_t  PCR_SSCMode;                     /*!< (@ 0x4800003C) Protocol Control Register [SSC Mode]                   */
    __RW uint32_t  PCR;                             /*!< (@ 0x4800003C) Protocol Control Register                              */
    __RW uint32_t  PCR_ASCMode;                     /*!< (@ 0x4800003C) Protocol Control Register [ASC Mode]                   */
  };
  __RW uint32_t  CCR;                               /*!< (@ 0x48000040) Channel Control Register                               */
  __RW uint32_t  CMTR;                              /*!< (@ 0x48000044) Capture Mode Timer Register                            */
  
  union {
    __RW uint32_t  PSR_IICMode;                     /*!< (@ 0x48000048) Protocol Status Register [IIC Mode]                    */
    __RW uint32_t  PSR_IISMode;                     /*!< (@ 0x48000048) Protocol Status Register [IIS Mode]                    */
    __RW uint32_t  PSR_SSCMode;                     /*!< (@ 0x48000048) Protocol Status Register [SSC Mode]                    */
    __RW uint32_t  PSR;                             /*!< (@ 0x48000048) Protocol Status Register                               */
    __RW uint32_t  PSR_ASCMode;                     /*!< (@ 0x48000048) Protocol Status Register [ASC Mode]                    */
  };
  __W  uint32_t  PSCR;                              /*!< (@ 0x4800004C) Protocol Status Clear Register                         */
  __R  uint32_t  RBUFSR;                            /*!< (@ 0x48000050) Receiver Buffer Status Register                        */
  __R  uint32_t  RBUF;                              /*!< (@ 0x48000054) Receiver Buffer Register                               */
  __R  uint32_t  RBUFD;                             /*!< (@ 0x48000058) Receiver Buffer Register for Debugger                  */
  __R  uint32_t  RBUF0;                             /*!< (@ 0x4800005C) Receiver Buffer Register 0                             */
  __R  uint32_t  RBUF1;                             /*!< (@ 0x48000060) Receiver Buffer Register 1                             */
  __R  uint32_t  RBUF01SR;                          /*!< (@ 0x48000064) Receiver Buffer 01 Status Register                     */
  __W  uint32_t  FMR;                               /*!< (@ 0x48000068) Flag Modification Register                             */
  __R  uint32_t  RESERVED2[5];
  __RW uint32_t  TBUF[32];                          /*!< (@ 0x48000080) Transmit Buffer                                        */
  __RW uint32_t  BYP;                               /*!< (@ 0x48000100) Bypass Data Register                                   */
  __RW uint32_t  BYPCR;                             /*!< (@ 0x48000104) Bypass Control Register                                */
  __RW uint32_t  TBCTR;                             /*!< (@ 0x48000108) Transmitter Buffer Control Register                    */
  __RW uint32_t  RBCTR;                             /*!< (@ 0x4800010C) Receiver Buffer Control Register                       */
  __R  uint32_t  TRBPTR;                            /*!< (@ 0x48000110) Transmit/Receive Buffer Pointer Register               */
  __RW uint32_t  TRBSR;                             /*!< (@ 0x48000114) Transmit/Receive Buffer Status Register                */
  __W  uint32_t  TRBSCR;                            /*!< (@ 0x48000118) Transmit/Receive Buffer Status Clear Register          */
  __R  uint32_t  OUTR;                              /*!< (@ 0x4800011C) Receiver Buffer Output Register                        */
  __R  uint32_t  OUTDR;                             /*!< (@ 0x48000120) Receiver Buffer Output Register L for Debugger         */
  __R  uint32_t  RESERVED3[23];
  __W  uint32_t  IN[32];                            /*!< (@ 0x48000180) Transmit FIFO Buffer                                   */
} USIC_t;


typedef struct {                                    /*!< (@ 0x40010000) SCU_GENERAL Structure                                  */
  __R  uint32_t  DBGROMID;                          /*!< (@ 0x40010000) Debug System ROM ID Register                           */
  __R  uint32_t  IDCHIP;                            /*!< (@ 0x40010004) Chip ID Register                                       */
  __R  uint32_t  ID;                                /*!< (@ 0x40010008) SCU Module ID Register                                 */
  __R  uint32_t  RESERVED[2];
  __RW uint32_t  SSW0;                              /*!< (@ 0x40010014) SSW Register 0                                         */
  __R  uint32_t  RESERVED1[3];
  __RW uint32_t  PASSWD;                            /*!< (@ 0x40010024) Password Register                                      */
  __R  uint32_t  RESERVED2[2];
  __RW uint32_t  CCUCON;                            /*!< (@ 0x40010030) CCU Control Register                                   */
  __R  uint32_t  RESERVED3[5];
  __R  uint32_t  MIRRSTS;                           /*!< (@ 0x40010048) Mirror Update Status Register                          */
  __R  uint32_t  RESERVED4[2];
  __RW uint32_t  PMTSR;                             /*!< (@ 0x40010054) Parity Memory Test Select Register                     */
  __R  uint32_t  RESERVED5[4];
  __RW uint32_t  PFUCR;                             /*!< (@ 0x40010068) Prefetch Unit Control Register                         */
  __RW uint32_t  INTCR0;                            /*!< (@ 0x4001006C) Interrupt Control Register 0                           */
  __RW uint32_t  INTCR1;                            /*!< (@ 0x40010070) Interrupt Control Register 1                           */
  __R  uint32_t  STSTAT;                            /*!< (@ 0x40010074) Startup Status Register                                */
} SCU_GENERAL_t;


typedef struct {                                    /*!< (@ 0xE000E100) SCS_REG Structure                                       */
  __RW uint32_t  ISER;                              /*!< (@ 0xE000E100) Interrupt Set-enable Registers                          */
       uint32_t  RESERVED1[31];
  __RW uint32_t  ICER;                              /*!< (@ 0xE000E180) Interrupt Clear-enable Register                         */
       uint32_t  RESERVED2[31];
  __RW uint32_t  ISPR;                              /*!< (@ 0xE000E200) Interrupt Set-pending Registers                         */
       uint32_t  RESERVED3[31];
  __RW uint32_t  ICPR;                              /*!< (@ 0xE000E280) Interrupt Clear-pending Registers                       */
       uint32_t  RESERVED4[31U];
       uint32_t  RESERVED5[64U];
  __RW uint32_t  IPR[8];                            /*!< (@ 0xE000E400) Interrupt Priority Register 0                           */

} NVIC_REG_t;


typedef struct
{
  __RW uint32_t CTRL;                   /*!< Offset: 0x000 (R/W)  SysTick Control and Status Register */
  __RW uint32_t LOAD;                   /*!< Offset: 0x004 (R/W)  SysTick Reload Value Register */
  __RW uint32_t VAL;                    /*!< Offset: 0x008 (R/W)  SysTick Current Value Register */
  __R  uint32_t CALIB;                  /*!< Offset: 0x00C (R/ )  SysTick Calibration Register */
} SysTick_Type;


typedef struct
{
  __R  uint32_t CPUID;                  /*!< Offset: 0x000 (R/ )  CPUID Base Register */
  __RW uint32_t ICSR;                   /*!< Offset: 0x004 (R/W)  Interrupt Control and State Register */
       uint32_t RESERVED0;
  __RW uint32_t AIRCR;                  /*!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register */
  __RW uint32_t SCR;                    /*!< Offset: 0x010 (R/W)  System Control Register */
  __RW uint32_t CCR;                    /*!< Offset: 0x014 (R/W)  Configuration Control Register */
       uint32_t RESERVED1;
  __RW uint32_t SHP[2U];                /*!< Offset: 0x01C (R/W)  System Handlers Priority Registers. [0] is RESERVED */
  __RW uint32_t SHCSR;                  /*!< Offset: 0x024 (R/W)  System Handler Control and State Register */
} SCB_Type;


/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum {
/* -------------------  Cortex-M0 Processor Exceptions Numbers  ------------------- */
  Reset_IRQn                    = -15,              /*!<   1  Reset Vector, invoked on Power up and warm reset                 */
  NonMaskableInt_IRQn           = -14,              /*!<   2  Non maskable Interrupt, cannot be stopped or preempted           */
  HardFault_IRQn                = -13,              /*!<   3  Hard Fault, all classes of Fault                                 */
  SVCall_IRQn                   =  -5,              /*!<  11  System Service Call via SVC instruction                          */
  PendSV_IRQn                   =  -2,              /*!<  14  Pendable request for system service                              */
  SysTick_IRQn                  =  -1,              /*!<  15  System Tick Timer                                                */
/* ---------------------  XMC1400 Specific Interrupt Numbers  --------------------- */
  IRQ0_IRQn                     =   0,   
  IRQ1_IRQn                     =   1,   
  IRQ2_IRQn                     =   2,   
  IRQ3_IRQn                     =   3,   
  IRQ4_IRQn                     =   4,   
  IRQ5_IRQn                     =   5,   
  IRQ6_IRQn                     =   6,   
  IRQ7_IRQn                     =   7,   
  IRQ8_IRQn                     =   8,   
  IRQ9_IRQn                     =   9,   
  IRQ10_IRQn                    =  10,  
  IRQ11_IRQn                    =  11,  
  IRQ12_IRQn                    =  12,  
  IRQ13_IRQn                    =  13,  
  IRQ14_IRQn                    =  14,  
  IRQ15_IRQn                    =  15,  
  IRQ16_IRQn                    =  16,  
  IRQ17_IRQn                    =  17,  
  IRQ18_IRQn                    =  18,  
  IRQ19_IRQn                    =  19,  
  IRQ20_IRQn                    =  20,  
  IRQ21_IRQn                    =  21,  
  IRQ22_IRQn                    =  22,  
  IRQ23_IRQn                    =  23,  
  IRQ24_IRQn                    =  24,  
  IRQ25_IRQn                    =  25,  
  IRQ26_IRQn                    =  26,  
  IRQ27_IRQn                    =  27,  
  IRQ28_IRQn                    =  28,  
  IRQ29_IRQn                    =  29,  
  IRQ30_IRQn                    =  30,  
  IRQ31_IRQn                    =  31 
  
} IRQn_Type;

/* Interrupt Priorities are WORD accessible only under ARMv6M                   */
/* The following MACROS handle generation of the register offset and byte masks */
#define _BIT_SHIFT(IRQn)         (  ((((uint32_t)(int32_t)(IRQn))         )      &  0x03UL) * 8UL)
#define _SHP_IDX(IRQn)           ( (((((uint32_t)(int32_t)(IRQn)) & 0x0FUL)-8UL) >>    2UL)      )
#define _IP_IDX(IRQn)            (   (((uint32_t)(int32_t)(IRQn))                >>    2UL)      )
#define __NVIC_PRIO_BITS         2            /*!< Number of Bits used for Priority Levels                               */


#define USIC0_CH0                       ((USIC_t *) USIC0_CH0_BASE)
#define USIC0_CH1                       ((USIC_t *) USIC0_CH1_BASE)
#define USIC1_CH0                       ((USIC_t *) USIC1_CH0_BASE)
#define USIC1_CH1                       ((USIC_t *) USIC1_CH1_BASE)

#define SCU_CLK                         ((SCU_CLK_t *) SCU_CLK_BASE)
#define SCU_GENERAL                     ((SCU_GENERAL_t *) SCU_GENERAL_BASE)
#define NVIC_REG                        ((NVIC_REG_t *) NVIC_BASE)
#define SYSTICK                         ((SysTick_Type *) SYSTICK_BASE)
#define SCB                             ((SCB_Type *) SCB_BASE)

#endif