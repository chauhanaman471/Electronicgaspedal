/*******************************************************************************
* File Name: JOYSTICK_ADC_XY_PM.c
* Version 2.10
*
* Description:
*  This file contains the setup, control and status commands to support
*  component operations in low power mode.
*
* Note:
*
********************************************************************************
* Copyright 2012-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "JOYSTICK_ADC_XY.h"
#include "JOYSTICK_ADC_XY_SAR.h"
#if(JOYSTICK_ADC_XY_CLOCK_SOURCE == JOYSTICK_ADC_XY_CLOCK_INTERNAL)
    #include "JOYSTICK_ADC_XY_IntClock.h"
#endif   /* JOYSTICK_ADC_XY_CLOCK_SOURCE == JOYSTICK_ADC_XY_CLOCK_INTERNAL */


/*******************************************************************************
* Function Name: JOYSTICK_ADC_XY_Sleep
********************************************************************************
*
* Summary:
*  Stops the ADC operation and saves the configuration registers and component
*  enable state. Should be called just prior to entering sleep
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Side Effects:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void JOYSTICK_ADC_XY_Sleep(void)
{
    JOYSTICK_ADC_XY_SAR_Stop();
    JOYSTICK_ADC_XY_SAR_Sleep();
    JOYSTICK_ADC_XY_Disable();

    #if(JOYSTICK_ADC_XY_CLOCK_SOURCE == JOYSTICK_ADC_XY_CLOCK_INTERNAL)
        JOYSTICK_ADC_XY_IntClock_Stop();
    #endif   /* JOYSTICK_ADC_XY_CLOCK_SOURCE == JOYSTICK_ADC_XY_CLOCK_INTERNAL */
}


/*******************************************************************************
* Function Name: JOYSTICK_ADC_XY_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component enable state and configuration registers. This should
*  be called just after awaking from sleep mode
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Side Effects:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void JOYSTICK_ADC_XY_Wakeup(void)
{
    JOYSTICK_ADC_XY_SAR_Wakeup();
    JOYSTICK_ADC_XY_SAR_Enable();

    #if(JOYSTICK_ADC_XY_CLOCK_SOURCE == JOYSTICK_ADC_XY_CLOCK_INTERNAL)
        JOYSTICK_ADC_XY_IntClock_Start();
    #endif   /* JOYSTICK_ADC_XY_CLOCK_SOURCE == JOYSTICK_ADC_XY_CLOCK_INTERNAL */

    /* The block is ready to use 10 us after the SAR enable signal is set high. */
    CyDelayUs(10u);
    
    JOYSTICK_ADC_XY_Enable();

    #if(JOYSTICK_ADC_XY_SAMPLE_MODE == JOYSTICK_ADC_XY_SAMPLE_MODE_FREE_RUNNING)
        JOYSTICK_ADC_XY_SAR_StartConvert();
    #endif /* (JOYSTICK_ADC_XY_SAMPLE_MODE == JOYSTICK_ADC_XY_SAMPLE_MODE_FREE_RUNNING) */

    (void) CY_GET_REG8(JOYSTICK_ADC_XY_STATUS_PTR);
}


/*******************************************************************************
* Function Name: JOYSTICK_ADC_XY_SaveConfig
********************************************************************************
*
* Summary:
*  Save the current configuration of ADC non-retention registers
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Side Effects:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void JOYSTICK_ADC_XY_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: JOYSTICK_ADC_XY_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the configuration of ADC non-retention registers
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Side Effects:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void JOYSTICK_ADC_XY_RestoreConfig(void)
{

}


/* [] END OF FILE */
