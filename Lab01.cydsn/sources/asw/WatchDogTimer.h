 
#ifndef WATCHDOGTIMER_H
#define WATCHDOGTIMER_H

#include "project.h"
#include "global.h"

    
//Defining Watchdog timer timeout periods in terms of tick time
 enum WDT_TimeOut{
  ticks_4_6ms       = CYWDT_2_TICKS,    
  ticks_32_48ms     = CYWDT_16_TICKS,   
  ticks_256_384ms   = CYWDT_128_TICKS, 
  ticks_2_3s        = CYWDT_1024_TICKS  
} ;
typedef enum WDT_TimeOut WDT_TimeOut_t;

//Defining runnable's Bit position which are used to mark runnable as alive
#define run_remote_pos    0U
#define run_calcControl_pos 1U
#define run_engine_pos      2U
#define run_brakelight_pos  3U

/*****************************************************************************/
/* API functions                                                             */
/*****************************************************************************/

/**
Activating the Watchdog Trigger with a timeout period
*/
RC_t WD_Start( WDT_TimeOut_t timeout);

/**
Services the Watchdog Trigger to prevent it from reset if all runnables are alive
*/
RC_t WD_Trigger();

/**
Checks the watchdog bit and return TRUE if watchdog reset bit was set
*/
boolean_t WD_CheckResetBit();

/**
* This function sets the bit at the corresponding position.
* It is called by every runnable using a uniqe position to mark they are alive.
* 0 = JoyStick_run, 1 = Control_run, 2 = Engine_run, 3 = brakelight_run
* @return RC_SUCCESS
*/
RC_t WD_Alive(uint8_t myBitPosition);


#endif /* WATCHDOGTIMER_H */
