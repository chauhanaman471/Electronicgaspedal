/*
 * Filename: swc_brakelight.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * description: Based on the value present on so_speed, this component will interact with the brakelights
 * name: swc_BrakeLight
 * shortname: BrakeLight
 *
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "swc_brakelight.h"
#include "WatchDogTimer.h" //Including WDT header file


/* USER CODE START SWC_BRAKELIGHT_INCLUDE */

/* USER CODE END SWC_BRAKELIGHT_INCLUDE */


#include "sp_common.h"

/* USER CODE START SWC_BRAKELIGHT_USERDEFINITIONS */

/* USER CODE END SWC_BRAKELIGHT_USERDEFINITIONS */



/*
 * component: swc_BrakeLight
 * cycletime: 0
 * description: Runnable which will access the brake light depending on the value in the so_signal
 * events: ev_speed_onData
 * name: BRAKELIGHT_setBrakeLight_run
 * shortname: setBrakeLight
 * signalIN: so_speed
 * signalOUT: so_brakeLight
 * task: tsk_brakelight
 */
void BRAKELIGHT_setBrakeLight_run(RTE_event ev){
	
	/* USER CODE START BRAKELIGHT_setBrakeLight_run */
    //Giving Initial value of enginee speed as 0
    SC_SPEED_data_t breaklightspeedvalue = SC_SPEED_INIT_DATA;
    RC_t res = RC_SUCCESS;
    
    if (RTE_SC_SPEED_get(&SO_SPEED_signal).speed ==0)
    {
        UART_LOG_PutString("\nSpeed signal value is 0");
        //updating brakelight speed value with the value of speed signal
        breaklightspeedvalue.speed = RTE_SC_SPEED_get(&SO_SPEED_signal).speed;
        //updating the breaklight object speed with the value of brakelight speed
        res = RTE_SC_SPEED_set(&SO_BRAKELIGHT_signal,breaklightspeedvalue);
        if (res == RC_SUCCESS)
        {
            UART_LOG_PutString("\nBreaklight signal object updated with breaklight signal value");
            res = RTE_SC_SPEED_pushPort(&SO_BRAKELIGHT_signal);
            if (res !=RC_SUCCESS)
            {
                UART_LOG_PutString("\nError: Breaklight signal not able to write to Driver");
            }
/*        else
            {
                UART_LOG_PutString("\nEnginee signal written to Driver");
            }*/
        }
    }
/*    else
    {
        UART_LOG_PutString("\nSpeed signal value is positive");
    }*/

    /* USER CODE END BRAKELIGHT_setBrakeLight_run */
    
    WD_Alive(run_brakelight_pos);
}

/* USER CODE START SWC_BRAKELIGHT_FUNCTIONS */

/* USER CODE END SWC_BRAKELIGHT_FUNCTIONS */

