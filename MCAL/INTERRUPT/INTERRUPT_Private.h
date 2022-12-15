/*
 * INTERRUPT_Private.h
 *
 *  Created on: Dec 14, 2022
 *      Author: Mohamed Menazaa
 */

#ifndef MCAL_INTERRUPT_INTERRUPT_PRIVATE_H_
#define MCAL_INTERRUPT_INTERRUPT_PRIVATE_H_


#define		REG_SREG	(*((volatile u8*) 0x5F))	// CPU status register bit 7 enable global interrupt
#define		REG_MCUCR	(*((volatile u8*) 0x55))	// The MCU control register
#define		REG_MCUCSR	(*((volatile u8*) 0x54))	// The MCU Control and Status Register
#define		REG_GICR	(*((volatile u8*) 0x5B))	// General Interrupt Control Register
#define		REG_GIFR	(*((volatile u8*) 0x5A))	// General Interrupt Flag Register

#define		BIT_GI				7
#define		BIT_INT0_GICR		6
#define		BIT_INT1_GICR		7
#define		BIT_INT2_GICR		5


/*	Pointer to ISR	*/
void (*CallBackPtrINT0) (void) = NULL;
void (*CallBackPtrINT1) (void) = NULL;
void (*CallBackPtrINT2) (void) = NULL;

#endif /* MCAL_INTERRUPT_INTERRUPT_PRIVATE_H_ */
