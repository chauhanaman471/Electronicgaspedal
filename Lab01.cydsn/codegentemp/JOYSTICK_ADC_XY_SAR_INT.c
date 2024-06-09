/*******************************************************************************
* File Name: JOYSTICK_ADC_XY_SAR_INT.c
* Version 3.10
*
*  Description:
*    This file contains the code that operates during the ADC_SAR interrupt
*    service routine.
*
*   Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "JOYSTICK_ADC_XY_SAR.h"



/******************************************************************************
* Custom Declarations and Variables
* - add user inlcude files, prototypes and variables between the following
*   #START and #END tags
******************************************************************************/
/* `#START ADC_SYS_VAR`  */

/* `#END`  */

#if(JOYSTICK_ADC_XY_SAR_IRQ_REMOVE == 0u)


    /******************************************************************************
    * Function Name: JOYSTICK_ADC_XY_SAR_ISR
    *******************************************************************************
    *
    * Summary:
    *  Handle Interrupt Service Routine.
    *
    * Parameters:
    *  None.
    *
    * Return:
    *  None.
    *
    * Reentrant:
    *  No.
    *
    ******************************************************************************/
    CY_ISR( JOYSTICK_ADC_XY_SAR_ISR )
    {
        #ifdef JOYSTICK_ADC_XY_SAR_ISR_INTERRUPT_CALLBACK
            JOYSTICK_ADC_XY_SAR_ISR_InterruptCallback();
        #endif /* JOYSTICK_ADC_XY_SAR_ISR_INTERRUPT_CALLBACK */          

        
        /************************************************************************
        *  Custom Code
        *  - add user ISR code between the following #START and #END tags
        *************************************************************************/
          /* `#START MAIN_ADC_ISR`  */

          /* `#END`  */
    }

#endif   /* End JOYSTICK_ADC_XY_SAR_IRQ_REMOVE */

/* [] END OF FILE */
