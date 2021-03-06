/*
 * $Id: i2cBus.h,v 1.2 2010/10/01 19:55:03 clivewebster Exp $
 * Revision History
 * ================
 * $Log: i2cBus.h,v $
 * Revision 1.2  2010/10/01 19:55:03  clivewebster
 * Setting the bit rate only applies to a hardware master
 *
 * Revision 1.1  2010/10/01 15:28:11  clivewebster
 * Refactored - merge master and slave into i2cBus.h
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
 *        File: i2cBus.h
 *  Created on: 24 Sep 2010
 *      Author: Clive Webster
 *
 *  Define an abstract I2c bus and hardware and software implementations
 */

#ifndef I2CBUS_H_
#define I2CBUS_H_

#include "libdefs.h"
#include "_i2c_common.h"


/* ================= MASTER FUNCTIONS ========================== */

#include "iopin.h"

#ifdef __cplusplus
/* ===================== C Code ===============================================*/
extern "C" {
#endif

/*-------------------------------------------------------------
   Each I2C device should contain a structure of this type
   and it should be called 'i2cInfo'
-------------------------------------------------------------*/
struct s_i2c_abstract_bus;

typedef struct s_i2c_device {
	struct s_i2c_abstract_bus* bus;		// The bus it is connected to
	const uint8_t			   addr;	// The unique address of the device on the bus
} I2C_DEVICE;
#define MAKE_I2C_DEVICE(addr) {null,(addr) & 0xfe}

// A list of I2C_DEVICEs
typedef I2C_DEVICE* /*PROGMEM*/  I2C_DEVICE_LIST;

// --------------- Define a generic i2c device -------------------
// Useful if your I2C sensor is not in WebbotLib
typedef struct s_generic_i2c_device{
	I2C_DEVICE	  i2cInfo;
} GENERIC_I2C_DEVICE;
#define MAKE_GENERIC_I2C_DEVICE(i2cAddr) { \
	MAKE_I2C_DEVICE(i2cAddr) \
	}

// --------------- Define an abstract bus -------------------
typedef struct s_i2c_abstract_bus{
	const struct /*PROGMEM*/ c_i2c*	sclass;	// The type of implementation
	const I2C_DEVICE_LIST* const devices;
	const uint8_t	numDevices;			// The number of devices
	boolean			initialised;		// Has the bus been initialised
} I2C_ABSTRACT_BUS;
#define _MAKE_I2C_ABSTRACT_BUS(sclass,devices) { \
	sclass, \
	devices, \
	(uint8_t)(sizeof(devices)/sizeof(I2C_DEVICE*)),\
	FALSE}

// --------------- Define a hardware bus -------------------
typedef struct s_i2c_hardware_bus{
	I2C_ABSTRACT_BUS _bus_;				// Include data common for ALL i2c buses
} I2C_HARDWARE_BUS;
#define MAKE_I2C_HARDWARE_BUS(devices) {_MAKE_I2C_ABSTRACT_BUS(&c_hw_i2c,devices) }

// --------------- Define a software bus -------------------
typedef struct s_i2c_software_bus{
	I2C_ABSTRACT_BUS _bus_;				// Include data common for ALL i2c buses
	const IOPin* scl;					// The SCL pin
	const IOPin* sda;					// The SDA pin
} I2C_SOFTWARE_BUS;
#define MAKE_I2C_SOFTWARE_BUS(devices,scl,sda) {_MAKE_I2C_ABSTRACT_BUS(&c_sw_i2c,devices),scl,sda }

//---------------- Define virtual methods for any bus ---------

typedef struct /*PROGMEM*/ c_i2c{
	void     (*init)  (I2C_ABSTRACT_BUS* i2c);						 // Initialise the bus
	boolean  (*start) (const I2C_ABSTRACT_BUS* i2c,uint8_t addr, boolean writeMode); // Start using the bus
	void 	 (*stop)  (const I2C_ABSTRACT_BUS* i2c);				 // Stop using the bus
	uint8_t  (*get)   (const I2C_ABSTRACT_BUS* i2c, boolean isLastByte); // get a byte
	boolean  (*put)   (const I2C_ABSTRACT_BUS* i2c, uint8_t b);			 // put a byte
	void 	 (*speed) (const I2C_ABSTRACT_BUS* i2c,uint16_t bitrateKHz);
} I2C_CLASS;
#define MAKE_I2C_CLASS(init,start,stop,get,put,speed) {init,start,stop,get,put,speed }

extern const I2C_CLASS c_hw_i2c;	// The hardware implementation defined elsewhere
extern const I2C_CLASS c_sw_i2c;	// The software implementation defined elsewhere

/*-------------------------------------------------------------
   Things you can do with an abstract I2C bus
-------------------------------------------------------------*/
void 	i2cAbstractBusInit(I2C_ABSTRACT_BUS* bus);
// Set the bit rate in kHz. Default is 100kHz
void 	i2cAbstractSetBitrate(I2C_ABSTRACT_BUS* bus,uint16_t bitrateKHz);
boolean  i2cStart(const I2C_ABSTRACT_BUS* i2c, uint8_t addr, boolean writeMode);
void 	i2cStop(const I2C_ABSTRACT_BUS* i2c);
uint8_t i2cGet(const I2C_ABSTRACT_BUS* i2c, boolean isLastByte);
boolean i2cPut(const I2C_ABSTRACT_BUS* i2c, uint8_t b);
/*-------------------------------------------------------------
   Things you can do with an I2C device
-------------------------------------------------------------*/

