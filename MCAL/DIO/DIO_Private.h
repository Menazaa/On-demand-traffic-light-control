/*
 * DIO_Private.h
 *
 *  Created on: Dec 12, 2022
 *      Author: moham
 */

#ifndef MCAL_DIO_DIO_PRIVATE_H_
#define MCAL_DIO_DIO_PRIVATE_H_

// PORTx Definitions
typedef enum{
	PORTA,
	PORTB,
	PORTC,
	PORTD
}PORT_NAME;

typedef enum{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7,
}PIN_NUMBER;

typedef enum{
	INPUT,
	OUTPUT
}PORT_DIRECTION;



#endif /* MCAL_DIO_DIO_PRIVATE_H_ */
