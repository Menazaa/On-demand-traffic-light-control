/*
 * APP.c
 *
 *  Created on: Dec 13, 2022
 *      Author: moham
 */

#include "../LIB/STD_TYPES.h"

#include "../MCAL/DIO/DIO_Interface.h"

#include "APP.h"



void LED(void){
	DIO_voidSetPortDirection(PORTA, OUTPUT);
	DIO_voidSetPortValue(PORTA, 0xFF);
}
