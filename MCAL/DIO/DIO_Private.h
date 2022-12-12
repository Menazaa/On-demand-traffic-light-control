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
}DIO_PORT_ID;

typedef enum{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7,
}DIO_PIN_NUMBER;

typedef enum{
	INPUT,
	OUTPUT
}DIO_PORT_DIRECTION;

typedef enum{
	LOW,
	HIGH
}DIO_PIN_STATE;



#endif /* MCAL_DIO_DIO_PRIVATE_H_ */
