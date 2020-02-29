#ifndef GPIO_H
#define GPIO_H

#define PORT0_BASE                  0x40040000UL
#define PORT1_BASE                  0x40040100UL
#define PORT2_BASE                  0x40040200UL
#define PORT3_BASE                  0x40040300UL
#define PORT4_BASE                  0x40040400UL
#define OUTPUT_OD_GP                0xC0U

#define PORT0_IOCR0                 *((volatile unsigned int*) (PORT0_BASE + 0x10))
#define PORT0_OMR                   *((volatile unsigned int*) (PORT0_BASE + 0x04))
#define PORT0_OUT                   *((volatile unsigned int*) (PORT0_BASE + 0x00))

#define PORT1_IOCR0                 *((volatile unsigned int*) (PORT1_BASE + 0x10))
#define PORT1_OMR                   *((volatile unsigned int*) (PORT1_BASE + 0x04))
#define PORT1_OUT                   *((volatile unsigned int*) (PORT1_BASE + 0x00))

#define PORT2_IOCR0                 *((volatile unsigned int*) (PORT2_BASE + 0x10))
#define PORT2_OMR                   *((volatile unsigned int*) (PORT2_BASE + 0x04))
#define PORT2_OUT                   *((volatile unsigned int*) (PORT2_BASE + 0x00))

#define PORT3_IOCR0                 *((volatile unsigned int*) (PORT3_BASE + 0x10))
#define PORT3_OMR                   *((volatile unsigned int*) (PORT3_BASE + 0x04))
#define PORT3_OUT                   *((volatile unsigned int*) (PORT3_BASE + 0x00))

#define PORT4_IOCR0                 *((volatile unsigned int*) (PORT4_BASE + 0x10))
#define PORT4_OMR                   *((volatile unsigned int*) (PORT4_BASE + 0x04))
#define PORT4_OUT                   *((volatile unsigned int*) (PORT4_BASE + 0x00))

#define PORT0_IOCR_NUM0               PORT0_IOCR0
#define PORT0_IOCR_NUM1               PORT0_IOCR0
#define PORT0_IOCR_NUM2               PORT0_IOCR0
#define PORT0_IOCR_NUM3               PORT0_IOCR0

#define PORT1_IOCR_NUM0               PORT1_IOCR0
#define PORT1_IOCR_NUM1               PORT1_IOCR0
#define PORT1_IOCR_NUM2               PORT1_IOCR0
#define PORT1_IOCR_NUM3               PORT1_IOCR0

#define PORT2_IOCR_NUM0               PORT2_IOCR0
#define PORT2_IOCR_NUM1               PORT2_IOCR0
#define PORT2_IOCR_NUM2               PORT2_IOCR0
#define PORT2_IOCR_NUM3               PORT2_IOCR0

#define PORT3_IOCR_NUM0               PORT3_IOCR0
#define PORT3_IOCR_NUM1               PORT3_IOCR0
#define PORT3_IOCR_NUM2               PORT3_IOCR0
#define PORT3_IOCR_NUM3               PORT3_IOCR0

#define PORT4_IOCR_NUM0               PORT4_IOCR0
#define PORT4_IOCR_NUM1               PORT4_IOCR0
#define PORT4_IOCR_NUM2               PORT4_IOCR0
#define PORT4_IOCR_NUM3               PORT4_IOCR0

#define IOCR_PIN_BITPOS_0    0UL
#define IOCR_PIN_BITPOS_1    8UL
#define IOCR_PIN_BITPOS_2   16UL
#define IOCR_PIN_BITPOS_3   24UL

#define Pin_set_mode(port, pin, mode)   PORT##port##_##IOCR_NUM##pin &= ~(0x000000FCUL << IOCR_PIN_BITPOS_##pin); \
                                        PORT##port##_##IOCR_NUM##pin |= mode << IOCR_PIN_BITPOS_##pin
 
#define Pin_toggle(port, pin)           PORT##port##_OUT ^= (0x00000001U << pin)                                      
#define Pin_high(port, pin)             PORT##port##_OUT |= (0x00000001U << pin)                                     
#define Pin_low(port, pin)              PORT##port##_OUT &= ~(0x00000001U << pin)                                     


#endif