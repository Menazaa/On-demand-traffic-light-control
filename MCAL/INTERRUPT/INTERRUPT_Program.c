/*
 * INTERRUPT.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed Menazaa
 */

#include	"../../LIB/STD_TYPES.h"
#include	"../../LIB/BIT_MATH.h"
#include	"INTERRUPT_Private.h"
#include	"INTERRUPT_Interface.h"

/*	Global interrupt Enable function	*/
void	INTERRUPT_voidGlobalINTEnable(void){
		SET_BIT(REG_SREG,BIT_GI);
}

/*	Global interrupt Disable function	*/
void	INTERRUPT_voidGlobalINTDisable(void){
		 CLR_BIT(REG_SREG,BIT_GI);
}

/*	External interrupt initialization function	*/
void	INTERRUPT_voidEXTIInit(EXTI_NUM	INT_NUM, EXTI_MODE_t INT_MODE, EXTI_CONTROL_STATUS INT_STATE){

	if(INT_STATE == ENABLE){
	//	Enable The External Interrupt
		switch(INT_NUM){

			case INT0:SET_BIT(REG_GICR, BIT_INT0_GICR);break;
			case INT1:SET_BIT(REG_GICR, BIT_INT1_GICR);break;
			case INT2:SET_BIT(REG_GICR, BIT_INT2_GICR);break;

			}
	}else if(INT_STATE == DISABLE){

		//	Disable The External Interrupt
		switch(INT_NUM){

			case INT0:CLR_BIT(REG_GICR, BIT_INT0_GICR);break;
			case INT1:CLR_BIT(REG_GICR, BIT_INT1_GICR);break;
			case INT2:CLR_BIT(REG_GICR, BIT_INT2_GICR);break;

			}
	}
//	Select The External Interrupt Mode
	switch(INT_NUM){

			case INT0:
				switch(INT_MODE){
					case LOW_LEVEL:			CLR_BIT(REG_MCUCR, 0);
											CLR_BIT(REG_MCUCR, 1);
					break;
					case LOGICAL_CHANGE:	SET_BIT(REG_MCUCR, 0);
											CLR_BIT(REG_MCUCR, 1);
					break;
					case FALLING_EDGE:		CLR_BIT(REG_MCUCR, 0);
											SET_BIT(REG_MCUCR, 1);
					break;
					case RISING_EDGE:		SET_BIT(REG_MCUCR, 0);
											SET_BIT(REG_MCUCR, 1);
					break;
				}
			break;
			case INT1:
				switch(INT_MODE){
					case LOW_LEVEL:			CLR_BIT(REG_MCUCR, 2);
											CLR_BIT(REG_MCUCR, 3);
					break;
					case LOGICAL_CHANGE:	SET_BIT(REG_MCUCR, 2);
											CLR_BIT(REG_MCUCR, 3);
					break;
					case FALLING_EDGE:		CLR_BIT(REG_MCUCR, 2);
											SET_BIT(REG_MCUCR, 3);
					break;
					case RISING_EDGE:		SET_BIT(REG_MCUCR, 2);
											SET_BIT(REG_MCUCR, 3);
					break;
				}
			break;

			case INT2:
				switch(INT_MODE){

					case FALLING_EDGE:		CLR_BIT(REG_MCUCSR, 6);

					break;
					case RISING_EDGE:		SET_BIT(REG_MCUCSR, 6);

					break;
				}
			break;

		}


//	Clear The External Interrupt Status Flag
	switch(INT_NUM){

		case INT0:SET_BIT(REG_GICR, BIT_INT0_GICR);break;
		case INT1:SET_BIT(REG_GICR, BIT_INT1_GICR);break;
		case INT2:SET_BIT(REG_GICR, BIT_INT2_GICR);break;

			}

}

/*	External interrupt enable function	*/
void	INTERRUPT_voidEXTIEnable(EXTI_NUM	INT_NUM){

	switch(INT_NUM){

		case INT0:SET_BIT(REG_GICR, BIT_INT0_GICR);break;
		case INT1:SET_BIT(REG_GICR, BIT_INT1_GICR);break;
		case INT2:SET_BIT(REG_GICR, BIT_INT2_GICR);break;

		}

}


/*	External interrupt disable function	*/
void	INTERRUPT_voidEXTIDisable(EXTI_NUM	INT_NUM){

	switch(INT_NUM){

		case INT0:CLR_BIT(REG_GICR, BIT_INT0_GICR);break;
		case INT1:CLR_BIT(REG_GICR, BIT_INT1_GICR);break;
		case INT2:CLR_BIT(REG_GICR, BIT_INT2_GICR);break;

		}

}


/*	External interrupt callback function	*/
void	INTERRUPT_voidEXTICallback(EXTI_NUM	INT_NUM, void (*CopyFuncPtr) (void))
{
	switch(INT_NUM){

		case INT0:CallBackPtrINT0 = CopyFuncPtr;break;
		case INT1:CallBackPtrINT1 = CopyFuncPtr;break;
		case INT2:CallBackPtrINT2 = CopyFuncPtr;break;

		}

}

/*	Writes to INT0 in interrupt vector table*/
void __vector_1(void) __attribute__((signal,used));
void __vector_1(void) {				// The compiler Writes to the address of INT0 in interrupt vector table
	if(CallBackPtrINT0 != NULL){
	CallBackPtrINT0();			//you can see that __vector_1 is placed at byte address 4, which corresponds to the word address 2 from the data sheet.
	}
}

/*	Writes to INT1 in interrupt vector table*/
void __vector_2(void) __attribute__((signal,used));
void __vector_2(void) {
	if(CallBackPtrINT1 != NULL){
	CallBackPtrINT1();
	}
}

/*	Writes to INT1 in interrupt vector table*/
void __vector_3(void) __attribute__((signal,used));
void __vector_3(void) {
	if(CallBackPtrINT2 != NULL){
	CallBackPtrINT2();
	}
}
