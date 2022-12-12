/*
 * DIO.h
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed Menazaa
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_



// FUNCTIONS PROTOTYPES
void	DIO_voidSetPortDirection(PORT_NAME PortName, PORT_DIRECTION PortDirection);
void	DIO_voidSetPinDirection(PORT_NAME PortName, PORT_DIRECTION PortDirection, PIN_NUMBER Pin);
u8		DIO_u8GetPortValue(PORT_NAME PortName);



#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
