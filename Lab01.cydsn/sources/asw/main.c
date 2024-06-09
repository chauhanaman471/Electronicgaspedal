/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "global.h"
#include "tsk_io.h"
#include "tsk_control.h"
#include "tsk_brakelight.h"
#include "led.h"
#include "joystick.h"
#include "WatchDogTimer.h"

CY_ISR_PROTO(isr_Button); //Interrupt Function Declaration

//ISR which will increment the systick counter every ms
ISR(systick_handler)
{
    CounterTick(cnt_systick);
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    isr_Button_StartEx(isr_Button);
    
    //Set systick period to 1 ms. Enable the INT and start it.
	EE_systick_set_period(MILLISECONDS_TO_TICKS(1, BCLK__BUS_CLK__HZ));
	EE_systick_enable_int();
    LED_Set(LED_YELLOW,LED_ON);
    // Start Operating System
    for(;;)	    
    	StartOS(OSDEFAULTAPPMODE);
}

void unhandledException()
{
    //Ooops, something terrible happened....check the call stack to see how we got here...
    __asm("bkpt");
}

/********************************************************************************
 * Task Definitions
 ********************************************************************************/

TASK(tsk_init)
{
    
    //Init MCAL Drivers
    LED_Init();
    JOYSTICK_Init();
    UART_LOG_Start();
    WD_Start(ticks_2_3s); //starting Watchdog with the longest tick period : 1024 Ticks
    
    //Reconfigure ISRs with OS parameters.
    //This line MUST be called after the hardware driver initialisation!
    EE_system_init();
	
    //Start SysTick
	//Must be done here, because otherwise the isr vector is not overwritten yet
    EE_systick_start();  
	
    //Checking if WatchDog reset occur and printing on UART terminal
    if (WD_CheckResetBit() == TRUE)
    {
        UART_LOG_PutString("Reset has made by WatchDog Timer");
    }
    else
    {
        UART_LOG_PutString("Reset has made by PowerOnReset");
    }

    //Start the alarm with 100ms cycle time
    SetRelAlarm(alrm_1ms,1,1);
    ActivateTask(tsk_io);
    ActivateTask(tsk_control);
    ActivateTask(tsk_brakelight);
    ActivateTask(tsk_background);
    TerminateTask();
    
}

TASK(tsk_background)
{
    while(1)
    {
        //Triggering the Watchdog timer in the background (lowest priority task)
        WD_Trigger();
    }
}


/********************************************************************************
 * ISR Definitions
 ********************************************************************************/
//If the button is pressed, calling OS Shutdown function
CY_ISR(isr_Button)
{
    if (WD_Button_Read() ==1)
    {
        ShutdownOS(0);
    }
    
}

/* [] END OF FILE */
