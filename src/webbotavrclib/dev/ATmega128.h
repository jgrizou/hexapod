// -- This file has been autogenerated - do not modify by hand
// -- This file is automatically included when necessary, don't include it in your own program
#ifndef _DEV_ATmega128_H_
#define _DEV_ATmega128_H_

#include "../libdefs.h"

#define EEPROM_SIZE 4096
// -- include EEPROM support --
#include <avr/eeprom.h>
// -------------- Define the I/O ports that haven't been disabled by the system file ------------
#ifdef PORTA
// Define Port A
	IOPort PROGMEM _PORTA={_SFR_MEM_ADDR(PORTA),_SFR_MEM_ADDR(DDRA),_SFR_MEM_ADDR(PINA)};
# ifdef PA0
	IOPin PROGMEM _A0 = { &_PORTA, BV(PA0)};
#	define A0 &_A0
#	undef PA0
# endif
# ifdef PA1
	IOPin PROGMEM _A1 = { &_PORTA, BV(PA1)};
#	define A1 &_A1
#	undef PA1
# endif
# ifdef PA2
	IOPin PROGMEM _A2 = { &_PORTA, BV(PA2)};
#	define A2 &_A2
#	undef PA2
# endif
# ifdef PA3
	IOPin PROGMEM _A3 = { &_PORTA, BV(PA3)};
#	define A3 &_A3
#	undef PA3
# endif
# ifdef PA4
	IOPin PROGMEM _A4 = { &_PORTA, BV(PA4)};
#	define A4 &_A4
#	undef PA4
# endif
# ifdef PA5
	IOPin PROGMEM _A5 = { &_PORTA, BV(PA5)};
#	define A5 &_A5
#	undef PA5
# endif
# ifdef PA6
	IOPin PROGMEM _A6 = { &_PORTA, BV(PA6)};
#	define A6 &_A6
#	undef PA6
# endif
# ifdef PA7
	IOPin PROGMEM _A7 = { &_PORTA, BV(PA7)};
#	define A7 &_A7
#	undef PA7
# endif
//undefine pins to stop them being used directly
# undef PORTA
# undef DDRA
# undef PINA
#endif

#ifdef PORTB
// Define Port B
	IOPort PROGMEM _PORTB={_SFR_MEM_ADDR(PORTB),_SFR_MEM_ADDR(DDRB),_SFR_MEM_ADDR(PINB)};
# ifdef PB0
	IOPin PROGMEM _B0 = { &_PORTB, BV(PB0)};
#	define B0 &_B0
#	undef PB0
# endif
# ifdef PB1
	IOPin PROGMEM _B1 = { &_PORTB, BV(PB1)};
#	define B1 &_B1
#	undef PB1
# endif
# ifdef PB2
	IOPin PROGMEM _B2 = { &_PORTB, BV(PB2)};
#	define B2 &_B2
#	undef PB2
# endif
# ifdef PB3
	IOPin PROGMEM _B3 = { &_PORTB, BV(PB3)};
#	define B3 &_B3
#	undef PB3
# endif
# ifdef PB4
	IOPin PROGMEM _B4 = { &_PORTB, BV(PB4)};
#	define B4 &_B4
#	undef PB4
# endif
# ifdef PB5
	IOPin PROGMEM _B5 = { &_PORTB, BV(PB5)};
#	define B5 &_B5
#	undef PB5
# endif
# ifdef PB6
	IOPin PROGMEM _B6 = { &_PORTB, BV(PB6)};
#	define B6 &_B6
#	undef PB6
# endif
# ifdef PB7
	IOPin PROGMEM _B7 = { &_PORTB, BV(PB7)};
#	define B7 &_B7
#	undef PB7
# endif
//undefine pins to stop them being used directly
# undef PORTB
# undef DDRB
# undef PINB
#endif

#ifdef PORTC
// Define Port C
	IOPort PROGMEM _PORTC={_SFR_MEM_ADDR(PORTC),_SFR_MEM_ADDR(DDRC),_SFR_MEM_ADDR(PINC)};
# ifdef PC0
	IOPin PROGMEM _C0 = { &_PORTC, BV(PC0)};
#	define C0 &_C0
#	undef PC0
# endif
# ifdef PC1
	IOPin PROGMEM _C1 = { &_PORTC, BV(PC1)};
#	define C1 &_C1
#	undef PC1
# endif
# ifdef PC2
	IOPin PROGMEM _C2 = { &_PORTC, BV(PC2)};
#	define C2 &_C2
#	undef PC2
# endif
# ifdef PC3
	IOPin PROGMEM _C3 = { &_PORTC, BV(PC3)};
