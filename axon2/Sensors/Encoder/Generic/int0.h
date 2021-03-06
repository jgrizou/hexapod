/*
 * $Id: int0.h,v 1.2 2011/02/21 20:27:44 clivewebster Exp $
 * Revision History
 * ================
 * $Log: int0.h,v $
 * Revision 1.2  2011/02/21 20:27:44  clivewebster
 * Added ATMega1284P
 *
 * Revision 1.1  2010/08/10 22:48:51  clivewebster
 * Created
 *
 * ================
 *
 * Copyright (C) 2010 Clive Webster (webbot@webbot.org.uk)
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 *        File: int0.h
 *  Created on: 2 Aug 2010
 *      Author: Clive Webster
 *
 *  Define constants for INT0
 */

#ifndef INT0_H_
#define INT0_H_

#ifdef BUILDING_LIBRARY


// Include the device definitions
#include <avr/io.h>


#if defined (__AVR_ATmega640__) || defined (__AVR_ATmega1280__) || defined (__AVR_ATmega2560__) || defined (__AVR_ATmega2561__) || defined (__AVR_ATmega128__) || defined (__AVR_ATmega128RFA1__)
	// Uses PORTD0 as the INT0 pin
	#define DDR_INT0	  DDRD
	#define PORT_INT0  PORTD
	#define PIN_INT0   PD0
    #define READ_INT0  PIND

	// The Interrupt Sense Control register
	#define ISC_INT0   EICRA
	// The low bit in INT_ISC
	#define ISCL_INT0  ISC00
	// The high bit in INT_ISC
	#define ISCH_INT0  ISC01

	// The interrupt end register and bit
	#define ENABLE_PORT_INT0	EIMSK
	#define ENABLE_BIT_INT0	INT0

	// The interrupt vector
	#define VECT_INT0	INT0_vect
#elif defined (__AVR_ATmega644__)
	// Uses PORTD2 as the INT0 pin
	#define DDR_INT0	  DDRD
	#define PORT_INT0  PORTD
	#define PIN_INT0   PD2
    #define READ_INT0  PIND

// The Interrupt Sense Control register
	#define ISC_INT0   EICRA
	// The low bit in INT_ISC
	#define ISCL_INT0  ISC00
	// The high bit in INT_ISC
	#define ISCH_INT0  ISC01
	// The interrupt end register and bit
	#define ENABLE_PORT_INT0	EIMSK
	#define ENABLE_BIT_INT0	INT0

	// The interrupt vector
	#define VECT_INT0	INT0_vect


#elif defined(__AVR_ATmega8__) || defined (__AVR_ATmega32__)
	// Uses PORTD2 as the INT0 pin
	#define DDR_INT0   DDRD
	#define PORT_INT0  PORTD
	#define PIN_INT0   PD2
    #define READ_INT0  PIND

	// The Interrupt Sense Control register
	#define ISC_INT0   MCUCR
	// The low bit in INT_ISC
	#define ISCL_INT0  ISC00
	// The high bit in INT_ISC
	#define ISCH_INT0  ISC01

	// The interrupt end register and bit
	#define ENABLE_PORT_INT0	GICR
	#define ENABLE_BIT_INT0		INT0

	// The interrupt vector
	#define VECT_INT0	INT0_vect
#elif defined(__AVR_ATmega168__) || defined (__AVR_ATmega328P__)  || defined (__AVR_ATmega1284P__)
	// Uses PORTD2 as the INT0 pin
	#define DDR_INT0	  DDRD
	#define PORT_INT0  PORTD
#	ifdef PD2
	#define PIN_INT0   PD2
# 	else
	#define PIN_INT0   PORTD2
#	endif
    #define READ_INT0  PIND

// The Interrupt Sense Control register
	#define ISC_INT0   EICRA
	// The low bit in INT_ISC
	#define ISCL_INT0  ISC00
	// The high bit in INT_ISC
	#define ISCH_INT0  ISC01

	// The interrupt end register and bit
	#define ENABLE_PORT_INT0	EIMSK
	#define ENABLE_BIT_INT0	INT0

	// The interrupt vector
	#define VECT_INT0	INT0_vect
#else
#	error Processor not defined for INT0
#endif

#endif
#endif /* INT0_H_ */
