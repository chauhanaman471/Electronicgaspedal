/*******************************************************************************
* File Name: RGB_PWM_red_PM.c
* Version 3.30
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "RGB_PWM_red.h"

static RGB_PWM_red_backupStruct RGB_PWM_red_backup;


/*******************************************************************************
* Function Name: RGB_PWM_red_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  RGB_PWM_red_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void RGB_PWM_red_SaveConfig(void) 
{

    #if(!RGB_PWM_red_UsingFixedFunction)
        #if(!RGB_PWM_red_PWMModeIsCenterAligned)
            RGB_PWM_red_backup.PWMPeriod = RGB_PWM_red_ReadPeriod();
        #endif /* (!RGB_PWM_red_PWMModeIsCenterAligned) */
        RGB_PWM_red_backup.PWMUdb = RGB_PWM_red_ReadCounter();
        #if (RGB_PWM_red_UseStatus)
            RGB_PWM_red_backup.InterruptMaskValue = RGB_PWM_red_STATUS_MASK;
        #endif /* (RGB_PWM_red_UseStatus) */

        #if(RGB_PWM_red_DeadBandMode == RGB_PWM_red__B_PWM__DBM_256_CLOCKS || \
            RGB_PWM_red_DeadBandMode == RGB_PWM_red__B_PWM__DBM_2_4_CLOCKS)
            RGB_PWM_red_backup.PWMdeadBandValue = RGB_PWM_red_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(RGB_PWM_red_KillModeMinTime)
             RGB_PWM_red_backup.PWMKillCounterPeriod = RGB_PWM_red_ReadKillTime();
        #endif /* (RGB_PWM_red_KillModeMinTime) */

        #if(RGB_PWM_red_UseControl)
            RGB_PWM_red_backup.PWMControlRegister = RGB_PWM_red_ReadControlRegister();
        #endif /* (RGB_PWM_red_UseControl) */
    #endif  /* (!RGB_PWM_red_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: RGB_PWM_red_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  RGB_PWM_red_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void RGB_PWM_red_RestoreConfig(void) 
{
        #if(!RGB_PWM_red_UsingFixedFunction)
            #if(!RGB_PWM_red_PWMModeIsCenterAligned)
                RGB_PWM_red_WritePeriod(RGB_PWM_red_backup.PWMPeriod);
            #endif /* (!RGB_PWM_red_PWMModeIsCenterAligned) */

            RGB_PWM_red_WriteCounter(RGB_PWM_red_backup.PWMUdb);

            #if (RGB_PWM_red_UseStatus)
                RGB_PWM_red_STATUS_MASK = RGB_PWM_red_backup.InterruptMaskValue;
            #endif /* (RGB_PWM_red_UseStatus) */

            #if(RGB_PWM_red_DeadBandMode == RGB_PWM_red__B_PWM__DBM_256_CLOCKS || \
                RGB_PWM_red_DeadBandMode == RGB_PWM_red__B_PWM__DBM_2_4_CLOCKS)
                RGB_PWM_red_WriteDeadTime(RGB_PWM_red_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(RGB_PWM_red_KillModeMinTime)
                RGB_PWM_red_WriteKillTime(RGB_PWM_red_backup.PWMKillCounterPeriod);
            #endif /* (RGB_PWM_red_KillModeMinTime) */

            #if(RGB_PWM_red_UseControl)
                RGB_PWM_red_WriteControlRegister(RGB_PWM_red_backup.PWMControlRegister);
            #endif /* (RGB_PWM_red_UseControl) */
        #endif  /* (!RGB_PWM_red_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: RGB_PWM_red_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  RGB_PWM_red_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void RGB_PWM_red_Sleep(void) 
{
    #if(RGB_PWM_red_UseControl)
        if(RGB_PWM_red_CTRL_ENABLE == (RGB_PWM_red_CONTROL & RGB_PWM_red_CTRL_ENABLE))
        {
            /*Component is enabled */
            RGB_PWM_red_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            RGB_PWM_red_backup.PWMEnableState = 0u;
        }
    #endif /* (RGB_PWM_red_UseControl) */

    /* Stop component */
    RGB_PWM_red_Stop();

    /* Save registers configuration */
    RGB_PWM_red_SaveConfig();
}


/*******************************************************************************
* Function Name: RGB_PWM_red_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  RGB_PWM_red_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void RGB_PWM_red_Wakeup(void) 
{
     /* Restore registers values */
    RGB_PWM_red_RestoreConfig();

    if(RGB_PWM_red_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        RGB_PWM_red_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
