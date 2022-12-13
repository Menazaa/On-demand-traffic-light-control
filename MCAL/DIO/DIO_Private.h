/*
 * DIO_Private.h
 *
 *  Created on: Dec 12, 2022
 *      Author: moham
 */

#ifndef MCAL_DIO_DIO_PRIVATE_H_
#define MCAL_DIO_DIO_PRIVATE_H_


// PORT DATA TYPE
typedef struct{
	u8	PIN;	// PIN REGISTER
	u8	DDR;	// DATA DIRECTION REGISTER
	u8	PORT;	// PORT REGISTER
}DIO_t;

// DIO PORTS REGISTERS DEFINATION

volatile DIO_t*   const PORTA_REG       = (DIO_t*)0x39;
volatile DIO_t*   const PORTB_REG       = (DIO_t*)0x36;
volatile DIO_t*   const PORTC_REG       = (DIO_t*)0x33;
volatile DIO_t*   const PORTD_REG       = (DIO_t*)0x30;





#endif /* MCAL_DIO_DIO_PRIVATE_H_ */