boolean i2cMasterReceive(const I2C_DEVICE* device, size_t length, uint8_t *data);
boolean i2cMasterSend(const I2C_DEVICE* device, size_t length, const uint8_t *data);
boolean i2cMasterTransfer(const I2C_DEVICE* device, size_t wlen, const uint8_t *wdata, size_t rlen, uint8_t * rdata);
// Same as i2cMasterSend but appends two blocks of data. Useful if you need to prefix
// a message with some other data
boolean i2cMasterSendWithPrefix(const I2C_DEVICE* device, size_t prefixLen, const uint8_t* prefix, size_t length, const uint8_t* data);
boolean i2cMasterWriteRegisters(const I2C_DEVICE* device, uint8_t startReg, size_t numBytes, const uint8_t* data);
boolean i2cMasterReadRegisters(const I2C_DEVICE* device, uint8_t startReg, size_t numBytes, uint8_t* response);
boolean i2cMasterWriteRegister(const I2C_DEVICE* device, uint8_t reg, uint8_t value);


/*-------------------------------------------------------------
   Things you can do with a concrete I2C bus
-------------------------------------------------------------*/
// Convert a concrete I2C bus into an I2C_ABSTRACT_BUS
#define i2cGetAbstractBus(bus) &((bus)->_bus_)

// Initialise the bus
#define i2cBusInit(bus) 			i2cAbstractBusInit(i2cGetAbstractBus(bus))
#define i2cBusSetBitRate(bus,khz) 	i2cAbstractSetBitrate(i2cGetAbstractBus(bus),khz)

/* ================= SLAVE FUNCTIONS ========================== */
#include "buffer.h"
void i2cSlaveInit(uint8_t deviceAddr, boolean generalCall, cBuffer* rx, cBuffer* tx);
void i2cSlaveSetReceiveHandler(void (*i2cSlaveRx_func)(cBuffer* data));
void i2cSlaveSetTransmitHandler(void (*i2cSlaveTx_func)(cBuffer* data));

#ifdef __cplusplus
}
// ==================== C++ code ===============================

class I2cSlave {
public:
	I2cSlave(){
		i2cSlaveSetReceiveHandler(&receiveHandler);
		i2cSlaveSetTransmitHandler(&transmitHandler);
	}

	// These must be created in the users C+ code
	static void receiveHandler(cBuffer* rx);
	static void transmitHandler(cBuffer* rx);
};

class I2cBus {
public:
	I2cBus(I2C_ABSTRACT_BUS* cstr){
		m_cstr = cstr;
	}

	void setBitRate(uint16_t bitrateKHz) const{
		i2cAbstractSetBitrate(m_cstr ,bitrateKHz);
	}

	boolean start(uint8_t addr, boolean writeMode) const{
		return i2cStart(m_cstr, addr, writeMode);
	}

	void stop(void) const{
		i2cStop(m_cstr);
	}

	uint8_t get(boolean isLastByte)const{
		return i2cGet(m_cstr, isLastByte);
	}

	boolean put(uint8_t b) const{
		return i2cPut(m_cstr, b);
	}

private:
	I2C_ABSTRACT_BUS* m_cstr;
};

class I2cBusHW : public I2cBus {
public:
	I2cBusHW(I2C_HARDWARE_BUS* cstr) : I2cBus(i2cGetAbstractBus(cstr)){
	}
};

class I2cBusSW : public I2cBus {
public:
	I2cBusSW(I2C_SOFTWARE_BUS* cstr) : I2cBus(i2cGetAbstractBus(cstr)){
	}
};

class I2cDevice {
public:
	I2cDevice(I2C_DEVICE* cstr){
		m_cstr = cstr;
	}

	boolean readRegisters(uint8_t startReg, size_t responseLen, uint8_t* response) const{
		return i2cMasterReadRegisters(m_cstr, startReg, responseLen, response);
	}

	boolean receive(size_t responseLen, uint8_t *response)const{
		return i2cMasterReceive(m_cstr, responseLen, response);
	}


	boolean writeRegisters(uint8_t startReg, size_t writeLen, const uint8_t* writeData) const{
		return i2cMasterWriteRegisters(m_cstr, startReg, writeLen, writeData);
	}

	boolean writeRegister(uint8_t reg, uint8_t value) const{
		return i2cMasterWriteRegister(m_cstr, reg, value);
	}

	boolean send(size_t writeLen, const uint8_t *writeData)const{
		return i2cMasterSend(m_cstr, writeLen, writeData);
	}
	boolean send(size_t prefixLen, const uint8_t* prefixData, size_t writeLen, const uint8_t* writeData)const{
		return i2cMasterSendWithPrefix(m_cstr, prefixLen, prefixData, writeLen, writeData);
	}

	boolean transfer(size_t writeLen, const uint8_t *writeData, size_t responseLen, uint8_t * response) const{
		return i2cMasterTransfer(m_cstr, writeLen, writeData, responseLen, response);
	}



private:
	I2C_DEVICE* m_cstr;
};

class I2cGenericDevice : public I2cDevice {
public:
	I2cGenericDevice(GENERIC_I2C_DEVICE* cstr) : I2cDevice(&(cstr->i2cInfo)){
	}
};
#endif

#endif /* I2CBUS_H_ */
