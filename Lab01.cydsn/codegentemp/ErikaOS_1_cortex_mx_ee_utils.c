/* ###*B*###
 * ERIKA Enterprise - a tiny RTOS for small microcontrollers
 *
 * Copyright (C) 2002-2011  Evidence Srl
 *
 * This file is part of ERIKA Enterprise.
 *
 * ERIKA Enterprise is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation, 
 * (with a special exception described below).
 *
 * Linking this code statically or dynamically with other modules is
 * making a combined work based on this code.  Thus, the terms and
 * conditions of the GNU General Public License cover the whole
 * combination.
 *
 * As a special exception, the copyright holders of this library give you
 * permission to link this code with independent modules to produce an
 * executable, regardless of the license terms of these independent
 * modules, and to copy and distribute the resulting executable under
 * terms of your choice, provided that you also meet, for each linked
 * independent module, the terms and conditions of the license of that
 * module.  An independent module is a module which is not derived from
 * or based on this library.  If you modify this code, you may extend
 * this exception to your version of the code, but you are not
 * obligated to do so.  If you do not wish to do so, delete this
 * exception statement from your version.
 *
 * ERIKA Enterprise is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License version 2 for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with ERIKA Enterprise; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 * ###*E*### */

/** 
	@file ee_utils.c
	@brief Functions to initialize the RTOS services
	@author Gianluca Franchino
	@author Giuseppe Serano
	@date 2011
*/ 
    
/*
 * PSoC Port and API Generation
 * Carlos Fernando Meier Martinez
 * P. Fromm 2020
 * Hochschule Darmstadt, Germany. 2017.
 */

#include "ErikaOS_1_ee_internal.inc"
#include "ErikaOS_1_ee_irq.inc"
//~ #include "ErikaOS_1_cortex_mx_ee_nvic.inc"
#include "cyfitter.h"
#include "cylib.h"

//PF v2.5.3
//We have to translate the Erika Priorities from 1..16 to 0..7
//We probably should not set the priority to 0 (highest), as this might interfear with the systick priority
//#define ISR_SCALE(prio) ((prio-1)>>1)

//Update for Release v2.5.3 - The GUI has been modified, only allowing values between 1..7
//i.e. the value can be takes as it is
#define ISR_SCALE(prio) (prio)

#define Number_of_ISRs  0

extern void EE_set_switch_context_pri(void);

/* Function used to calculate the initialize the system */
void EE_system_init(void)
{
#if (Number_of_ISRs > 0)
  cyisraddress *ramVectorTable = *CY_INT_VECT_TABLE;
#endif
  register EE_UREG flags;

  flags = EE_hal_suspendIRQ();

	/* 
	 * Set the priority of PendSV to the minimum one
	 * PendSV is the software interrupt used for context switch
	 */
	EE_set_switch_context_pri();

#ifdef	__CORTEX_MX__

#ifdef	EE_CORTEX_MX_SYSTICK_ISR
#ifdef	EE_CORTEX_MX_SYSTICK_ISR_PRI
	NVIC_SYS_PRI3_R |= (
	  EE_CORTEX_MX_SYSTICK_ISR_PRI << NVIC_SYS_PRI3_TICK_S
	);
#endif
#endif

#define ISR_MIN_PRI 48

#if (Number_of_ISRs > 0) && defined ISR_1__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_1__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_1;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_1__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_1__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_1__INTC_NUMBER);
#elif Number_of_ISRs > 0
#error  The Interrupt ISR_1 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_1 */

#if (Number_of_ISRs > 1) && defined ISR_2__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_2__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_2;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_2__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_2__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_2__INTC_NUMBER);
#elif Number_of_ISRs > 1
#error  The Interrupt ISR_2 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_2 */

#if (Number_of_ISRs > 2) && defined ISR_3__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_3__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_3;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_3__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_3__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_3__INTC_NUMBER);
#elif Number_of_ISRs > 2
#error  The Interrupt ISR_3 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_3 */

#if (Number_of_ISRs > 3) && defined ISR_4__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_4__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_4;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_4__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_4__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_4__INTC_NUMBER);
#elif Number_of_ISRs > 3
#error  The Interrupt ISR_4 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_4 */

#if (Number_of_ISRs > 4) && defined ISR_5__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_5__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_5;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_5__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_5__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_5__INTC_NUMBER);
#elif Number_of_ISRs > 4
#error  The Interrupt ISR_5 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_5 */

#if (Number_of_ISRs > 5) && defined ISR_6__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_6__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_6;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_6__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_6__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_6__INTC_NUMBER);
#elif Number_of_ISRs > 5
#error  The Interrupt ISR_6 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_6 */

#if (Number_of_ISRs > 6) && defined ISR_7__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_7__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_7;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_7__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_7__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_7__INTC_NUMBER);
#elif Number_of_ISRs > 6
#error  The Interrupt ISR_7 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_7 */

#if (Number_of_ISRs > 7) && defined ISR_8__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_8__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_8;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_8__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_8__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_8__INTC_NUMBER);
#elif Number_of_ISRs > 7
#error  The Interrupt ISR_8 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_8 */

#if (Number_of_ISRs > 8) && defined ISR_9__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_9__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_9;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_9__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_9__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_9__INTC_NUMBER);
#elif Number_of_ISRs > 8
#error  The Interrupt ISR_9 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_9 */

#if (Number_of_ISRs > 9) && defined ISR_10__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_10__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_10;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_10__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_10__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_10__INTC_NUMBER);
#elif Number_of_ISRs > 9
#error  The Interrupt ISR_10 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_10 */

#if (Number_of_ISRs > 10) && defined ISR_11__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_11__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_11;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_11__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_11__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_11__INTC_NUMBER);
#elif Number_of_ISRs > 10
#error  The Interrupt ISR_11 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_11 */

#if (Number_of_ISRs > 11) && defined ISR_12__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_12__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_12;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_12__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_12__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_12__INTC_NUMBER);
#elif Number_of_ISRs > 11
#error  The Interrupt ISR_12 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_12 */

#if (Number_of_ISRs > 12) && defined ISR_13__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_13__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_13;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_13__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_13__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_13__INTC_NUMBER);
#elif Number_of_ISRs > 12
#error  The Interrupt ISR_13 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_13 */

#if (Number_of_ISRs > 13) && defined ISR_14__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_14__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_14;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_14__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_14__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_14__INTC_NUMBER);
#elif Number_of_ISRs > 13
#error  The Interrupt ISR_14 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_14 */

#if (Number_of_ISRs > 14) && defined ISR_15__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_15__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_15;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_15__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_15__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_15__INTC_NUMBER);
#elif Number_of_ISRs > 14
#error  The Interrupt ISR_15 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_15 */

#if (Number_of_ISRs > 15) && defined ISR_16__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (ISR_16__INTC_NUMBER & CY_INT_NUMBER_MASK)] = ISR_16;
	//PF v2.5.3
    //NVIC_SET_PRI(ISR_16__INTC_NUMBER, (ISR_MIN_PRI - 0));
    CyIntSetPriority(ISR_16__INTC_NUMBER, ISR_SCALE(0));
    //\PF
	NVIC_INT_ENABLE(ISR_16__INTC_NUMBER);
#elif Number_of_ISRs > 15
#error  The Interrupt ISR_16 could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* ISR_16 */

#endif	/* __CORTEX_MX__ */

  EE_hal_resumeIRQ(flags);

}
