/*
 * DIO.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed Menazaa
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Private.h"
#include "DIO_Config.h"
#include "DIO_Interface.h"


void	DIO_voidSetPortDirection(DIO_PORT_ID PortID, DIO_PORT_DIRECTION PortDirection){

	if(PortDirection == INPUT){

		switch(PortID){

		case PORTA:	PORTA_REG->DDR = 0x00; break;
		case PORTB:	PORTB_REG->DDR = 0x00; break;
		case PORTC:	PORTC_REG->DDR = 0x00; break;
		case PORTD:	PORTD_REG->DDR = 0x00; break;

		}

	}else if(PortDirection == OUTPUT){

		switch(PortID){

		case PORTA:	PORTA_REG->DDR = 0xFF; break;
		case PORTB:	PORTB_REG->DDR = 0xFF; break;
		case PORTC:	PORTC_REG->DDR = 0xFF; break;
		case PORTD:	PORTD_REG->DDR = 0xFF; break;

		}

	}


}
void	DIO_voidSetPinDirection(DIO_PORT_ID PortID, DIO_PORT_DIRECTION PortDirection, DIO_PIN_NUMBER Pin){

	if(PortDirection == INPUT){

			switch(PortID){

			case PORTA:	PORTA_REG->DDR &= ~(1<<Pin); break;
			case PORTB:	PORTB_REG->DDR &= ~(1<<Pin); break;
			case PORTC:	PORTC_REG->DDR &= ~(1<<Pin); break;
			case PORTD:	PORTD_REG->DDR &= ~(1<<Pin); break;

			}

		}else if(PortDirection == OUTPUT){

			switch(PortID){

			case PORTA:	PORTA_REG->DDR |= (1<<Pin); break;
			case PORTB:	PORTB_REG->DDR |= (1<<Pin); break;
			case PORTC:	PORTC_REG->DDR |= (1<<Pin); break;
			case PORTD:	PORTD_REG->DDR |= (1<<Pin); break;

			}

		}


}


