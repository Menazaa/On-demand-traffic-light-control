/*
 * DIO.h
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed Menazaa
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_


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


// FUNCTIONS PROTOTYPES

// DIRECTION FUNCTIONS
void	DIO_voidSetPortDirection(DIO_PORT_ID PortID, DIO_PORT_DIRECTION PortDirection);
void	DIO_voidSetPinDirection(DIO_PORT_ID PortID, DIO_PORT_DIRECTION PortDirection, DIO_PIN_NUMBER Pin);
// SET FUNCTIONS
void	DIO_voidSetPortValue(DIO_PORT_ID PortID, u8 Value);
void	DIO_voidSetPindValue(DIO_PORT_ID PortID, DIO_PIN_STATE State, DIO_PIN_NUMBER Pin);
// GET FUNCTIONS
u8		DIO_u8GetPortValue(DIO_PORT_ID PortID);
u8		DIO_u8GetPinValue(DIO_PORT_ID PortID, DIO_PIN_NUMBER Pin);

// TOGGLE FUNCTIONS
void	DIO_voidTogglePortValue(DIO_PORT_ID PortID, u8 Value);
void	DIO_voidTogglePindValue(DIO_PORT_ID PortID, DIO_PIN_NUMBER Pin);

// ///////////////////////////////////////////////////

/*		Add	Pull-up enable functions				*/

//  ///////////////////////////////////////////////////



#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
