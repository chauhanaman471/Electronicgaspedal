/*
 * Filename: tsk_control.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * description: This task will contain Application code
 * events: ev_joystick_onData
 * mode: Cyclic and Event
 * name: tsk_control
 * shortname: control
 * signalpoolsRO: sp_common
 * signalpoolsRW: sp_common
 * tickEvent: 0
 * timertickperiod: 1
 *
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "tsk_control.h"



/* USER CODE START TSK_CONTROL_INCLUDE */

/* USER CODE END TSK_CONTROL_INCLUDE */

#include "swc_control.h"



/* USER CODE START TSK_CONTROL_USERDEFINITIONS */

/* USER CODE END TSK_CONTROL_USERDEFINITIONS */

/*******************************************************************************
 * Runnable Tables from Activation Engine
 *******************************************************************************/

/* Cyclic Table */

const RTE_cyclicTable_t RTE_cyclicActivationTable_tsk_control[] = {
};
const uint16_t RTE_cyclicActivation_tsk_control_size = sizeof (RTE_cyclicActivationTable_tsk_control) / sizeof(RTE_cyclicTable_t); 

/* Event Table */
const RTE_eventTable_t RTE_eventActivationTable_tsk_control[] = {
    { CONTROL_calcControl_run, ev_joystick_onData },  //Runnable depending on the joystick value will control the speed
}; 
const uint16_t RTE_eventActivation_tsk_control_size = sizeof (RTE_eventActivationTable_tsk_control) / sizeof(RTE_eventTable_t);

/*******************************************************************************
 * Task Body
 *******************************************************************************/


/*
 * description: This task will contain Application code
 * events: ev_joystick_onData
 * mode: Cyclic and Event
 * name: tsk_control
 * shortname: control
 * signalpoolsRO: sp_common
 * signalpoolsRW: sp_common
 * tickEvent: 0
 * timertickperiod: 1
 */
TASK(tsk_control)
{
	/* ticktime of the task */
	uint32_t ticktime = 0;
	
    EventMaskType ev = 0;
	
	/* USER CODE START TSK_CONTROL_INIT */

	/* USER CODE END TSK_CONTROL_INIT */
    
    while(1)
    {
        //Wait, read and clear the event
        WaitEvent(ev_joystick_onData);
        GetEvent(tsk_control,&ev);
        ClearEvent(ev);
    
		/* USER CODE START TSK_CONTROL_TASKBOBY_PRE */

		/* USER CODE END TSK_CONTROL_TASKBODY_PRE */
        
        if (ev & 0){
            //Process Cyclic table on tick
            RTE_ProcessCyclicTable(RTE_cyclicActivationTable_tsk_control, RTE_cyclicActivation_tsk_control_size, ticktime);

			ticktime += 1;
			if (ticktime > 0xFFFFFF00) ticktime = 0;

		};
		
		//Process data driven events
		RTE_ProcessEventTable(RTE_eventActivationTable_tsk_control, RTE_eventActivation_tsk_control_size, ev);
		
		/* USER CODE START TSK_CONTROL_TASKBODY_POST */

		/* USER CODE END TSK_CONTROL_TASKBODY_POST */
        
    }
	
	//Just in Case
	TerminateTask();
}


/*******************************************************************************
 * Interrupt Service Routines
 *******************************************************************************/

/* USER CODE START TSK_CONTROL_ISR */

/* USER CODE END TSK_CONTROL_ISR */
