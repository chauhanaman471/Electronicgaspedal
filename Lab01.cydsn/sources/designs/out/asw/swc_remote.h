
/*
 * Filename: swc_remote.h
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * Description: This SWC will read the value from the Joystick and send the value via so_joystick
 */

#ifndef _H_DEFINE_SWC_REMOTE
#define _H_DEFINE_SWC_REMOTE

#include "project.h"
#include "global.h"
#include "rte_types.h"

/* USER CODE START SWC_REMOTE_INCLUDES */

/* USER CODE END SWC_REMOTE_INCLUDES */



/* USER CODE START SWC_REMOTE_USERDEFINITIONS */

/* USER CODE END SWC_REMOTE_USERDEFINITIONS */


/*
 * component: swc_remote
 * cycletime: 10
 * description: Runnable which will read the joystick value from the driver
 * events: 
 * name: REMOTE_readJoystick_run
 * shortname: readJoystick
 * signalIN: 
 * signalOUT: so_joystick
 * task: tsk_io
 */
void REMOTE_readJoystick_run(RTE_event ev);


#endif