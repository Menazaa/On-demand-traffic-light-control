/*
 * INTERRUPT.h
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed Menazaa
 */

#ifndef MCAL_INTERRUPT_INTERRUPT_INTERFACE_H_
#define MCAL_INTERRUPT_INTERRUPT_INTERFACE_H_


typedef enum{
	LOW_LEVEL,
	LOGICAL_CHANGE,
	FALLING_EDGE,
	RISING_EDGE
}EXTI_MODE_t;

typedef enum{
	FALLING_EDGE,
	RISING_EDGE
}EXTI_INT2_MODE_t;

typedef enum{
	DISABLE,
	ENABLE
}EXTI_CONTROL_STATUS;

/*	Global interrupt initialization function	*/
void	INTERRUPT_voidGlobalINTInit(void);

/*	External interrupt initialization function	*/
void	INTERRUPT_voidEXTIInit(void);

/*	External interrupt enable function	*/
void	INTERRUPT_voidEXTIEnable(void);

/*	External interrupt disable function	*/
void	INTERRUPT_voidEXTIDisable(void);

/*	External interrupt callback function	*/
void	INTERRUPT_voidEXTICallback(void);



#endif /* MCAL_INTERRUPT_INTERRUPT_INTERFACE_H_ */