#	define C3 &_C3
#	undef PC3
# endif
# ifdef PC4
	IOPin PROGMEM _C4 = { &_PORTC, BV(PC4)};
#	define C4 &_C4
#	undef PC4
# endif
# ifdef PC5
	IOPin PROGMEM _C5 = { &_PORTC, BV(PC5)};
#	define C5 &_C5
#	undef PC5
# endif
# ifdef PC6
	IOPin PROGMEM _C6 = { &_PORTC, BV(PC6)};
#	define C6 &_C6
#	undef PC6
# endif
# ifdef PC7
	IOPin PROGMEM _C7 = { &_PORTC, BV(PC7)};
#	define C7 &_C7
#	undef PC7
# endif
//undefine pins to stop them being used directly
# undef PORTC
# undef DDRC
# undef PINC
#endif

#ifdef PORTD
// Define Port D
	IOPort PROGMEM _PORTD={_SFR_MEM_ADDR(PORTD),_SFR_MEM_ADDR(DDRD),_SFR_MEM_ADDR(PIND)};
# ifdef PD0
	IOPin PROGMEM _D0 = { &_PORTD, BV(PD0)};
#	define D0 &_D0
#	undef PD0
# endif
# ifdef PD1
	IOPin PROGMEM _D1 = { &_PORTD, BV(PD1)};
#	define D1 &_D1
#	undef PD1
# endif
# ifdef PD2
	IOPin PROGMEM _D2 = { &_PORTD, BV(PD2)};
#	define D2 &_D2
#	undef PD2
# endif
# ifdef PD3
	IOPin PROGMEM _D3 = { &_PORTD, BV(PD3)};
#	define D3 &_D3
#	undef PD3
# endif
# ifdef PD4
	IOPin PROGMEM _D4 = { &_PORTD, BV(PD4)};
#	define D4 &_D4
#	undef PD4
# endif
# ifdef PD5
	IOPin PROGMEM _D5 = { &_PORTD, BV(PD5)};
#	define D5 &_D5
#	undef PD5
# endif
# ifdef PD6
	IOPin PROGMEM _D6 = { &_PORTD, BV(PD6)};
#	define D6 &_D6
#	undef PD6
# endif
# ifdef PD7
	IOPin PROGMEM _D7 = { &_PORTD, BV(PD7)};
#	define D7 &_D7
#	undef PD7
# endif
//undefine pins to stop them being used directly
# undef PORTD
# undef DDRD
# undef PIND
#endif

#ifdef PORTE
// Define Port E
	IOPort PROGMEM _PORTE={_SFR_MEM_ADDR(PORTE),_SFR_MEM_ADDR(DDRE),_SFR_MEM_ADDR(PINE)};
# ifdef PE0
	IOPin PROGMEM _E0 = { &_PORTE, BV(PE0)};
#	define E0 &_E0
#	undef PE0
# endif
# ifdef PE1
	IOPin PROGMEM _E1 = { &_PORTE, BV(PE1)};
#	define E1 &_E1
#	undef PE1
# endif
# ifdef PE2
	IOPin PROGMEM _E2 = { &_PORTE, BV(PE2)};
#	define E2 &_E2
#	undef PE2
# endif
# ifdef PE3
	IOPin PROGMEM _E3 = { &_PORTE, BV(PE3)};
#	define E3 &_E3
#	undef PE3
# endif
# ifdef PE4
	IOPin PROGMEM _E4 = { &_PORTE, BV(PE4)};
#	define E4 &_E4
#	undef PE4
# endif
# ifdef PE5
	IOPin PROGMEM _E5 = { &_PORTE, BV(PE5)};
#	define E5 &_E5
#	undef PE5
# endif
# ifdef PE6
	IOPin PROGMEM _E6 = { &_PORTE, BV(PE6)};
#	define E6 &_E6
#	undef PE6
# endif
# ifdef PE7
	IOPin PROGMEM _E7 = { &_PORTE, BV(PE7)};
#	define E7 &_E7
#	undef PE7
# endif
//undefine pins to stop them being used directly
# undef PORTE
# undef DDRE
# undef PINE
#endif

#ifdef PORTF
// Define Port F
	IOPort PROGMEM _PORTF={_SFR_MEM_ADDR(PORTF),_SFR_MEM_ADDR(DDRF),_SFR_MEM_ADDR(PINF)};
# ifdef PF0
	IOPin PROGMEM _F0 = { &_PORTF, BV(PF0)};
#	define F0 &_F0
#	undef PF0
# endif
# ifdef PF1
	IOPin PROGMEM _F1 = { &_PORTF, BV(PF1)};
