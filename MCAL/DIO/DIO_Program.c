/*
 * DIO.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed Menazaa
 */


#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "DIO_Private.h"
#include "DIO_Config.h"
#include "DIO_Interface.h"




// DIRECTION FUNCTIONS
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


			case PORTA:	CLR_BIT(PORTA_REG->DDR, Pin); break;
			case PORTB:	CLR_BIT(PORTB_REG->DDR, Pin); break;
			case PORTC:	CLR_BIT(PORTC_REG->DDR, Pin); break;
			case PORTD:	CLR_BIT(PORTD_REG->DDR, Pin); break;


			}

		}else if(PortDirection == OUTPUT){

			switch(PortID){

			case PORTA:	SET_BIT(PORTA_REG->DDR,Pin); break;
			case PORTB:	SET_BIT(PORTB_REG->DDR,Pin); break;
			case PORTC:	SET_BIT(PORTC_REG->DDR,Pin); break;
			case PORTD:	SET_BIT(PORTD_REG->DDR,Pin); break;

			}

		}


}


// SET FUNCTIONS
void	DIO_voidSetPortValue(DIO_PORT_ID PortID, u8 Value){
	switch(PortID){

		case PORTA:	PORTA_REG->PORT = Value; break;
		case PORTB:	PORTB_REG->PORT = Value; break;
		case PORTC:	PORTC_REG->PORT = Value; break;
		case PORTD:	PORTD_REG->PORT = Value; break;

		}
}
void	DIO_voidSetPindValue(DIO_PORT_ID PortID, DIO_PIN_STATE State, DIO_PIN_NUMBER Pin){

	if(State == HIGH){
		switch(PortID){

		case PORTA:	SET_BIT(PORTA_REG->PORT,Pin); break;
		case PORTB:	SET_BIT(PORTB_REG->PORT,Pin); break;
		case PORTC:	SET_BIT(PORTC_REG->PORT,Pin); break;
		case PORTD:	SET_BIT(PORTD_REG->PORT,Pin); break;


					}
	}else if(State == LOW){
		switch(PortID){

		case PORTA:	CLR_BIT(PORTA_REG->PORT, Pin); break;
		case PORTB:	CLR_BIT(PORTB_REG->PORT, Pin); break;
		case PORTC:	CLR_BIT(PORTC_REG->PORT, Pin); break;
		case PORTD:	CLR_BIT(PORTD_REG->PORT, Pin); break;


					}
	}

}


// GET FUNCTIONS
u8		DIO_u8GetPortValue(DIO_PORT_ID PortID){

	u8 tempValue = 0;
	switch(PortID){

		case PORTA:	tempValue =  PORTA_REG->PIN; break;
		case PORTB:	tempValue =  PORTB_REG->PIN; break;
		case PORTC:	tempValue =  PORTC_REG->PIN; break;
		case PORTD:	tempValue =  PORTD_REG->PIN; break;

				}
	return tempValue;


}
u8		DIO_u8GetPinValue(DIO_PORT_ID PortID, DIO_PIN_NUMBER Pin){

	u8 tempValue = 0;
		switch(PortID){

			case PORTA:	tempValue =  PORTA_REG->PIN; break;
			case PORTB:	tempValue =  PORTB_REG->PIN; break;
			case PORTC:	tempValue =  PORTC_REG->PIN; break;
			case PORTD:	tempValue =  PORTD_REG->PIN; break;

					}
		return GET_BIT(tempValue, Pin);

}


// TOGGLE FUNCTIONS
void	DIO_voidTogglePortValue(DIO_PORT_ID PortID, u8 Value){

	switch(PortID){

			case PORTA:	PORTA_REG->PORT ^= 0xFF; break;
			case PORTB:	PORTB_REG->PORT ^= 0xFF; break;
			case PORTC:	PORTC_REG->PORT ^= 0xFF; break;
			case PORTD:	PORTD_REG->PORT ^= 0xFF; break;

			}

}
void	DIO_voidTogglePindValue(DIO_PORT_ID PortID, DIO_PIN_NUMBER Pin){

	switch(PortID){

		case PORTA:	TOG_BIT(PORTA_REG->PORT, Pin); break;
		case PORTB:	TOG_BIT(PORTB_REG->PORT, Pin); break;
		case PORTC:	TOG_BIT(PORTC_REG->PORT, Pin); break;
		case PORTD:	TOG_BIT(PORTD_REG->PORT, Pin); break;
	}
}
