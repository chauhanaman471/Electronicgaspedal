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

#include "`$INSTANCE_NAME`_ee_internal.inc"
#include "`$INSTANCE_NAME`_ee_irq.inc"
//~ #include "`$INSTANCE_NAME`_cortex_mx_ee_nvic.inc"
#include "cyfitter.h"
#include "cylib.h"

//PF v2.5.3
//We have to translate the Erika Priorities from 1..16 to 0..7
//We probably should not set the priority to 0 (highest), as this might interfear with the systick priority
//#define ISR_SCALE(prio) ((prio-1)>>1)

//Update for Release v2.5.3 - The GUI has been modified, only allowing values between 1..7
//i.e. the value can be takes as it is
#define ISR_SCALE(prio) (prio)

#define Number_of_ISRs  `$Number_of_ISR`

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

#if (Number_of_ISRs > 0) && defined `$ISR_1_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_1_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_1_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_1_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_1_Priority`));
    CyIntSetPriority(`$ISR_1_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_1_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_1_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 0
#error  The Interrupt `$ISR_1_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_1_Name` */

#if (Number_of_ISRs > 1) && defined `$ISR_2_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_2_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_2_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_2_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_2_Priority`));
    CyIntSetPriority(`$ISR_2_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_2_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_2_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 1
#error  The Interrupt `$ISR_2_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_2_Name` */

#if (Number_of_ISRs > 2) && defined `$ISR_3_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_3_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_3_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_3_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_3_Priority`));
    CyIntSetPriority(`$ISR_3_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_3_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_3_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 2
#error  The Interrupt `$ISR_3_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_3_Name` */

#if (Number_of_ISRs > 3) && defined `$ISR_4_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_4_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_4_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_4_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_4_Priority`));
    CyIntSetPriority(`$ISR_4_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_4_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_4_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 3
#error  The Interrupt `$ISR_4_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_4_Name` */

#if (Number_of_ISRs > 4) && defined `$ISR_5_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_5_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_5_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_5_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_5_Priority`));
    CyIntSetPriority(`$ISR_5_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_5_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_5_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 4
#error  The Interrupt `$ISR_5_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_5_Name` */

#if (Number_of_ISRs > 5) && defined `$ISR_6_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_6_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_6_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_6_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_6_Priority`));
    CyIntSetPriority(`$ISR_6_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_6_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_6_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 5
#error  The Interrupt `$ISR_6_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_6_Name` */

#if (Number_of_ISRs > 6) && defined `$ISR_7_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_7_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_7_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_7_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_7_Priority`));
    CyIntSetPriority(`$ISR_7_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_7_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_7_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 6
#error  The Interrupt `$ISR_7_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_7_Name` */

#if (Number_of_ISRs > 7) && defined `$ISR_8_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_8_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_8_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_8_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_8_Priority`));
    CyIntSetPriority(`$ISR_8_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_8_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_8_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 7
#error  The Interrupt `$ISR_8_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_8_Name` */

#if (Number_of_ISRs > 8) && defined `$ISR_9_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_9_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_9_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_9_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_9_Priority`));
    CyIntSetPriority(`$ISR_9_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_9_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_9_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 8
#error  The Interrupt `$ISR_9_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_9_Name` */

#if (Number_of_ISRs > 9) && defined `$ISR_10_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_10_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_10_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_10_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_10_Priority`));
    CyIntSetPriority(`$ISR_10_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_10_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_10_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 9
#error  The Interrupt `$ISR_10_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_10_Name` */

#if (Number_of_ISRs > 10) && defined `$ISR_11_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_11_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_11_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_11_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_11_Priority`));
    CyIntSetPriority(`$ISR_11_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_11_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_11_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 10
#error  The Interrupt `$ISR_11_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_11_Name` */

#if (Number_of_ISRs > 11) && defined `$ISR_12_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_12_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_12_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_12_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_12_Priority`));
    CyIntSetPriority(`$ISR_12_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_12_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_12_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 11
#error  The Interrupt `$ISR_12_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_12_Name` */

#if (Number_of_ISRs > 12) && defined `$ISR_13_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_13_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_13_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_13_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_13_Priority`));
    CyIntSetPriority(`$ISR_13_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_13_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_13_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 12
#error  The Interrupt `$ISR_13_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_13_Name` */

#if (Number_of_ISRs > 13) && defined `$ISR_14_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_14_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_14_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_14_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_14_Priority`));
    CyIntSetPriority(`$ISR_14_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_14_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_14_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 13
#error  The Interrupt `$ISR_14_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_14_Name` */

#if (Number_of_ISRs > 14) && defined `$ISR_15_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_15_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_15_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_15_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_15_Priority`));
    CyIntSetPriority(`$ISR_15_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_15_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_15_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 14
#error  The Interrupt `$ISR_15_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_15_Name` */

#if (Number_of_ISRs > 15) && defined `$ISR_16_Name`__INTC_NUMBER
    ramVectorTable[CY_INT_IRQ_BASE + (`$ISR_16_Name`__INTC_NUMBER & CY_INT_NUMBER_MASK)] = `@ISR_16_Name`;
	//PF v2.5.3
    //NVIC_SET_PRI(`$ISR_16_Name`__INTC_NUMBER, (ISR_MIN_PRI - `$ISR_16_Priority`));
    CyIntSetPriority(`$ISR_16_Name`__INTC_NUMBER, ISR_SCALE(`$ISR_16_Priority`));
    //\PF
	NVIC_INT_ENABLE(`$ISR_16_Name`__INTC_NUMBER);
#elif Number_of_ISRs > 15
#error  The Interrupt `$ISR_16_Name` could not be found. Make sure the name in the OS config exactly matches the name of the interrupt in the interrupt tab.
#endif	/* `$ISR_16_Name` */

#endif	/* __CORTEX_MX__ */

  EE_hal_resumeIRQ(flags);

}