#	define F1 &_F1
#	undef PF1
# endif
# ifdef PF2
	IOPin PROGMEM _F2 = { &_PORTF, BV(PF2)};
#	define F2 &_F2
#	undef PF2
# endif
# ifdef PF3
	IOPin PROGMEM _F3 = { &_PORTF, BV(PF3)};
#	define F3 &_F3
#	undef PF3
# endif
# ifdef PF4
	IOPin PROGMEM _F4 = { &_PORTF, BV(PF4)};
#	define F4 &_F4
#	undef PF4
# endif
# ifdef PF5
	IOPin PROGMEM _F5 = { &_PORTF, BV(PF5)};
#	define F5 &_F5
#	undef PF5
# endif
# ifdef PF6
	IOPin PROGMEM _F6 = { &_PORTF, BV(PF6)};
#	define F6 &_F6
#	undef PF6
# endif
# ifdef PF7
	IOPin PROGMEM _F7 = { &_PORTF, BV(PF7)};
#	define F7 &_F7
#	undef PF7
# endif
//undefine pins to stop them being used directly
# undef PORTF
# undef DDRF
# undef PINF
#endif

#ifdef PORTG
// Define Port G
	IOPort PROGMEM _PORTG={_SFR_MEM_ADDR(PORTG),_SFR_MEM_ADDR(DDRG),_SFR_MEM_ADDR(PING)};
# ifdef PG0
	IOPin PROGMEM _G0 = { &_PORTG, BV(PG0)};
#	define G0 &_G0
#	undef PG0
# endif
# ifdef PG1
	IOPin PROGMEM _G1 = { &_PORTG, BV(PG1)};
#	define G1 &_G1
#	undef PG1
# endif
# ifdef PG2
	IOPin PROGMEM _G2 = { &_PORTG, BV(PG2)};
#	define G2 &_G2
#	undef PG2
# endif
# ifdef PG3
	IOPin PROGMEM _G3 = { &_PORTG, BV(PG3)};
#	define G3 &_G3
#	undef PG3
# endif
# ifdef PG4
	IOPin PROGMEM _G4 = { &_PORTG, BV(PG4)};
#	define G4 &_G4
#	undef PG4
# endif
# ifdef PG5
	IOPin PROGMEM _G5 = { &_PORTG, BV(PG5)};
#	define G5 &_G5
#	undef PG5
# endif
# ifdef PG6
	IOPin PROGMEM _G6 = { &_PORTG, BV(PG6)};
#	define G6 &_G6
#	undef PG6
# endif
# ifdef PG7
	IOPin PROGMEM _G7 = { &_PORTG, BV(PG7)};
#	define G7 &_G7
#	undef PG7
# endif
//undefine pins to stop them being used directly
# undef PORTG
# undef DDRG
# undef PING
#endif

// -------------- End of I/O ports --------------------------------------------------------------

// -------------- Define the PWM pins that haven't been disabled by the system file -------------
#ifdef B4
# define PWM0 B4
#else
# define PWM0 null
#endif
#ifdef B5
# define PWM1A B5
#else
# define PWM1A null
#endif
#ifdef B6
# define PWM1B B6
#else
# define PWM1B null
#endif
#ifdef B7
# define PWM1C B7
#else
# define PWM1C null
#endif
#ifdef B7
# define PWM2 B7
#else
# define PWM2 null
#endif
#ifdef E3
# define PWM3A E3
#else
# define PWM3A null
#endif
#ifdef E4
# define PWM3B E4
#else
# define PWM3B null
#endif
#ifdef E5
# define PWM3C E5
#else
# define PWM3C null
#endif
// -------------- End of PWM pins ---------------------------------------------------------------

// -------------- Define the timers -------------------------------------------------------------

// Create Timer 0
TimerData __timer0_data = MAKE_TIMER_DATA(0);
TimerDataCompare __timer0Compare_data = MAKE_TIMER_COMPARE_DATA();
TimerCompare PROGMEM __timer0Compare[] = {
	MAKE_TIMER_COMPARE(__timer0Compare_data,0,TIMSK,OCIE0,OCR0,TIFR,OCF0,TCCR0,COM00,PWM0)
};
#define TIMER0_COMPARE &__timer0Compare[0]

