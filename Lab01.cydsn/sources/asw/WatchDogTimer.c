#include "global.h"
#include <stdio.h>
#include <stdlib.h>
#include "WatchDogTimer.h"

static uint8_t WD_RunnableAliveBitField;

//Function Implementation

/**
* Activate the Watchdog Trigger
* \param WDT_TimeOut_t timeout - [IN] Timeout Period
* @return RC_SUCCESS
*/
RC_t WD_Start( WDT_TimeOut_t timeout)
{
    CyWdtStart(timeout, CYWDT_LPMODE_NOCHANGE);
    return RC_SUCCESS;
}

/**
* Service the Watchdog Trigger
* @return RC_SUCCESS
*/
RC_t WD_Trigger()
{
    //If every runnable sends alive bit i.e. 0x0f = 0000 1111 then clear watchdog timer and reset bits
    if(WD_RunnableAliveBitField == 0x0f)
    {
        CyWdtClear();
        WD_RunnableAliveBitField = 0;
    }    
    return RC_SUCCESS;
}

/**
* Checks the watchdog bit
* @return TRUE if watchdog reset bit was set
*/
boolean_t WD_CheckResetBit()
{
    //Check if watchdog is source of reset by checking the watchdog reset bit in status register
    if(CyResetStatus & CY_RESET_WD)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/**
* This function sets the bit at the corresponding position.
* It is called by every runnable using a uniqe position.
* 0 = JoyStick_run, 1 = Control_run, 2 = Engine_run, 3 = brakelight_run
* @return RC_SUCCESS
*/
RC_t WD_Alive(uint8_t myBitPosition)
{
    /*
    Let say joystick runnable sends alive bit i.e. myBitPosition = 0
    Initial value of WD_RunnableAliveBitField = 0000 0000
    left shift 1U by 0 i.e. 0000 0001 <<0 ==> 0000 0001
    Bitwise OR between (1U << myBitPositon) and WD_RunnableAliveBitField ==> 0000 0001
    so for second runnable ==> 0000 0011
    Third runnable ==> 0000 0111
    Fourth runnable ==> 0000 1111
    */
    WD_RunnableAliveBitField |= (1U) << myBitPosition;
    
    return RC_SUCCESS;
}