/*
 * $Id: $
 * Revision History
 * ================
 * $Log: $
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
 *        File: i2cSendWithPrefix.c
 *  Created on: 31 Dec 2010
 *      Author: Clive Webster
 */

#include "../i2cBus.h"
#include "../errors.h"

boolean i2cMasterSendWithPrefix(const I2C_DEVICE* device, size_t prefixLen, const uint8_t* prefix, size_t length, const uint8_t* data){
	boolean ack = FALSE;
	if(device){
		const I2C_ABSTRACT_BUS* i2c = device->bus;
		ack = i2cStart(i2c,device->addr,TRUE);
		if(ack){
			// Put the first block of data
			while(ack && prefixLen--){
				ack &= i2cPut(i2c,*prefix++);
			}

			// send the second block of data
			while(ack && length--){
				ack &= i2cPut(i2c,*data++);
			}
		}
		i2cStop(i2c);
	}
	return ack;

}