// Create Timer 1
TimerData __timer1_data = MAKE_TIMER_DATA(0);
TimerDataCompare __timer1CompareA_data = MAKE_TIMER_COMPARE_DATA();
TimerDataCompare __timer1CompareB_data = MAKE_TIMER_COMPARE_DATA();
TimerDataCompare __timer1CompareC_data = MAKE_TIMER_COMPARE_DATA();
TimerCompare PROGMEM __timer1Compare[] = {
	MAKE_TIMER_COMPARE(__timer1CompareA_data,1,TIMSK,OCIE1A,OCR1A,TIFR,OCF1A,TCCR1A,COM1A0,PWM1A),
	MAKE_TIMER_COMPARE(__timer1CompareB_data,1,TIMSK,OCIE1B,OCR1B,TIFR,OCF1B,TCCR1A,COM1B0,PWM1B),
	MAKE_TIMER_COMPARE(__timer1CompareC_data,1,ETIMSK,OCIE1C,OCR1C,ETIFR,OCF1C,TCCR1A,COM1C0,PWM1C)
};
#define TIMER1_COMPAREA &__timer1Compare[0]
#define TIMER1_COMPAREB &__timer1Compare[1]
#define TIMER1_COMPAREC &__timer1Compare[2]

// Create Timer 2
TimerData __timer2_data = MAKE_TIMER_DATA(0);
TimerDataCompare __timer2Compare_data = MAKE_TIMER_COMPARE_DATA();
TimerCompare PROGMEM __timer2Compare[] = {
	MAKE_TIMER_COMPARE(__timer2Compare_data,2,TIMSK,OCIE2,OCR2,TIFR,OCF2,TCCR2,COM20,PWM2)
};
#define TIMER2_COMPARE &__timer2Compare[0]

// Create Timer 3
TimerData __timer3_data = MAKE_TIMER_DATA(0);
TimerDataCompare __timer3CompareA_data = MAKE_TIMER_COMPARE_DATA();
TimerDataCompare __timer3CompareB_data = MAKE_TIMER_COMPARE_DATA();
TimerDataCompare __timer3CompareC_data = MAKE_TIMER_COMPARE_DATA();
TimerCompare PROGMEM __timer3Compare[] = {
	MAKE_TIMER_COMPARE(__timer3CompareA_data,3,ETIMSK,OCIE3A,OCR3A,ETIFR,OCF3A,TCCR3A,COM3A0,PWM3A),
	MAKE_TIMER_COMPARE(__timer3CompareB_data,3,ETIMSK,OCIE3B,OCR3B,ETIFR,OCF3B,TCCR3A,COM3B0,PWM3B),
	MAKE_TIMER_COMPARE(__timer3CompareC_data,3,ETIMSK,OCIE3C,OCR3C,ETIFR,OCF3C,TCCR3A,COM3C0,PWM3C)
};
#define TIMER3_COMPAREA &__timer3Compare[0]
#define TIMER3_COMPAREB &__timer3Compare[1]
#define TIMER3_COMPAREC &__timer3Compare[2]

// Input Capture pins for each timer
#define InputCapture0 null
#ifdef D4
#define InputCapture1 D4
#else
#define InputCapture1 null
#endif
#define InputCapture2 null
#ifdef E7
#define InputCapture3 E7
#else
#define InputCapture3 null
#endif

const PROGMEM Timer PROGMEM pgm_Timers[] = {
	MAKE_TIMER(__timer0_data,TCNT0,TCCR0, FALSE, TRUE, TIMER_2BIT_MODES,TCCR0,WGM00,TCCR0,WGM01,UNUSED_PORT,0,UNUSED_PORT,0,__timer0Compare, TIMSK,TOIE0, TIFR,TOV0, UNUSED_PORT, UNUSED_PORT,0, UNUSED_PORT,0, UNUSED_PORT,0, InputCapture0),
	MAKE_TIMER(__timer1_data,TCNT1,TCCR1B, TRUE, FALSE, TIMER_ALL_MODES,TCCR1A,WGM10,TCCR1A,WGM11,TCCR1B,WGM12,TCCR1B,WGM13,__timer1Compare, TIMSK,TOIE1, TIFR,TOV1, ICR1, TIMSK,TICIE1, TIFR,ICF1, TCCR1B,ICES1, InputCapture1),
	MAKE_TIMER(__timer2_data,TCNT2,TCCR2, FALSE, FALSE, TIMER_2BIT_MODES,TCCR2,WGM20,TCCR2,WGM21,UNUSED_PORT,0,UNUSED_PORT,0,__timer2Compare, TIMSK,TOIE2, TIFR,TOV2, UNUSED_PORT, UNUSED_PORT,0, UNUSED_PORT,0, UNUSED_PORT,0, InputCapture2),
	MAKE_TIMER(__timer3_data,TCNT3,TCCR3B, TRUE, FALSE, TIMER_ALL_MODES,TCCR3A,WGM30,TCCR3A,WGM31,TCCR3B,WGM32,TCCR3B,WGM33,__timer3Compare, ETIMSK,TOIE3, ETIFR,TOV3, ICR3, ETIMSK,TICIE3, ETIFR,ICF3, TCCR3B,ICES3, InputCapture3)
};
const uint8_t NUMBER_OF_TIMERS =  (sizeof(pgm_Timers)/sizeof(Timer));
#define TIMER0 &pgm_Timers[0]
#define TIMER1 &pgm_Timers[1]
#define TIMER2 &pgm_Timers[2]
#define TIMER3 &pgm_Timers[3]
// -------------- End of timer definitions ------------------------------------------------------

