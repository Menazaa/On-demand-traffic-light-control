/*
 * DIO.h
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed Menazaa
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_


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

#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
