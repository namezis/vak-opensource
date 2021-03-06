/*            - io2313.h -

   This file #defines the internal register addresses for AT90S2313.


   Version: 1.21

*/

#ifndef __IO2313
#define __IO2313


/*==========================*/
/* Predefined SFR Addresses */
/*==========================*/

/* Analog Comparator Control and Status Register */
#define ACSR     0x08

/* UART Baud Rate Register */
#define UBRR     0x09

/* UART Control Register */
#define UCR     0x0A

/* UART Status Register */
#define USR     0x0B

/* UART I/O Data Register */
#define UDR     0x0C

/* Input Pins, Port D */
#define PIND     0x10

/* Data Direction Register, Port D */
#define DDRD     0x11

/* Data Register, Port D */
#define PORTD     0x12

/* Input Pins, Port B */
#define PINB     0x16

/* Data Direction Register, Port B */
#define DDRB     0x17

/* Data Register, Port B */
#define PORTB     0x18

/* EEPROM Control Register */
#define EECR     0x1C

/* EEPROM Data Register */
#define EEDR     0x1D

/* EEPROM Address Register */
#define EEAR     0x1E
#define EEARL    0x1E

/* Watchdog Timer Control Register */
#define WDTCR     0x21

/* T/C 1 Input Capture Register */
#define ICR1     0x24
#define ICR1L     0x24
#define ICR1H     0x25

/* Output Compare Register 1 */
#define OCR1     0x2A
#define OCR1L     0x2A
#define OCR1H     0x2B

/* Timer/Counter 1 */
#define TCNT1     0x2C
#define TCNT1L     0x2C
#define TCNT1H     0x2D

/* Timer/Counter 1 Control and Status Register */
#define TCCR1B     0x2E

/* Timer/Counter 1 Control Register */
#define TCCR1A     0x2F

/* Timer/Counter 0 */
#define TCNT0     0x32

/* Timer/Counter 0 Control Register */
#define TCCR0     0x33

/* MCU general Control Register */
#define MCUCR     0x35

/* Timer/Counter Interrupt Flag register */
#define TIFR     0x38

/* Timer/Counter Interrupt MaSK register */
#define TIMSK     0x39

/* General Interrupt Flag Register */
#define GIFR  0x3A

/* General Interrupt MaSK register */
#define GIMSK     0x3B

/* Stack Pointer */
#define SP         0x3D
#define SPL        0x3D

/* Status REGister */
#define SREG     0x3F


/*=============================*/
/* Interrupt Vector Definitions */
/*==============================*/

/* NB! vectors are specified as byte addresses */

#define    RESET_vect        (0x00)
#define    INT0_vect        (0x02)
#define    INT1_vect        (0x04)
#define    TIMER1_CAPT_vect    (0x06)
#define    TIMER1_COMPA_vect    (0x08)
#define    TIMER1_OVF_vect    (0x0A)
#define    TIMER0_OVF_vect    (0x0C)
#define    UART_RX_vect        (0x0E)
#define    UART_UDRE_vect        (0x10)
#define    UART_TX_vect        (0x12)
#define    ANA_COMP_vect        (0x14)


/*
   The Register Bit names are represented by their bit number (0-7).
*/

/* Stack Pointer */
#define    SP7     7
#define    SP6     6
#define    SP5     5
#define    SP4     4
#define    SP3     3
#define    SP2     2
#define    SP1     1
#define    SP0     0

/* General Interrupt MaSK register */
#define    INT1    7
#define    INT0    6

/* General Interrupt Flag Register */
#define    INTF1   7
#define    INTF0   6

/* Timer/Counter Interrupt MaSK register */
#define    TOIE1   7
#define    OCIE1A  6
#define    TICIE   3
#define    TOIE0   1

/* Timer/Counter Interrupt Flag register */
#define    TOV1    7
#define    OCF1A   6
#define    ICF1    3
#define    TOV0    1

/* MCU general Control Register */
#define    SE      5
#define    SM      4
#define    ISC11   3
#define    ISC10   2
#define    ISC01   1
#define    ISC00   0

/* Timer/Counter 0 Control Register */
#define    CS02    2
#define    CS01    1
#define    CS00    0

/* Timer/Counter 1 Control Register */
#define    COM1A1  7
#define    COM1A0  6
#define    PWM11   1
#define    PWM10   0

/* Timer/Counter 1 Control and Status Register */
#define    ICNC1   7
#define    ICES1   6
#define    CTC1    3
#define    CS12    2
#define    CS11    1
#define    CS10    0

/* Watchdog Timer Control Register */
#define    WDTOE   4
#define    WDE     3
#define    WDP2    2
#define    WDP1    1
#define    WDP0    0

/* EEPROM Control Register */
#define    EEMWE   2
#define    EEWE    1
#define    EERE    0

/* Data Register, Port B */
#define    PB7     7
#define    PB6     6
#define    PB5     5
#define    PB4     4
#define    PB3     3
#define    PB2     2
#define    PB1     1
#define    PB0     0

/* Data Direction Register, Port B */
#define    DDB7    7
#define    DDB6    6
#define    DDB5    5
#define    DDB4    4
#define    DDB3    3
#define    DDB2    2
#define    DDB1    1
#define    DDB0    0

/* Input Pins, Port B */
#define    PINB7   7
#define    PINB6   6
#define    PINB5   5
#define    PINB4   4
#define    PINB3   3
#define    PINB2   2
#define    PINB1   1
#define    PINB0   0

/* Data Register, Port D */
#define    PD6     6
#define    PD5     5
#define    PD4     4
#define    PD3     3
#define    PD2     2
#define    PD1     1
#define    PD0     0

/* Data Direction Register, Port D */
#define    DDD6    6
#define    DDD5    5
#define    DDD4    4
#define    DDD3    3
#define    DDD2    2
#define    DDD1    1
#define    DDD0    0

/* Input Pins, Port D */
#define    PIND6   6
#define    PIND5   5
#define    PIND4   4
#define    PIND3   3
#define    PIND2   2
#define    PIND1   1
#define    PIND0   0

/* UART Status Register */
#define    RXC     7
#define    TXC     6
#define    UDRE    5
#define    FE      4
#define    OVR     3    /*This definition differs from the databook    */
                        /*definition to avoid problems with the OR instruction */

/* UART Control Register */
#define    RXCIE   7
#define    TXCIE   6
#define    UDRIE   5
#define    RXEN    4
#define    TXEN    3
#define    CHR9    2
#define    RXB8    1
#define    TXB8    0

/* Analog Comparator Control and Status Register */
#define    ACD     7
#define    ACO     5
#define    ACI     4
#define    ACIE    3
#define    ACIC    2
#define    ACIS1   1
#define    ACIS0   0

/* Pointer definition   */
#define    XL     R26
#define    XH     R27
#define    YL     R28
#define    YH     R29
#define    ZL     R30
#define    ZH     R31

/* Constants */
#define    RAMEND    0xDF
#define    XRAMEND   0xDF
#define    E2END     0x7F
#define    FLASHEND  0x07FF

#endif