// -------------- Define the UARTs --------------------------------------------------------------
#include "../uart.h"
// -- Create receive buffers
#ifdef UART_RX_BUFFER_SIZE
# ifndef UART0_RX_BUFFER_SIZE
   // Use default value
#  define UART0_RX_BUFFER_SIZE  UART_RX_BUFFER_SIZE
# endif
# ifndef UART1_RX_BUFFER_SIZE
   // Use default value
#  define UART1_RX_BUFFER_SIZE  UART_RX_BUFFER_SIZE
# endif
#endif


#ifdef UART0_RX_BUFFER_SIZE
  unsigned char rx0Buf[UART0_RX_BUFFER_SIZE];
  cBuffer rx0Buffer = MAKE_BUFFER(rx0Buf);
# define rx0B &rx0Buffer
#else
# define rx0B null
#endif

#ifdef UART1_RX_BUFFER_SIZE
  unsigned char rx1Buf[UART1_RX_BUFFER_SIZE];
  cBuffer rx1Buffer = MAKE_BUFFER(rx1Buf);
# define rx1B &rx1Buffer
#else
# define rx1B null
#endif

// -- Create transmit buffers
#ifdef UART_TX_BUFFER_SIZE
# ifndef UART0_TX_BUFFER_SIZE
   // Use default value
#  define UART0_TX_BUFFER_SIZE  UART_TX_BUFFER_SIZE
# endif
# ifndef UART1_TX_BUFFER_SIZE
   // Use default value
#  define UART1_TX_BUFFER_SIZE  UART_TX_BUFFER_SIZE
# endif
#endif


#ifdef UART0_TX_BUFFER_SIZE
  unsigned char tx0Buf[UART0_TX_BUFFER_SIZE];
  cBuffer tx0Buffer = MAKE_BUFFER(tx0Buf);
# define tx0B &tx0Buffer
#else
# define tx0B null
#endif

#ifdef UART1_TX_BUFFER_SIZE
  unsigned char tx1Buf[UART1_TX_BUFFER_SIZE];
  cBuffer tx1Buffer = MAKE_BUFFER(tx1Buf);
# define tx1B &tx1Buffer
#else
# define tx1B null
#endif

// -- Define the pin used for the SPI clock, if supported, for each uart
#define UART_SPI_CLOCK0 null
#define UART_SPI_CLOCK1 null


#define _NUM_UARTS 2
const uint8_t NUM_UARTS = _NUM_UARTS;

HW_UART Uarts[] = {
	MAKE_UART_BUFFERED(rx0B,tx0B,UCSR0A,UCSR0B,UBRR0L,UBRR0H,UDR0,UART_SPI_CLOCK0,2,E0,E1,&uart0GetByte,&uart0SendByte),
	MAKE_UART_BUFFERED(rx1B,tx1B,UCSR1A,UCSR1B,UBRR1L,UBRR1H,UDR1,UART_SPI_CLOCK1,2,D2,D3,&uart1GetByte,&uart1SendByte)
};

#define UART0 &Uarts[0]
#define UART1 &Uarts[1]
// -------------- End of UART definitions -------------------------------------------------------

// -------------- Start of ADC channel definitions ----------------------------------------------
#define ADC0 ADC_NUMBER_TO_CHANNEL(0)
#define ADC1 ADC_NUMBER_TO_CHANNEL(1)
#define ADC2 ADC_NUMBER_TO_CHANNEL(2)
#define ADC3 ADC_NUMBER_TO_CHANNEL(3)
#define ADC4 ADC_NUMBER_TO_CHANNEL(4)
#define ADC5 ADC_NUMBER_TO_CHANNEL(5)
#define ADC6 ADC_NUMBER_TO_CHANNEL(6)
#define ADC7 ADC_NUMBER_TO_CHANNEL(7)
const uint8_t NUM_ADC_CHANNELS = 8;
// -------------- End of ADC channel definitions ------------------------------------------------

// -------------- Define which IOPin is used by the pin change interrupts --------------------------------
// -------------- End of pin change definitions - ------------------------------------------------

#endif
