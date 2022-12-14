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
	DISABLE,
	ENABLE
}EXTI_CONTROL_STATUS;

typedef enum{
	INT0,
	INT1,
	INT2
}EXTI_NUM;


/*	Global interrupt Enable function	*/
void	INTERRUPT_voidGlobalINTEnable(void);

/*	Global interrupt Disable function	*/
void	INTERRUPT_voidGlobalINTDisable(void);

/*	External interrupt initialization function	*/
void	INTERRUPT_voidEXTIInit(EXTI_NUM	INT_NUM, EXTI_MODE_t INT_MODE, EXTI_CONTROL_STATUS INT_STATE);

/*	External interrupt enable function	*/
void	INTERRUPT_voidEXTIEnable(EXTI_NUM	INT_NUM);

/*	External interrupt disable function	*/
void	INTERRUPT_voidEXTIDisable(EXTI_NUM	INT_NUM);

/*	External interrupt callback function	*/
void	INTERRUPT_voidEXTICallback(void);



#endif /* MCAL_INTERRUPT_INTERRUPT_INTERFACE_H_ */
