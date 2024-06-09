using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.Windows.Forms;
using CyDesigner.Extensions.Gde;

namespace ErikaOS_v2_5_3
{
    #region Component Parameters Names
    public class CyParamNames
    {
        /* OS Config */
        public const string Systick = "USE_SYSTICK";
        public const string SystickHandler = "Systick_Handler_Name";
        public const string Hook_Start = "USE_STARTUP_HOOK";
        public const string Hook_Shutdown = "USE_SHUTDOWN_HOOK";
        public const string Res_Scheduler = "USE_RES_SCHEDULER";
        public const string Trace1 = "USE_TRACE1";
        public const string Hook_Pretask = "USE_PRETASK_HOOK";
        public const string Hook_Posttask = "USE_POSTTASK_HOOK";
        public const string Param_Access = "USE_PARAMETER_ACCESS";
        public const string Hook_Error = "USE_ERROR_HOOK";
        public const string MultiStack = "MULTI_STACK";
        public const string MultiStackIRQ = "MULTI_STACK_IRQ";
        public const string IRQStackSize = "MULTI_STACK_IRQ_SIZE";
        public const string OSStatus = "STATUS";
        public const string Kernel = "KERNEL_TYPE";
        public const string CPU = "CPU_TYPE";
        public const string Service_ID = "USE_GET_SERVICE_ID";
        public const string Tracer = "USE_TRACER";

        /* Events */
        public const string NumEvents = "Number_of_Events";
        public const string E1 = "Event_1";
        public const string E2 = "Event_2";
        public const string E3 = "Event_3";
        public const string E4 = "Event_4";
        public const string E5 = "Event_5";
        public const string E6 = "Event_6";
        public const string E7 = "Event_7";
        public const string E8 = "Event_8";
        public const string E9 = "Event_9";
        public const string E10 = "Event_10";
        public const string E11 = "Event_11";
        public const string E12 = "Event_12";
        public const string E13 = "Event_13";
        public const string E14 = "Event_14";
        public const string E15 = "Event_15";
        public const string E16 = "Event_16";
        public const string E17 = "Event_17";
        public const string E18 = "Event_18";
        public const string E19 = "Event_19";
        public const string E20 = "Event_20";
        public const string E21 = "Event_21";
        public const string E22 = "Event_22";
        public const string E23 = "Event_23";
        public const string E24 = "Event_24";
        public const string E25 = "Event_25";
        public const string E26 = "Event_26";
        public const string E27 = "Event_27";
        public const string E28 = "Event_28";
        public const string E29 = "Event_29";
        public const string E30 = "Event_30";
        public const string E31 = "Event_31";

        /* Alarms */
        public const string NumAlarms = "Number_of_Alarms";
        public const string A1_Action = "Alarm_1_Action";
        public const string A1_Callback = "Alarm_1_Callback_Name";
        public const string A1_Counter = "Alarm_1_Counter";
        public const string A1_Event = "Alarm_1_Event";
        public const string A1_Name = "Alarm_1_Name";
        public const string A1_Task = "Alarm_1_Task";

        public const string A2_Action = "Alarm_2_Action";
        public const string A2_Callback = "Alarm_2_Callback_Name";
        public const string A2_Counter = "Alarm_2_Counter";
        public const string A2_Event = "Alarm_2_Event";
        public const string A2_Name = "Alarm_2_Name";
        public const string A2_Task = "Alarm_2_Task";

        public const string A3_Action = "Alarm_3_Action";
        public const string A3_Callback = "Alarm_3_Callback_Name";
        public const string A3_Counter = "Alarm_3_Counter";
        public const string A3_Event = "Alarm_3_Event";
        public const string A3_Name = "Alarm_3_Name";
        public const string A3_Task = "Alarm_3_Task";

        public const string A4_Action = "Alarm_4_Action";
        public const string A4_Callback = "Alarm_4_Callback_Name";
        public const string A4_Counter = "Alarm_4_Counter";
        public const string A4_Event = "Alarm_4_Event";
        public const string A4_Name = "Alarm_4_Name";
        public const string A4_Task = "Alarm_4_Task";

        public const string A5_Action = "Alarm_5_Action";
        public const string A5_Callback = "Alarm_5_Callback_Name";
        public const string A5_Counter = "Alarm_5_Counter";
        public const string A5_Event = "Alarm_5_Event";
        public const string A5_Name = "Alarm_5_Name";
        public const string A5_Task = "Alarm_5_Task";

        public const string A6_Action = "Alarm_6_Action";
        public const string A6_Callback = "Alarm_6_Callback_Name";
        public const string A6_Counter = "Alarm_6_Counter";
        public const string A6_Event = "Alarm_6_Event";
        public const string A6_Name = "Alarm_6_Name";
        public const string A6_Task = "Alarm_6_Task";

        public const string A7_Action = "Alarm_7_Action";
        public const string A7_Callback = "Alarm_7_Callback_Name";
        public const string A7_Counter = "Alarm_7_Counter";
        public const string A7_Event = "Alarm_7_Event";
        public const string A7_Name = "Alarm_7_Name";
        public const string A7_Task = "Alarm_7_Task";

        public const string A8_Action = "Alarm_8_Action";
        public const string A8_Callback = "Alarm_8_Callback_Name";
        public const string A8_Counter = "Alarm_8_Counter";
        public const string A8_Event = "Alarm_8_Event";
        public const string A8_Name = "Alarm_8_Name";
        public const string A8_Task = "Alarm_8_Task";

        /* Counters */
        public const string NumCounters = "Number_of_Counters";
        public const string C1_Name = "Counter_1_Name";
        public const string C1_Min = "Counter_1_Min_Cycle";
        public const string C1_Max = "Counter_1_Max_Value";
        public const string C1_Tick = "Counter_1_Tick";

        public const string C2_Name = "Counter_2_Name";
        public const string C2_Min = "Counter_2_Min_Cycle";
        public const string C2_Max = "Counter_2_Max_Value";
        public const string C2_Tick = "Counter_2_Tick";

        public const string C3_Name = "Counter_3_Name";
        public const string C3_Min = "Counter_3_Min_Cycle";
        public const string C3_Max = "Counter_3_Max_Value";
        public const string C3_Tick = "Counter_3_Tick";

        public const string C4_Name = "Counter_4_Name";
        public const string C4_Min = "Counter_4_Min_Cycle";
        public const string C4_Max = "Counter_4_Max_Value";
        public const string C4_Tick = "Counter_4_Tick";

        /* ISRs */
        public const string NumISRs = "Number_of_ISR";
        public const string ISR1_Cat = "ISR_1_Category";
        public const string ISR1_Name = "ISR_1_Name";
        public const string ISR1_Pri = "ISR_1_Priority";
        public const string ISR1_Res = "ISR_1_Resource";

        public const string ISR2_Cat = "ISR_2_Category";
        public const string ISR2_Name = "ISR_2_Name";
        public const string ISR2_Pri = "ISR_2_Priority";
        public const string ISR2_Res = "ISR_2_Resource";

        public const string ISR3_Cat = "ISR_3_Category";
        public const string ISR3_Name = "ISR_3_Name";
        public const string ISR3_Pri = "ISR_3_Priority";
        public const string ISR3_Res = "ISR_3_Resource";

        public const string ISR4_Cat = "ISR_4_Category";
        public const string ISR4_Name = "ISR_4_Name";
        public const string ISR4_Pri = "ISR_4_Priority";
        public const string ISR4_Res = "ISR_4_Resource";

        public const string ISR5_Cat = "ISR_5_Category";
        public const string ISR5_Name = "ISR_5_Name";
        public const string ISR5_Pri = "ISR_5_Priority";
        public const string ISR5_Res = "ISR_5_Resource";

        public const string ISR6_Cat = "ISR_6_Category";
        public const string ISR6_Name = "ISR_6_Name";
        public const string ISR6_Pri = "ISR_6_Priority";
        public const string ISR6_Res = "ISR_6_Resource";

        public const string ISR7_Cat = "ISR_7_Category";
        public const string ISR7_Name = "ISR_7_Name";
        public const string ISR7_Pri = "ISR_7_Priority";
        public const string ISR7_Res = "ISR_7_Resource";

        public const string ISR8_Cat = "ISR_8_Category";
        public const string ISR8_Name = "ISR_8_Name";
        public const string ISR8_Pri = "ISR_8_Priority";
        public const string ISR8_Res = "ISR_8_Resource";

        public const string ISR9_Cat = "ISR_9_Category";
        public const string ISR9_Name = "ISR_9_Name";
        public const string ISR9_Pri = "ISR_9_Priority";
        public const string ISR9_Res = "ISR_9_Resource";

        public const string ISR10_Cat = "ISR_10_Category";
        public const string ISR10_Name = "ISR_10_Name";
        public const string ISR10_Pri = "ISR_10_Priority";
        public const string ISR10_Res = "ISR_10_Resource";

        public const string ISR11_Cat = "ISR_11_Category";
        public const string ISR11_Name = "ISR_11_Name";
        public const string ISR11_Pri = "ISR_11_Priority";
        public const string ISR11_Res = "ISR_11_Resource";

        public const string ISR12_Cat = "ISR_12_Category";
        public const string ISR12_Name = "ISR_12_Name";
        public const string ISR12_Pri = "ISR_12_Priority";
        public const string ISR12_Res = "ISR_12_Resource";

        public const string ISR13_Cat = "ISR_13_Category";
        public const string ISR13_Name = "ISR_13_Name";
        public const string ISR13_Pri = "ISR_13_Priority";
        public const string ISR13_Res = "ISR_13_Resource";

        public const string ISR14_Cat = "ISR_14_Category";
        public const string ISR14_Name = "ISR_14_Name";
        public const string ISR14_Pri = "ISR_14_Priority";
        public const string ISR14_Res = "ISR_14_Resource";

        public const string ISR15_Cat = "ISR_15_Category";
        public const string ISR15_Name = "ISR_15_Name";
        public const string ISR15_Pri = "ISR_15_Priority";
        public const string ISR15_Res = "ISR_15_Resource";

        public const string ISR16_Cat = "ISR_16_Category";
        public const string ISR16_Name = "ISR_16_Name";
        public const string ISR16_Pri = "ISR_16_Priority";
        public const string ISR16_Res = "ISR_16_Resource";

        /* Resources */
        public const string NumResources = "Number_of_Resources";
        public const string R1 = "Resource_1";
        public const string R2 = "Resource_2";
        public const string R3 = "Resource_3";
        public const string R4 = "Resource_4";
        public const string R5 = "Resource_5";
        public const string R6 = "Resource_6";
        public const string R7 = "Resource_7";
        public const string R8 = "Resource_8";

        /* Tasks */
        public const string NumTasks = "Number_of_Tasks";
        public const string T1_Act = "Task_1_Activation";
        public const string T1_Auto = "Task_1_Autostart";
        public const string T1_E1 = "Task_1_Event_1";
        public const string T1_E2 = "Task_1_Event_2";
        public const string T1_E3 = "Task_1_Event_3";
        public const string T1_E4 = "Task_1_Event_4";
        public const string T1_E5 = "Task_1_Event_5";
        public const string T1_E6 = "Task_1_Event_6";
        public const string T1_E7 = "Task_1_Event_7";
        public const string T1_E8 = "Task_1_Event_8";
        public const string T1_Name = "Task_1_Name";
        public const string T1_NumE = "Task_1_Number_Events";
        public const string T1_NumR = "Task_1_Number_Resources";
        public const string T1_Prio = "Task_1_Priority";
        public const string T1_Schedule = "Task_1_Schedule";
        public const string T1_Stack = "Task_1_Stack";
        public const string T1_StackSize = "Task_1_Stack_Size";
        public const string T1_R1 = "Task_1_Resource_1";
        public const string T1_R2 = "Task_1_Resource_2";
        public const string T1_R3 = "Task_1_Resource_3";
        public const string T1_R4 = "Task_1_Resource_4";
        public const string T1_R5 = "Task_1_Resource_5";
        public const string T1_R6 = "Task_1_Resource_6";
        public const string T1_R7 = "Task_1_Resource_7";
        public const string T1_R8 = "Task_1_Resource_8";

        public const string T2_Act = "Task_2_Activation";
        public const string T2_Auto = "Task_2_Autostart";
        public const string T2_E1 = "Task_2_Event_1";
        public const string T2_E2 = "Task_2_Event_2";
        public const string T2_E3 = "Task_2_Event_3";
        public const string T2_E4 = "Task_2_Event_4";
        public const string T2_E5 = "Task_2_Event_5";
        public const string T2_E6 = "Task_2_Event_6";
        public const string T2_E7 = "Task_2_Event_7";
        public const string T2_E8 = "Task_2_Event_8";
        public const string T2_Name = "Task_2_Name";
        public const string T2_NumE = "Task_2_Number_Events";
        public const string T2_NumR = "Task_2_Number_Resources";
        public const string T2_Prio = "Task_2_Priority";
        public const string T2_Schedule = "Task_2_Schedule";
        public const string T2_Stack = "Task_2_Stack";
        public const string T2_StackSize = "Task_2_Stack_Size";
        public const string T2_R1 = "Task_2_Resource_1";
        public const string T2_R2 = "Task_2_Resource_2";
        public const string T2_R3 = "Task_2_Resource_3";
        public const string T2_R4 = "Task_2_Resource_4";
        public const string T2_R5 = "Task_2_Resource_5";
        public const string T2_R6 = "Task_2_Resource_6";
        public const string T2_R7 = "Task_2_Resource_7";
        public const string T2_R8 = "Task_2_Resource_8";

        public const string T3_Act = "Task_3_Activation";
        public const string T3_Auto = "Task_3_Autostart";
        public const string T3_E1 = "Task_3_Event_1";
        public const string T3_E2 = "Task_3_Event_2";
        public const string T3_E3 = "Task_3_Event_3";
        public const string T3_E4 = "Task_3_Event_4";
        public const string T3_E5 = "Task_3_Event_5";
        public const string T3_E6 = "Task_3_Event_6";
        public const string T3_E7 = "Task_3_Event_7";
        public const string T3_E8 = "Task_3_Event_8";
        public const string T3_Name = "Task_3_Name";
        public const string T3_NumE = "Task_3_Number_Events";
        public const string T3_NumR = "Task_3_Number_Resources";
        public const string T3_Prio = "Task_3_Priority";
        public const string T3_Schedule = "Task_3_Schedule";
        public const string T3_Stack = "Task_3_Stack";
        public const string T3_StackSize = "Task_3_Stack_Size";
        public const string T3_R1 = "Task_3_Resource_1";
        public const string T3_R2 = "Task_3_Resource_2";
        public const string T3_R3 = "Task_3_Resource_3";
        public const string T3_R4 = "Task_3_Resource_4";
        public const string T3_R5 = "Task_3_Resource_5";
        public const string T3_R6 = "Task_3_Resource_6";
        public const string T3_R7 = "Task_3_Resource_7";
        public const string T3_R8 = "Task_3_Resource_8";

        public const string T4_Act = "Task_4_Activation";
        public const string T4_Auto = "Task_4_Autostart";
        public const string T4_E1 = "Task_4_Event_1";
        public const string T4_E2 = "Task_4_Event_2";
        public const string T4_E3 = "Task_4_Event_3";
        public const string T4_E4 = "Task_4_Event_4";
        public const string T4_E5 = "Task_4_Event_5";
        public const string T4_E6 = "Task_4_Event_6";
        public const string T4_E7 = "Task_4_Event_7";
        public const string T4_E8 = "Task_4_Event_8";
        public const string T4_Name = "Task_4_Name";
        public const string T4_NumE = "Task_4_Number_Events";
        public const string T4_NumR = "Task_4_Number_Resources";
        public const string T4_Prio = "Task_4_Priority";
        public const string T4_Schedule = "Task_4_Schedule";
        public const string T4_Stack = "Task_4_Stack";
        public const string T4_StackSize = "Task_4_Stack_Size";
        public const string T4_R1 = "Task_4_Resource_1";
        public const string T4_R2 = "Task_4_Resource_2";
        public const string T4_R3 = "Task_4_Resource_3";
        public const string T4_R4 = "Task_4_Resource_4";
        public const string T4_R5 = "Task_4_Resource_5";
        public const string T4_R6 = "Task_4_Resource_6";
        public const string T4_R7 = "Task_4_Resource_7";
        public const string T4_R8 = "Task_4_Resource_8";

        public const string T5_Act = "Task_5_Activation";
        public const string T5_Auto = "Task_5_Autostart";
        public const string T5_E1 = "Task_5_Event_1";
        public const string T5_E2 = "Task_5_Event_2";
        public const string T5_E3 = "Task_5_Event_3";
        public const string T5_E4 = "Task_5_Event_4";
        public const string T5_E5 = "Task_5_Event_5";
        public const string T5_E6 = "Task_5_Event_6";
        public const string T5_E7 = "Task_5_Event_7";
        public const string T5_E8 = "Task_5_Event_8";
        public const string T5_Name = "Task_5_Name";
        public const string T5_NumE = "Task_5_Number_Events";
        public const string T5_NumR = "Task_5_Number_Resources";
        public const string T5_Prio = "Task_5_Priority";
        public const string T5_Schedule = "Task_5_Schedule";
        public const string T5_Stack = "Task_5_Stack";
        public const string T5_StackSize = "Task_5_Stack_Size";
        public const string T5_R1 = "Task_5_Resource_1";
        public const string T5_R2 = "Task_5_Resource_2";
        public const string T5_R3 = "Task_5_Resource_3";
        public const string T5_R4 = "Task_5_Resource_4";
        public const string T5_R5 = "Task_5_Resource_5";
        public const string T5_R6 = "Task_5_Resource_6";
        public const string T5_R7 = "Task_5_Resource_7";
        public const string T5_R8 = "Task_5_Resource_8";

        public const string T6_Act = "Task_6_Activation";
        public const string T6_Auto = "Task_6_Autostart";
        public const string T6_E1 = "Task_6_Event_1";
        public const string T6_E2 = "Task_6_Event_2";
        public const string T6_E3 = "Task_6_Event_3";
        public const string T6_E4 = "Task_6_Event_4";
        public const string T6_E5 = "Task_6_Event_5";
        public const string T6_E6 = "Task_6_Event_6";
        public const string T6_E7 = "Task_6_Event_7";
        public const string T6_E8 = "Task_6_Event_8";
        public const string T6_Name = "Task_6_Name";
        public const string T6_NumE = "Task_6_Number_Events";
        public const string T6_NumR = "Task_6_Number_Resources";
        public const string T6_Prio = "Task_6_Priority";
        public const string T6_Schedule = "Task_6_Schedule";
        public const string T6_Stack = "Task_6_Stack";
        public const string T6_StackSize = "Task_6_Stack_Size";
        public const string T6_R1 = "Task_6_Resource_1";
        public const string T6_R2 = "Task_6_Resource_2";
        public const string T6_R3 = "Task_6_Resource_3";
        public const string T6_R4 = "Task_6_Resource_4";
        public const string T6_R5 = "Task_6_Resource_5";
        public const string T6_R6 = "Task_6_Resource_6";
        public const string T6_R7 = "Task_6_Resource_7";
        public const string T6_R8 = "Task_6_Resource_8";

        public const string T7_Act = "Task_7_Activation";
        public const string T7_Auto = "Task_7_Autostart";
        public const string T7_E1 = "Task_7_Event_1";
        public const string T7_E2 = "Task_7_Event_2";
        public const string T7_E3 = "Task_7_Event_3";
        public const string T7_E4 = "Task_7_Event_4";
        public const string T7_E5 = "Task_7_Event_5";
        public const string T7_E6 = "Task_7_Event_6";
        public const string T7_E7 = "Task_7_Event_7";
        public const string T7_E8 = "Task_7_Event_8";
        public const string T7_Name = "Task_7_Name";
        public const string T7_NumE = "Task_7_Number_Events";
        public const string T7_NumR = "Task_7_Number_Resources";
        public const string T7_Prio = "Task_7_Priority";
        public const string T7_Schedule = "Task_7_Schedule";
        public const string T7_Stack = "Task_7_Stack";
        public const string T7_StackSize = "Task_7_Stack_Size";
        public const string T7_R1 = "Task_7_Resource_1";
        public const string T7_R2 = "Task_7_Resource_2";
        public const string T7_R3 = "Task_7_Resource_3";
        public const string T7_R4 = "Task_7_Resource_4";
        public const string T7_R5 = "Task_7_Resource_5";
        public const string T7_R6 = "Task_7_Resource_6";
        public const string T7_R7 = "Task_7_Resource_7";
        public const string T7_R8 = "Task_7_Resource_8";

        public const string T8_Act = "Task_8_Activation";
        public const string T8_Auto = "Task_8_Autostart";
        public const string T8_E1 = "Task_8_Event_1";
        public const string T8_E2 = "Task_8_Event_2";
        public const string T8_E3 = "Task_8_Event_3";
        public const string T8_E4 = "Task_8_Event_4";
        public const string T8_E5 = "Task_8_Event_5";
        public const string T8_E6 = "Task_8_Event_6";
        public const string T8_E7 = "Task_8_Event_7";
        public const string T8_E8 = "Task_8_Event_8";
        public const string T8_Name = "Task_8_Name";
        public const string T8_NumE = "Task_8_Number_Events";
        public const string T8_NumR = "Task_8_Number_Resources";
        public const string T8_Prio = "Task_8_Priority";
        public const string T8_Schedule = "Task_8_Schedule";
        public const string T8_Stack = "Task_8_Stack";
        public const string T8_StackSize = "Task_8_Stack_Size";
        public const string T8_R1 = "Task_8_Resource_1";
        public const string T8_R2 = "Task_8_Resource_2";
        public const string T8_R3 = "Task_8_Resource_3";
        public const string T8_R4 = "Task_8_Resource_4";
        public const string T8_R5 = "Task_8_Resource_5";
        public const string T8_R6 = "Task_8_Resource_6";
        public const string T8_R7 = "Task_8_Resource_7";
        public const string T8_R8 = "Task_8_Resource_8";
    }
    #endregion

    public class ErikaOSParameters
    {
        private readonly ICyInstEdit_v1 m_edit;
        public ErikaOSControl control;
        public ErikaOSTask task;
        public ErikaOSAlarmsCounters alarms;
        public ErikaOSEventsResources events;
        public ErikaOSISRs isrs;

        //Local Parameter Variables
        private bool m_Systick;
        private bool m_Tracer;
        private string m_SystickHandler;
        private bool m_HookStart;
        private bool m_HookShutdown;
        private bool m_HookPretask;
        private bool m_HookPosttask;
        private bool m_HookError;
        private bool m_ResScheduler;
        private bool m_Trace1;
        private bool m_ParamAccess;
        private bool m_MultiStack;
        private bool m_MultiStackIRQ;
        private UInt16 m_IRQStackSize;
        private Int32 m_OSStatus;
        private Int32 m_Kernel;
        private Int32 m_CPU;
        /* Events */
        private Byte m_Number_of_Events;
        private string m_Event_1;
        private string m_Event_2;
        private string m_Event_3;
        private string m_Event_4;
        private string m_Event_5;
        private string m_Event_6;
        private string m_Event_7;
        private string m_Event_8;
        private string m_Event_9;
        private string m_Event_10;
        private string m_Event_11;
        private string m_Event_12;
        private string m_Event_13;
        private string m_Event_14;
        private string m_Event_15;
        private string m_Event_16;
        private string m_Event_17;
        private string m_Event_18;
        private string m_Event_19;
        private string m_Event_20;
        private string m_Event_21;
        private string m_Event_22;
        private string m_Event_23;
        private string m_Event_24;
        private string m_Event_25;
        private string m_Event_26;
        private string m_Event_27;
        private string m_Event_28;
        private string m_Event_29;
        private string m_Event_30;
        private string m_Event_31;
        /* Resources */
        private Byte m_Number_of_Resources;
        private string m_Resource_1;
        private string m_Resource_2;
        private string m_Resource_3;
        private string m_Resource_4;
        private string m_Resource_5;
        private string m_Resource_6;
        private string m_Resource_7;
        private string m_Resource_8;

        /* Counters */
        private byte m_Number_of_Counters;
        private string m_Counter_1_Name;
        private Int32 m_Counter_1_Min_Cycle;
        private Int32 m_Counter_1_Max_Value;
        private Int32 m_Counter_1_Tick;

        private string m_Counter_2_Name;
        private Int32 m_Counter_2_Min_Cycle;
        private Int32 m_Counter_2_Max_Value;
        private Int32 m_Counter_2_Tick;

        private string m_Counter_3_Name;
        private Int32 m_Counter_3_Min_Cycle;
        private Int32 m_Counter_3_Max_Value;
        private Int32 m_Counter_3_Tick;

        private string m_Counter_4_Name;
        private Int32 m_Counter_4_Min_Cycle;
        private Int32 m_Counter_4_Max_Value;
        private Int32 m_Counter_4_Tick;

        /* Alarms */
        private byte m_Number_of_Alarms;
        private Int32 m_Alarm_1_Action;
        private string m_Alarm_1_Callback_Name;
        private Int32 m_Alarm_1_Counter;
        private Int32 m_Alarm_1_Event;
        private string m_Alarm_1_Name;
        private Int32 m_Alarm_1_Task;

        private Int32 m_Alarm_2_Action;
        private string m_Alarm_2_Callback_Name;
        private Int32 m_Alarm_2_Counter;
        private Int32 m_Alarm_2_Event;
        private string m_Alarm_2_Name;
        private Int32 m_Alarm_2_Task;

        private Int32 m_Alarm_3_Action;
        private string m_Alarm_3_Callback_Name;
        private Int32 m_Alarm_3_Counter;
        private Int32 m_Alarm_3_Event;
        private string m_Alarm_3_Name;
        private Int32 m_Alarm_3_Task;

        private Int32 m_Alarm_4_Action;
        private string m_Alarm_4_Callback_Name;
        private Int32 m_Alarm_4_Counter;
        private Int32 m_Alarm_4_Event;
        private string m_Alarm_4_Name;
        private Int32 m_Alarm_4_Task;

        private Int32 m_Alarm_5_Action;
        private string m_Alarm_5_Callback_Name;
        private Int32 m_Alarm_5_Counter;
        private Int32 m_Alarm_5_Event;
        private string m_Alarm_5_Name;
        private Int32 m_Alarm_5_Task;

        private Int32 m_Alarm_6_Action;
        private string m_Alarm_6_Callback_Name;
        private Int32 m_Alarm_6_Counter;
        private Int32 m_Alarm_6_Event;
        private string m_Alarm_6_Name;
        private Int32 m_Alarm_6_Task;

        private Int32 m_Alarm_7_Action;
        private string m_Alarm_7_Callback_Name;
        private Int32 m_Alarm_7_Counter;
        private Int32 m_Alarm_7_Event;
        private string m_Alarm_7_Name;
        private Int32 m_Alarm_7_Task;

        private Int32 m_Alarm_8_Action;
        private string m_Alarm_8_Callback_Name;
        private Int32 m_Alarm_8_Counter;
        private Int32 m_Alarm_8_Event;
        private string m_Alarm_8_Name;
        private Int32 m_Alarm_8_Task;

        /* Tasks */
        private Byte m_Number_of_Tasks;
        //Task 1
        private Byte m_Task_1_Activation;
        private bool m_Task_1_Autostart;
        private Int32 m_Task_1_Event_1;
        private Int32 m_Task_1_Event_2;
        private Int32 m_Task_1_Event_3;
        private Int32 m_Task_1_Event_4;
        private Int32 m_Task_1_Event_5;
        private Int32 m_Task_1_Event_6;
        private Int32 m_Task_1_Event_7;
        private Int32 m_Task_1_Event_8;
        private string m_Task_1_Name;
        private Byte m_Task_1_Number_Events;
        private Byte m_Task_1_Number_Resources;
        private Int32 m_Task_1_Priority;
        private Int32 m_Task_1_Schedule;
        private Int32 m_Task_1_Stack;
        private UInt16 m_Task_1_Stack_Size;
        private Int32 m_Task_1_Resource_1;
        private Int32 m_Task_1_Resource_2;
        private Int32 m_Task_1_Resource_3;
        private Int32 m_Task_1_Resource_4;
        private Int32 m_Task_1_Resource_5;
        private Int32 m_Task_1_Resource_6;
        private Int32 m_Task_1_Resource_7;
        private Int32 m_Task_1_Resource_8;
        //Task 2
        private Byte m_Task_2_Activation;
        private bool m_Task_2_Autostart;
        private Int32 m_Task_2_Event_1;
        private Int32 m_Task_2_Event_2;
        private Int32 m_Task_2_Event_3;
        private Int32 m_Task_2_Event_4;
        private Int32 m_Task_2_Event_5;
        private Int32 m_Task_2_Event_6;
        private Int32 m_Task_2_Event_7;
        private Int32 m_Task_2_Event_8;
        private string m_Task_2_Name;
        private Byte m_Task_2_Number_Events;
        private Byte m_Task_2_Number_Resources;
        private Int32 m_Task_2_Priority;
        private Int32 m_Task_2_Schedule;
        private Int32 m_Task_2_Stack;
        private UInt16 m_Task_2_Stack_Size;
        private Int32 m_Task_2_Resource_1;
        private Int32 m_Task_2_Resource_2;
        private Int32 m_Task_2_Resource_3;
        private Int32 m_Task_2_Resource_4;
        private Int32 m_Task_2_Resource_5;
        private Int32 m_Task_2_Resource_6;
        private Int32 m_Task_2_Resource_7;
        private Int32 m_Task_2_Resource_8;
        //Task 3
        private Byte m_Task_3_Activation;
        private bool m_Task_3_Autostart;
        private Int32 m_Task_3_Event_1;
        private Int32 m_Task_3_Event_2;
        private Int32 m_Task_3_Event_3;
        private Int32 m_Task_3_Event_4;
        private Int32 m_Task_3_Event_5;
        private Int32 m_Task_3_Event_6;
        private Int32 m_Task_3_Event_7;
        private Int32 m_Task_3_Event_8;
        private string m_Task_3_Name;
        private Byte m_Task_3_Number_Events;
        private Byte m_Task_3_Number_Resources;
        private Int32 m_Task_3_Priority;
        private Int32 m_Task_3_Schedule;
        private Int32 m_Task_3_Stack;
        private UInt16 m_Task_3_Stack_Size;
        private Int32 m_Task_3_Resource_1;
        private Int32 m_Task_3_Resource_2;
        private Int32 m_Task_3_Resource_3;
        private Int32 m_Task_3_Resource_4;
        private Int32 m_Task_3_Resource_5;
        private Int32 m_Task_3_Resource_6;
        private Int32 m_Task_3_Resource_7;
        private Int32 m_Task_3_Resource_8;
        //Task 4
        private Byte m_Task_4_Activation;
        private bool m_Task_4_Autostart;
        private Int32 m_Task_4_Event_1;
        private Int32 m_Task_4_Event_2;
        private Int32 m_Task_4_Event_3;
        private Int32 m_Task_4_Event_4;
        private Int32 m_Task_4_Event_5;
        private Int32 m_Task_4_Event_6;
        private Int32 m_Task_4_Event_7;
        private Int32 m_Task_4_Event_8;
        private string m_Task_4_Name;
        private Byte m_Task_4_Number_Events;
        private Byte m_Task_4_Number_Resources;
        private Int32 m_Task_4_Priority;
        private Int32 m_Task_4_Schedule;
        private Int32 m_Task_4_Stack;
        private UInt16 m_Task_4_Stack_Size;
        private Int32 m_Task_4_Resource_1;
        private Int32 m_Task_4_Resource_2;
        private Int32 m_Task_4_Resource_3;
        private Int32 m_Task_4_Resource_4;
        private Int32 m_Task_4_Resource_5;
        private Int32 m_Task_4_Resource_6;
        private Int32 m_Task_4_Resource_7;
        private Int32 m_Task_4_Resource_8;
        //Task 5
        private Byte m_Task_5_Activation;
        private bool m_Task_5_Autostart;
        private Int32 m_Task_5_Event_1;
        private Int32 m_Task_5_Event_2;
        private Int32 m_Task_5_Event_3;
        private Int32 m_Task_5_Event_4;
        private Int32 m_Task_5_Event_5;
        private Int32 m_Task_5_Event_6;
        private Int32 m_Task_5_Event_7;
        private Int32 m_Task_5_Event_8;
        private string m_Task_5_Name;
        private Byte m_Task_5_Number_Events;
        private Byte m_Task_5_Number_Resources;
        private Int32 m_Task_5_Priority;
        private Int32 m_Task_5_Schedule;
        private Int32 m_Task_5_Stack;
        private UInt16 m_Task_5_Stack_Size;
        private Int32 m_Task_5_Resource_1;
        private Int32 m_Task_5_Resource_2;
        private Int32 m_Task_5_Resource_3;
        private Int32 m_Task_5_Resource_4;
        private Int32 m_Task_5_Resource_5;
        private Int32 m_Task_5_Resource_6;
        private Int32 m_Task_5_Resource_7;
        private Int32 m_Task_5_Resource_8;
        //Task 6
        private Byte m_Task_6_Activation;
        private bool m_Task_6_Autostart;
        private Int32 m_Task_6_Event_1;
        private Int32 m_Task_6_Event_2;
        private Int32 m_Task_6_Event_3;
        private Int32 m_Task_6_Event_4;
        private Int32 m_Task_6_Event_5;
        private Int32 m_Task_6_Event_6;
        private Int32 m_Task_6_Event_7;
        private Int32 m_Task_6_Event_8;
        private string m_Task_6_Name;
        private Byte m_Task_6_Number_Events;
        private Byte m_Task_6_Number_Resources;
        private Int32 m_Task_6_Priority;
        private Int32 m_Task_6_Schedule;
        private Int32 m_Task_6_Stack;
        private UInt16 m_Task_6_Stack_Size;
        private Int32 m_Task_6_Resource_1;
        private Int32 m_Task_6_Resource_2;
        private Int32 m_Task_6_Resource_3;
        private Int32 m_Task_6_Resource_4;
        private Int32 m_Task_6_Resource_5;
        private Int32 m_Task_6_Resource_6;
        private Int32 m_Task_6_Resource_7;
        private Int32 m_Task_6_Resource_8;
        //Task 7
        private Byte m_Task_7_Activation;
        private bool m_Task_7_Autostart;
        private Int32 m_Task_7_Event_1;
        private Int32 m_Task_7_Event_2;
        private Int32 m_Task_7_Event_3;
        private Int32 m_Task_7_Event_4;
        private Int32 m_Task_7_Event_5;
        private Int32 m_Task_7_Event_6;
        private Int32 m_Task_7_Event_7;
        private Int32 m_Task_7_Event_8;
        private string m_Task_7_Name;
        private Byte m_Task_7_Number_Events;
        private Byte m_Task_7_Number_Resources;
        private Int32 m_Task_7_Priority;
        private Int32 m_Task_7_Schedule;
        private Int32 m_Task_7_Stack;
        private UInt16 m_Task_7_Stack_Size;
        private Int32 m_Task_7_Resource_1;
        private Int32 m_Task_7_Resource_2;
        private Int32 m_Task_7_Resource_3;
        private Int32 m_Task_7_Resource_4;
        private Int32 m_Task_7_Resource_5;
        private Int32 m_Task_7_Resource_6;
        private Int32 m_Task_7_Resource_7;
        private Int32 m_Task_7_Resource_8;
        //Task 8
        private Byte m_Task_8_Activation;
        private bool m_Task_8_Autostart;
        private Int32 m_Task_8_Event_1;
        private Int32 m_Task_8_Event_2;
        private Int32 m_Task_8_Event_3;
        private Int32 m_Task_8_Event_4;
        private Int32 m_Task_8_Event_5;
        private Int32 m_Task_8_Event_6;
        private Int32 m_Task_8_Event_7;
        private Int32 m_Task_8_Event_8;
        private string m_Task_8_Name;
        private Byte m_Task_8_Number_Events;
        private Byte m_Task_8_Number_Resources;
        private Int32 m_Task_8_Priority;
        private Int32 m_Task_8_Schedule;
        private Int32 m_Task_8_Stack;
        private UInt16 m_Task_8_Stack_Size;
        private Int32 m_Task_8_Resource_1;
        private Int32 m_Task_8_Resource_2;
        private Int32 m_Task_8_Resource_3;
        private Int32 m_Task_8_Resource_4;
        private Int32 m_Task_8_Resource_5;
        private Int32 m_Task_8_Resource_6;
        private Int32 m_Task_8_Resource_7;
        private Int32 m_Task_8_Resource_8;

        //ISR
        private Byte m_Number_of_ISR;

        private string m_ISR_1_Name;
        private Int32 m_ISR_1_Category;
        private Int32 m_ISR_1_Priority;
        private Int32 m_ISR_1_Resource;
        private string m_ISR_2_Name;
        private Int32 m_ISR_2_Category;
        private Int32 m_ISR_2_Priority;
        private Int32 m_ISR_2_Resource;
        private string m_ISR_3_Name;
        private Int32 m_ISR_3_Category;
        private Int32 m_ISR_3_Priority;
        private Int32 m_ISR_3_Resource;
        private string m_ISR_4_Name;
        private Int32 m_ISR_4_Category;
        private Int32 m_ISR_4_Priority;
        private Int32 m_ISR_4_Resource;
        private string m_ISR_5_Name;
        private Int32 m_ISR_5_Category;
        private Int32 m_ISR_5_Priority;
        private Int32 m_ISR_5_Resource;
        private string m_ISR_6_Name;
        private Int32 m_ISR_6_Category;
        private Int32 m_ISR_6_Priority;
        private Int32 m_ISR_6_Resource;
        private string m_ISR_7_Name;
        private Int32 m_ISR_7_Category;
        private Int32 m_ISR_7_Priority;
        private Int32 m_ISR_7_Resource;
        private string m_ISR_8_Name;
        private Int32 m_ISR_8_Category;
        private Int32 m_ISR_8_Priority;
        private Int32 m_ISR_8_Resource;
        private string m_ISR_9_Name;
        private Int32 m_ISR_9_Category;
        private Int32 m_ISR_9_Priority;
        private Int32 m_ISR_9_Resource;
        private string m_ISR_10_Name;
        private Int32 m_ISR_10_Category;
        private Int32 m_ISR_10_Priority;
        private Int32 m_ISR_10_Resource;
        private string m_ISR_11_Name;
        private Int32 m_ISR_11_Category;
        private Int32 m_ISR_11_Priority;
        private Int32 m_ISR_11_Resource;
        private string m_ISR_12_Name;
        private Int32 m_ISR_12_Category;
        private Int32 m_ISR_12_Priority;
        private Int32 m_ISR_12_Resource;
        private string m_ISR_13_Name;
        private Int32 m_ISR_13_Category;
        private Int32 m_ISR_13_Priority;
        private Int32 m_ISR_13_Resource;
        private string m_ISR_14_Name;
        private Int32 m_ISR_14_Category;
        private Int32 m_ISR_14_Priority;
        private Int32 m_ISR_14_Resource;
        private string m_ISR_15_Name;
        private Int32 m_ISR_15_Category;
        private Int32 m_ISR_15_Priority;
        private Int32 m_ISR_15_Resource;
        private string m_ISR_16_Name;
        private Int32 m_ISR_16_Category;
        private Int32 m_ISR_16_Priority;
        private Int32 m_ISR_16_Resource;

        //Iterators
        public Int32 getTaskEvent(UInt16 TaskNumber, UInt16 EventNumber)
        {
            switch(TaskNumber)
            {
                case 1:
                    switch(EventNumber)
                    {
                        case 1:
                            return Task_1_Event_1;
                        case 2:
                            return Task_1_Event_2;
                        case 3:
                            return Task_1_Event_3;
                        case 4:
                            return Task_1_Event_4;
                        case 5:
                            return Task_1_Event_5;
                        case 6:
                            return Task_1_Event_6;
                        case 7:
                            return Task_1_Event_7;
                        case 8:
                            return Task_1_Event_8;
                        default: return -1;
                    }
                case 2:
                    switch (EventNumber)
                    {
                        case 1:
                            return Task_2_Event_1;
                        case 2:
                            return Task_2_Event_2;
                        case 3:
                            return Task_2_Event_3;
                        case 4:
                            return Task_2_Event_4;
                        case 5:
                            return Task_2_Event_5;
                        case 6:
                            return Task_2_Event_6;
                        case 7:
                            return Task_2_Event_7;
                        case 8:
                            return Task_2_Event_8;
                        default: return -1;
                    }
                case 3:
                    switch (EventNumber)
                    {
                        case 1:
                            return Task_3_Event_1;
                        case 2:
                            return Task_3_Event_2;
                        case 3:
                            return Task_3_Event_3;
                        case 4:
                            return Task_3_Event_4;
                        case 5:
                            return Task_3_Event_5;
                        case 6:
                            return Task_3_Event_6;
                        case 7:
                            return Task_3_Event_7;
                        case 8:
                            return Task_3_Event_8;
                        default: return -1;
                    }
                case 4:
                    switch (EventNumber)
                    {
                        case 1:
                            return Task_4_Event_1;
                        case 2:
                            return Task_4_Event_2;
                        case 3:
                            return Task_4_Event_3;
                        case 4:
                            return Task_4_Event_4;
                        case 5:
                            return Task_4_Event_5;
                        case 6:
                            return Task_4_Event_6;
                        case 7:
                            return Task_4_Event_7;
                        case 8:
                            return Task_4_Event_8;
                        default: return -1;
                    }
                case 5:
                    switch (EventNumber)
                    {
                        case 1:
                            return Task_5_Event_1;
                        case 2:
                            return Task_5_Event_2;
                        case 3:
                            return Task_5_Event_3;
                        case 4:
                            return Task_5_Event_4;
                        case 5:
                            return Task_5_Event_5;
                        case 6:
                            return Task_5_Event_6;
                        case 7:
                            return Task_5_Event_7;
                        case 8:
                            return Task_5_Event_8;
                        default: return -1;
                    }
                case 6:
                    switch (EventNumber)
                    {
                        case 1:
                            return Task_6_Event_1;
                        case 2:
                            return Task_6_Event_2;
                        case 3:
                            return Task_6_Event_3;
                        case 4:
                            return Task_6_Event_4;
                        case 5:
                            return Task_6_Event_5;
                        case 6:
                            return Task_6_Event_6;
                        case 7:
                            return Task_6_Event_7;
                        case 8:
                            return Task_6_Event_8;
                        default: return -1;
                    }
                case 7:
                    switch (EventNumber)
                    {
                        case 1:
                            return Task_7_Event_1;
                        case 2:
                            return Task_7_Event_2;
                        case 3:
                            return Task_7_Event_3;
                        case 4:
                            return Task_7_Event_4;
                        case 5:
                            return Task_7_Event_5;
                        case 6:
                            return Task_7_Event_6;
                        case 7:
                            return Task_7_Event_7;
                        case 8:
                            return Task_7_Event_8;
                        default: return -1;
                    }
                case 8:
                    switch (EventNumber)
                    {
                        case 1:
                            return Task_8_Event_1;
                        case 2:
                            return Task_8_Event_2;
                        case 3:
                            return Task_8_Event_3;
                        case 4:
                            return Task_8_Event_4;
                        case 5:
                            return Task_8_Event_5;
                        case 6:
                            return Task_8_Event_6;
                        case 7:
                            return Task_8_Event_7;
                        case 8:
                            return Task_8_Event_8;
                        default: return -1;
                    }
                default: return -1;
            }
        }
        public void setTaskEvent(UInt16 TaskNumber, UInt16 EventNumber, Int32 Event)
        {
            switch (TaskNumber)
            {
                case 1:
                    switch (EventNumber)
                    {
                        case 1:
                            Task_1_Event_1 = Event;
                            return;
                        case 2:
                            Task_1_Event_2 = Event;
                            return;
                        case 3:
                            Task_1_Event_3 = Event;
                            return;
                        case 4:
                            Task_1_Event_4 = Event;
                            return;
                        case 5:
                            Task_1_Event_5 = Event;
                            return;
                        case 6:
                            Task_1_Event_6 = Event;
                            return;
                        case 7:
                            Task_1_Event_7 = Event;
                            return;
                        case 8:
                            Task_1_Event_8 = Event;
                            return;
                        default: return;
                    }
                case 2:
                    switch (EventNumber)
                    {
                        case 1:
                            Task_2_Event_1 = Event;
                            return;
                        case 2:
                            Task_2_Event_2 = Event;
                            return;
                        case 3:
                            Task_2_Event_3 = Event;
                            return;
                        case 4:
                            Task_2_Event_4 = Event;
                            return;
                        case 5:
                            Task_2_Event_5 = Event;
                            return;
                        case 6:
                            Task_2_Event_6 = Event;
                            return;
                        case 7:
                            Task_2_Event_7 = Event;
                            return;
                        case 8:
                            Task_2_Event_8 = Event;
                            return;
                        default: return;
                    }
                case 3:
                    switch (EventNumber)
                    {
                        case 1:
                            Task_3_Event_1 = Event;
                            return;
                        case 2:
                            Task_3_Event_2 = Event;
                            return;
                        case 3:
                            Task_3_Event_3 = Event;
                            return;
                        case 4:
                            Task_3_Event_4 = Event;
                            return;
                        case 5:
                            Task_3_Event_5 = Event;
                            return;
                        case 6:
                            Task_3_Event_6 = Event;
                            return;
                        case 7:
                            Task_3_Event_7 = Event;
                            return;
                        case 8:
                            Task_3_Event_8 = Event;
                            return;
                        default: return;
                    }
                case 4:
                    switch (EventNumber)
                    {
                        case 1:
                            Task_4_Event_1 = Event;
                            return;
                        case 2:
                            Task_4_Event_2 = Event;
                            return;
                        case 3:
                            Task_4_Event_3 = Event;
                            return;
                        case 4:
                            Task_4_Event_4 = Event;
                            return;
                        case 5:
                            Task_4_Event_5 = Event;
                            return;
                        case 6:
                            Task_4_Event_6 = Event;
                            return;
                        case 7:
                            Task_4_Event_7 = Event;
                            return;
                        case 8:
                            Task_4_Event_8 = Event;
                            return;
                        default: return;
                    }
                case 5:
                    switch (EventNumber)
                    {
                        case 1:
                            Task_5_Event_1 = Event;
                            return;
                        case 2:
                            Task_5_Event_2 = Event;
                            return;
                        case 3:
                            Task_5_Event_3 = Event;
                            return;
                        case 4:
                            Task_5_Event_4 = Event;
                            return;
                        case 5:
                            Task_5_Event_5 = Event;
                            return;
                        case 6:
                            Task_5_Event_6 = Event;
                            return;
                        case 7:
                            Task_5_Event_7 = Event;
                            return;
                        case 8:
                            Task_5_Event_8 = Event;
                            return;
                        default: return;
                    }
                case 6:
                    switch (EventNumber)
                    {
                        case 1:
                            Task_6_Event_1 = Event;
                            return;
                        case 2:
                            Task_6_Event_2 = Event;
                            return;
                        case 3:
                            Task_6_Event_3 = Event;
                            return;
                        case 4:
                            Task_6_Event_4 = Event;
                            return;
                        case 5:
                            Task_6_Event_5 = Event;
                            return;
                        case 6:
                            Task_6_Event_6 = Event;
                            return;
                        case 7:
                            Task_6_Event_7 = Event;
                            return;
                        case 8:
                            Task_6_Event_8 = Event;
                            return;
                        default: return;
                    }
                case 7:
                    switch (EventNumber)
                    {
                        case 1:
                            Task_7_Event_1 = Event;
                            return;
                        case 2:
                            Task_7_Event_2 = Event;
                            return;
                        case 3:
                            Task_7_Event_3 = Event;
                            return;
                        case 4:
                            Task_7_Event_4 = Event;
                            return;
                        case 5:
                            Task_7_Event_5 = Event;
                            return;
                        case 6:
                            Task_7_Event_6 = Event;
                            return;
                        case 7:
                            Task_7_Event_7 = Event;
                            return;
                        case 8:
                            Task_7_Event_8 = Event;
                            return;
                        default: return;
                    }
                case 8:
                    switch (EventNumber)
                    {
                        case 1:
                            Task_8_Event_1 = Event;
                            return;
                        case 2:
                            Task_8_Event_2 = Event;
                            return;
                        case 3:
                            Task_8_Event_3 = Event;
                            return;
                        case 4:
                            Task_8_Event_4 = Event;
                            return;
                        case 5:
                            Task_8_Event_5 = Event;
                            return;
                        case 6:
                            Task_8_Event_6 = Event;
                            return;
                        case 7:
                            Task_8_Event_7 = Event;
                            return;
                        case 8:
                            Task_8_Event_8 = Event;
                            return;
                        default: return;
                    }
                default:
                    return;
            }
        }

        public string getErikaEventName(UInt16 Index)
        {
            switch(Index)
            {
                case 1:
                    return m_Event_1;
                case 2:
                    return m_Event_2;
                case 3:
                    return m_Event_3;
                case 4:
                    return m_Event_4;
                case 5:
                    return m_Event_5;
                case 6:
                    return m_Event_6;
                case 7:
                    return m_Event_7;
                case 8:
                    return m_Event_8;
                case 9:
                    return m_Event_9;
                case 10:
                    return m_Event_10;
                case 11:
                    return m_Event_11;
                case 12:
                    return m_Event_12;
                case 13:
                    return m_Event_13;
                case 14:
                    return m_Event_14;
                case 15:
                    return m_Event_15;
                case 16:
                    return m_Event_16;
                case 17:
                    return m_Event_17;
                case 18:
                    return m_Event_18;
                case 19:
                    return m_Event_19;
                case 20:
                    return m_Event_20;
                case 21:
                    return m_Event_21;
                case 22:
                    return m_Event_22;
                case 23:
                    return m_Event_23;
                case 24:
                    return m_Event_24;
                case 25:
                    return m_Event_25;
                case 26:
                    return m_Event_26;
                case 27:
                    return m_Event_27;
                case 28:
                    return m_Event_28;
                case 29:
                    return m_Event_29;
                case 30:
                    return m_Event_30;
                case 31:
                    return m_Event_31;
                default:
                    return "\0";
            }
        }        

        public void setErikaEvent(Int32 EventNumber, string Name)
        {
            switch(EventNumber)
            {
                case 1:
                    Event_1 = Name;
                    return;
                case 2:
                    Event_2 = Name;
                    return;
                case 3:
                    Event_3 = Name;
                    return;
                case 4:
                    Event_4 = Name;
                    return;
                case 5:
                    Event_5 = Name;
                    return;
                case 6:
                    Event_6 = Name;
                    return;
                case 7:
                    Event_7 = Name;
                    return;
                case 8:
                    Event_8 = Name;
                    return;
                case 9:
                    Event_9 = Name;
                    return;
                case 10:
                    Event_10 = Name;
                    return;
                case 11:
                    Event_11 = Name;
                    return;
                case 12:
                    Event_12 = Name;
                    return;
                case 13:
                    Event_13 = Name;
                    return;
                case 14:
                    Event_14 = Name;
                    return;
                case 15:
                    Event_15 = Name;
                    return;
                case 16:
                    Event_16 = Name;
                    return;
                case 17:
                    Event_17 = Name;
                    return;
                case 18:
                    Event_18 = Name;
                    return;
                case 19:
                    Event_19 = Name;
                    return;
                case 20:
                    Event_20 = Name;
                    return;
                case 21:
                    Event_21 = Name;
                    return;
                case 22:
                    Event_22 = Name;
                    return;
                case 23:
                    Event_23 = Name;
                    return;
                case 24:
                    Event_24 = Name;
                    return;
                case 25:
                    Event_25 = Name;
                    return;
                case 26:
                    Event_26 = Name;
                    return;
                case 27:
                    Event_27 = Name;
                    return;
                case 28:
                    Event_28 = Name;
                    return;
                case 29:
                    Event_29 = Name;
                    return;
                case 30:
                    Event_30 = Name;
                    return;
                case 31:
                    Event_31 = Name;
                    return;
                default:
                    return;
            }
        }
        public void setErikaResource(Int32 ResourceNumber, string Name)
        {
            switch (ResourceNumber)
            {
                case 1:
                    Resource_1 = Name;
                    return;
                case 2:
                    Resource_2 = Name;
                    return;
                case 3:
                    Resource_3 = Name;
                    return;
                case 4:
                    Resource_4 = Name;
                    return;
                case 5:
                    Resource_5 = Name;
                    return;
                case 6:
                    Resource_6 = Name;
                    return;
                case 7:
                    Resource_7 = Name;
                    return;
                case 8:
                    Resource_8 = Name;
                    return;
                default:
                    return;
            }
        }

        public string getErikaResource(Int32 ResourceNumber)
        {
            switch (ResourceNumber)
            {
                case 1:
                    return m_Resource_1;
                case 2:
                    return m_Resource_2;
                case 3:
                    return m_Resource_3;
                case 4:
                    return m_Resource_4;
                case 5:
                    return m_Resource_5;
                case 6:
                    return m_Resource_6;
                case 7:
                    return m_Resource_7;
                case 8:
                    return m_Resource_8;
                default:
                    return "/0";
            }
        }
        public void setTaskResource(UInt16 TaskNumber, UInt16 ResourceNumber, Int32 Resource)
        {
            switch (TaskNumber)
            {
                case 1:
                    switch (ResourceNumber)
                    {
                        case 1:
                            Task_1_Resource_1 = Resource;
                            return;
                        case 2:
                            Task_1_Resource_2 = Resource;
                            return;
                        case 3:
                            Task_1_Resource_3 = Resource;
                            return;
                        case 4:
                            Task_1_Resource_4 = Resource;
                            return;
                        case 5:
                            Task_1_Resource_5 = Resource;
                            return;
                        case 6:
                            Task_1_Resource_6 = Resource;
                            return;
                        case 7:
                            Task_1_Resource_7 = Resource;
                            return;
                        case 8:
                            Task_1_Resource_8 = Resource;
                            return;
                        default: return;
                    }
                case 2:
                    switch (ResourceNumber)
                    {
                        case 1:
                            Task_2_Resource_1 = Resource;
                            return;
                        case 2:
                            Task_2_Resource_2 = Resource;
                            return;
                        case 3:
                            Task_2_Resource_3 = Resource;
                            return;
                        case 4:
                            Task_2_Resource_4 = Resource;
                            return;
                        case 5:
                            Task_2_Resource_5 = Resource;
                            return;
                        case 6:
                            Task_2_Resource_6 = Resource;
                            return;
                        case 7:
                            Task_2_Resource_7 = Resource;
                            return;
                        case 8:
                            Task_2_Resource_8 = Resource;
                            return;
                        default: return;
                    }
                case 3:
                    switch (ResourceNumber)
                    {
                        case 1:
                            Task_3_Resource_1 = Resource;
                            return;
                        case 2:
                            Task_3_Resource_2 = Resource;
                            return;
                        case 3:
                            Task_3_Resource_3 = Resource;
                            return;
                        case 4:
                            Task_3_Resource_4 = Resource;
                            return;
                        case 5:
                            Task_3_Resource_5 = Resource;
                            return;
                        case 6:
                            Task_3_Resource_6 = Resource;
                            return;
                        case 7:
                            Task_3_Resource_7 = Resource;
                            return;
                        case 8:
                            Task_3_Resource_8 = Resource;
                            return;
                        default: return;
                    }
                case 4:
                    switch (ResourceNumber)
                    {
                        case 1:
                            Task_4_Resource_1 = Resource;
                            return;
                        case 2:
                            Task_4_Resource_2 = Resource;
                            return;
                        case 3:
                            Task_4_Resource_3 = Resource;
                            return;
                        case 4:
                            Task_4_Resource_4 = Resource;
                            return;
                        case 5:
                            Task_4_Resource_5 = Resource;
                            return;
                        case 6:
                            Task_4_Resource_6 = Resource;
                            return;
                        case 7:
                            Task_4_Resource_7 = Resource;
                            return;
                        case 8:
                            Task_4_Resource_8 = Resource;
                            return;
                        default: return;
                    }
                case 5:
                    switch (ResourceNumber)
                    {
                        case 1:
                            Task_5_Resource_1 = Resource;
                            return;
                        case 2:
                            Task_5_Resource_2 = Resource;
                            return;
                        case 3:
                            Task_5_Resource_3 = Resource;
                            return;
                        case 4:
                            Task_5_Resource_4 = Resource;
                            return;
                        case 5:
                            Task_5_Resource_5 = Resource;
                            return;
                        case 6:
                            Task_5_Resource_6 = Resource;
                            return;
                        case 7:
                            Task_5_Resource_7 = Resource;
                            return;
                        case 8:
                            Task_5_Resource_8 = Resource;
                            return;
                        default: return;
                    }
                case 6:
                    switch (ResourceNumber)
                    {
                        case 1:
                            Task_6_Resource_1 = Resource;
                            return;
                        case 2:
                            Task_6_Resource_2 = Resource;
                            return;
                        case 3:
                            Task_6_Resource_3 = Resource;
                            return;
                        case 4:
                            Task_6_Resource_4 = Resource;
                            return;
                        case 5:
                            Task_6_Resource_5 = Resource;
                            return;
                        case 6:
                            Task_6_Resource_6 = Resource;
                            return;
                        case 7:
                            Task_6_Resource_7 = Resource;
                            return;
                        case 8:
                            Task_6_Resource_8 = Resource;
                            return;
                        default: return;
                    }
                case 7:
                    switch (ResourceNumber)
                    {
                        case 1:
                            Task_7_Resource_1 = Resource;
                            return;
                        case 2:
                            Task_7_Resource_2 = Resource;
                            return;
                        case 3:
                            Task_7_Resource_3 = Resource;
                            return;
                        case 4:
                            Task_7_Resource_4 = Resource;
                            return;
                        case 5:
                            Task_7_Resource_5 = Resource;
                            return;
                        case 6:
                            Task_7_Resource_6 = Resource;
                            return;
                        case 7:
                            Task_7_Resource_7 = Resource;
                            return;
                        case 8:
                            Task_7_Resource_8 = Resource;
                            return;
                        default: return;
                    }
                case 8:
                    switch (ResourceNumber)
                    {
                        case 1:
                            Task_8_Resource_1 = Resource;
                            return;
                        case 2:
                            Task_8_Resource_2 = Resource;
                            return;
                        case 3:
                            Task_8_Resource_3 = Resource;
                            return;
                        case 4:
                            Task_8_Resource_4 = Resource;
                            return;
                        case 5:
                            Task_8_Resource_5 = Resource;
                            return;
                        case 6:
                            Task_8_Resource_6 = Resource;
                            return;
                        case 7:
                            Task_8_Resource_7 = Resource;
                            return;
                        case 8:
                            Task_8_Resource_8 = Resource;
                            return;
                        default: return;
                    }
                default:
                    return;
            }
        }

        public Int32 getTaskResource(UInt16 TaskNumber, UInt16 ResourceNumber)
        {
            switch (TaskNumber)
            {
                case 1:
                    switch (ResourceNumber)
                    {
                        case 1:
                            return Task_1_Resource_1;
                        case 2:
                            return Task_1_Resource_2;
                        case 3:
                            return Task_1_Resource_3;
                        case 4:
                            return Task_1_Resource_4;
                        case 5:
                            return Task_1_Resource_5;
                        case 6:
                            return Task_1_Resource_6;
                        case 7:
                            return Task_1_Resource_7;
                        case 8:
                            return Task_1_Resource_8;
                        default: return -1;
                    }
                case 2:
                    switch (ResourceNumber)
                    {
                        case 1:
                            return Task_2_Resource_1;
                        case 2:
                            return Task_2_Resource_2;
                        case 3:
                            return Task_2_Resource_3;
                        case 4:
                            return Task_2_Resource_4;
                        case 5:
                            return Task_2_Resource_5;
                        case 6:
                            return Task_2_Resource_6;
                        case 7:
                            return Task_2_Resource_7;
                        case 8:
                            return Task_2_Resource_8;
                        default: return -1;
                    }
                case 3:
                    switch (ResourceNumber)
                    {
                        case 1:
                            return Task_3_Resource_1;
                        case 2:
                            return Task_3_Resource_2;
                        case 3:
                            return Task_3_Resource_3;
                        case 4:
                            return Task_3_Resource_4;
                        case 5:
                            return Task_3_Resource_5;
                        case 6:
                            return Task_3_Resource_6;
                        case 7:
                            return Task_3_Resource_7;
                        case 8:
                            return Task_3_Resource_8;
                        default: return -1;
                    }
                case 4:
                    switch (ResourceNumber)
                    {
                        case 1:
                            return Task_4_Resource_1;
                        case 2:
                            return Task_4_Resource_2;
                        case 3:
                            return Task_4_Resource_3;
                        case 4:
                            return Task_4_Resource_4;
                        case 5:
                            return Task_4_Resource_5;
                        case 6:
                            return Task_4_Resource_6;
                        case 7:
                            return Task_4_Resource_7;
                        case 8:
                            return Task_4_Resource_8;
                        default: return -1;
                    }
                case 5:
                    switch (ResourceNumber)
                    {
                        case 1:
                            return Task_5_Resource_1;
                        case 2:
                            return Task_5_Resource_2;
                        case 3:
                            return Task_5_Resource_3;
                        case 4:
                            return Task_5_Resource_4;
                        case 5:
                            return Task_5_Resource_5;
                        case 6:
                            return Task_5_Resource_6;
                        case 7:
                            return Task_5_Resource_7;
                        case 8:
                            return Task_5_Resource_8;
                        default: return -1;
                    }
                case 6:
                    switch (ResourceNumber)
                    {
                        case 1:
                            return Task_6_Resource_1;
                        case 2:
                            return Task_6_Resource_2;
                        case 3:
                            return Task_6_Resource_3;
                        case 4:
                            return Task_6_Resource_4;
                        case 5:
                            return Task_6_Resource_5;
                        case 6:
                            return Task_6_Resource_6;
                        case 7:
                            return Task_6_Resource_7;
                        case 8:
                            return Task_6_Resource_8;
                        default: return -1;
                    }
                case 7:
                    switch (ResourceNumber)
                    {
                        case 1:
                            return Task_7_Resource_1;
                        case 2:
                            return Task_7_Resource_2;
                        case 3:
                            return Task_7_Resource_3;
                        case 4:
                            return Task_7_Resource_4;
                        case 5:
                            return Task_7_Resource_5;
                        case 6:
                            return Task_7_Resource_6;
                        case 7:
                            return Task_7_Resource_7;
                        case 8:
                            return Task_7_Resource_8;
                        default: return -1;
                    }
                case 8:
                    switch (ResourceNumber)
                    {
                        case 1:
                            return Task_8_Resource_1;
                        case 2:
                            return Task_8_Resource_2;
                        case 3:
                            return Task_8_Resource_3;
                        case 4:
                            return Task_8_Resource_4;
                        case 5:
                            return Task_8_Resource_5;
                        case 6:
                            return Task_8_Resource_6;
                        case 7:
                            return Task_8_Resource_7;
                        case 8:
                            return Task_8_Resource_8;
                        default: return -1;
                    }
                default: return -1;
            }
        }

        public string getCounterName(Int32 Counter)
        {
            switch (Counter)
            {
                case 1:
                    return m_Counter_1_Name;
                case 2:
                    return m_Counter_2_Name;
                case 3:
                    return m_Counter_3_Name;
                case 4:
                    return m_Counter_4_Name;
                default:
                    return "/0";
            }
        }

        public String getTaskName(Int32 Index)
        {
            switch(Index)
            {
                case 1:
                    return m_Task_1_Name;
                case 2:
                    return m_Task_2_Name;
                case 3:
                    return m_Task_3_Name;
                case 4:
                    return m_Task_4_Name;
                case 5:
                    return m_Task_5_Name;
                case 6:
                    return m_Task_6_Name;
                case 7:
                    return m_Task_7_Name;
                case 8:
                    return m_Task_8_Name;
                default:
                    return "\0";
            }
        }

        public Int32 getCounterMin(Int32 Counter)
        {
            switch (Counter)
            {
                case 1:
                    return m_Counter_1_Min_Cycle;
                case 2:
                    return m_Counter_2_Min_Cycle;
                case 3:
                    return m_Counter_3_Min_Cycle;
                case 4:
                    return m_Counter_4_Min_Cycle;
                default:
                    return -1;
            }
        }

        public Int32 getCounterMax (Int32 Counter)
        {
            switch (Counter)
            {
                case 1:
                    return m_Counter_1_Max_Value;
                case 2:
                    return m_Counter_2_Max_Value;
                case 3:
                    return m_Counter_3_Max_Value;
                case 4:
                    return m_Counter_4_Max_Value;
                default:
                    return -1;
            }
        }

        public Int32 getCounterTick(Int32 Counter)
        {
            switch (Counter)
            {
                case 1:
                    return m_Counter_1_Tick;
                case 2:
                    return m_Counter_2_Tick;
                case 3:
                    return m_Counter_3_Tick;
                case 4:
                    return m_Counter_4_Tick;
                default:
                    return -1;
            }
        }


        //Get Set Function for each parameter
        #region Class Properties
        public bool USE_SYSTICK
        {
            get { return m_Systick; }
            set
            {
                m_Systick = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.Systick, m_Systick.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool USE_TRACER
        {
            get { return m_Tracer; }
            set
            {
                m_Tracer = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.Tracer, m_Tracer.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        
        public string Systick_Handler_Name
        {
            get { return m_SystickHandler; }
            set
            {
                m_SystickHandler = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.SystickHandler, m_SystickHandler);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool USE_STARTUP_HOOK
        {
            get { return m_HookStart; }
            set
            {
                m_HookStart = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.Hook_Start, m_HookStart.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool USE_SHUTDOWN_HOOK
        {
            get { return m_HookShutdown; }
            set
            {
                m_HookShutdown = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.Hook_Shutdown, m_HookShutdown.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool USE_RES_SCHEDULER
        {
            get { return m_ResScheduler; }
            set
            {
                m_ResScheduler = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.Res_Scheduler, m_ResScheduler.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool USE_TRACE1
        {
            get { return m_Trace1; }
            set
            {
                m_Trace1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.Trace1, m_Trace1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        
        public bool USE_PRETASK_HOOK
        {
            get { return m_HookPretask; }
            set
            {
                m_HookPretask = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.Hook_Pretask, m_HookPretask.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool USE_POSTTASK_HOOK
        {
            get { return m_HookPosttask; }
            set
            {
                m_HookPosttask = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.Hook_Posttask, m_HookPosttask.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool USE_PARAMETER_ACCESS
        {
            get { return m_ParamAccess; }
            set
            {
                m_ParamAccess = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.Param_Access, m_ParamAccess.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        
        public bool USE_ERROR_HOOK
        {
            get { return m_HookError; }
            set
            {
                m_HookError = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.Hook_Error, m_HookError.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool MULTI_STACK
        {
            get { return m_MultiStack; }
            set
            {
                m_MultiStack = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.MultiStack, m_MultiStack.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool MULTI_STACK_IRQ
        {
            get { return m_MultiStackIRQ; }
            set
            {
                m_MultiStackIRQ = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.MultiStackIRQ, m_MultiStackIRQ.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public UInt16 MULTI_STACK_IRQ_SIZE
        {
            get { return m_IRQStackSize; }
            set
            {
                m_IRQStackSize = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.IRQStackSize, m_IRQStackSize.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 STATUS
        {
            get { return m_OSStatus; }
            set
            {
                m_OSStatus = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.OSStatus, m_OSStatus.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 KERNEL_TYPE
        {
            get { return m_Kernel; }
            set
            {
                m_Kernel = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.Kernel, m_Kernel.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 CPU_TYPE
        {
            get { return m_CPU; }
            set
            {
                m_CPU = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.CPU, m_CPU.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Byte Number_of_Events
        {
            get { return m_Number_of_Events; }
            set
            {
                m_Number_of_Events = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.NumEvents, m_Number_of_Events.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Event_1
        {
            get { return m_Event_1; }
            set
            {
                m_Event_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E1, m_Event_1);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_2
        {
            get { return m_Event_2; }
            set
            {
                m_Event_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E2, m_Event_2);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_3
        {
            get { return m_Event_3; }
            set
            {
                m_Event_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E3, m_Event_3);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_4
        {
            get { return m_Event_4; }
            set
            {
                m_Event_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E4, m_Event_4);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_5
        {
            get { return m_Event_5; }
            set
            {
                m_Event_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E5, m_Event_5);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_6
        {
            get { return m_Event_6; }
            set
            {
                m_Event_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E6, m_Event_6);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_7
        {
            get { return m_Event_7; }
            set
            {
                m_Event_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E7, m_Event_7);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_8
        {
            get { return m_Event_8; }
            set
            {
                m_Event_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E8, m_Event_8);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_9
        {
            get { return m_Event_9; }
            set
            {
                m_Event_9 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E9, m_Event_9);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_10
        {
            get { return m_Event_10; }
            set
            {
                m_Event_10 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E10, m_Event_10);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_11
        {
            get { return m_Event_11; }
            set
            {
                m_Event_11 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E11, m_Event_11);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_12
        {
            get { return m_Event_12; }
            set
            {
                m_Event_12 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E12, m_Event_12);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_13
        {
            get { return m_Event_13; }
            set
            {
                m_Event_13 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E13, m_Event_13);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_14
        {
            get { return m_Event_14; }
            set
            {
                m_Event_14 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E14, m_Event_14);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_15
        {
            get { return m_Event_15; }
            set
            {
                m_Event_15 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E15, m_Event_15);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_16
        {
            get { return m_Event_16; }
            set
            {
                m_Event_16 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E16, m_Event_16);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_17
        {
            get { return m_Event_17; }
            set
            {
                m_Event_17 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E17, m_Event_17);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_18
        {
            get { return m_Event_18; }
            set
            {
                m_Event_18 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E18, m_Event_18);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_19
        {
            get { return m_Event_19; }
            set
            {
                m_Event_19 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E19, m_Event_19);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_20
        {
            get { return m_Event_20; }
            set
            {
                m_Event_20 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E20, m_Event_20);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_21
        {
            get { return m_Event_21; }
            set
            {
                m_Event_21 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E21, m_Event_21);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_22
        {
            get { return m_Event_22; }
            set
            {
                m_Event_22 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E22, m_Event_22);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_23
        {
            get { return m_Event_23; }
            set
            {
                m_Event_23 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E23, m_Event_23);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_24
        {
            get { return m_Event_24; }
            set
            {
                m_Event_24 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E24, m_Event_24);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_25
        {
            get { return m_Event_25; }
            set
            {
                m_Event_25 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E25, m_Event_25);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_26
        {
            get { return m_Event_26; }
            set
            {
                m_Event_26 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E26, m_Event_26);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_27
        {
            get { return m_Event_27; }
            set
            {
                m_Event_27 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E27, m_Event_27);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_28
        {
            get { return m_Event_28; }
            set
            {
                m_Event_28 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E1, m_Event_28);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_29
        {
            get { return m_Event_29; }
            set
            {
                m_Event_29 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E29, m_Event_29);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_30
        {
            get { return m_Event_30; }
            set
            {
                m_Event_30 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E30, m_Event_30);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Event_31
        {
            get { return m_Event_31; }
            set
            {
                m_Event_31 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.E31, m_Event_31);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Byte Number_of_Resources
        {
            get { return m_Number_of_Resources; }
            set
            {
                m_Number_of_Resources = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.NumResources, m_Number_of_Resources.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Resource_1
        {
            get { return m_Resource_1; }
            set
            {
                m_Resource_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.R1, m_Resource_1);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Resource_2
        {
            get { return m_Resource_2; }
            set
            {
                m_Resource_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.R2, m_Resource_2);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Resource_3
        {
            get { return m_Resource_3; }
            set
            {
                m_Resource_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.R3, m_Resource_3);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Resource_4
        {
            get { return m_Resource_4; }
            set
            {
                m_Resource_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.R4, m_Resource_4);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Resource_5
        {
            get { return m_Resource_5; }
            set
            {
                m_Resource_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.R5, m_Resource_5);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Resource_6
        {
            get { return m_Resource_6; }
            set
            {
                m_Resource_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.R6, m_Resource_6);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Resource_7
        {
            get { return m_Resource_7; }
            set
            {
                m_Resource_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.R7, m_Resource_7);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Resource_8
        {
            get { return m_Resource_8; }
            set
            {
                m_Resource_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.R8, m_Resource_8);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Byte Number_of_Counters
        {
            get { return m_Number_of_Counters; }
            set
            {
                m_Number_of_Counters = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.NumCounters, m_Number_of_Counters.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Counter_1_Name
        {
            get { return m_Counter_1_Name; }
            set
            {
                m_Counter_1_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C1_Name, m_Counter_1_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_1_Min_Cycle
        {
            get { return m_Counter_1_Min_Cycle; }
            set
            {
                m_Counter_1_Min_Cycle = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C1_Min, m_Counter_1_Min_Cycle.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_1_Max_Value
        {
            get { return m_Counter_1_Max_Value; }
            set
            {
                m_Counter_1_Max_Value = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C1_Max, m_Counter_1_Max_Value.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_1_Tick
        {
            get { return m_Counter_1_Tick; }
            set
            {
                m_Counter_1_Tick = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C1_Tick, m_Counter_1_Tick.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Counter_2_Name
        {
            get { return m_Counter_2_Name; }
            set
            {
                m_Counter_2_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C2_Name, m_Counter_2_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_2_Min_Cycle
        {
            get { return m_Counter_2_Min_Cycle; }
            set
            {
                m_Counter_2_Min_Cycle = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C2_Min, m_Counter_2_Min_Cycle.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_2_Max_Value
        {
            get { return m_Counter_2_Max_Value; }
            set
            {
                m_Counter_2_Max_Value = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C2_Max, m_Counter_2_Max_Value.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_2_Tick
        {
            get { return m_Counter_2_Tick; }
            set
            {
                m_Counter_2_Tick = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C2_Tick, m_Counter_2_Tick.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Counter_3_Name
        {
            get { return m_Counter_3_Name; }
            set
            {
                m_Counter_3_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C3_Name, m_Counter_3_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_3_Min_Cycle
        {
            get { return m_Counter_3_Min_Cycle; }
            set
            {
                m_Counter_3_Min_Cycle = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C3_Min, m_Counter_3_Min_Cycle.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_3_Max_Value
        {
            get { return m_Counter_3_Max_Value; }
            set
            {
                m_Counter_3_Max_Value = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C3_Max, m_Counter_3_Max_Value.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_3_Tick
        {
            get { return m_Counter_3_Tick; }
            set
            {
                m_Counter_3_Tick = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C3_Tick, m_Counter_3_Tick.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Counter_4_Name
        {
            get { return m_Counter_4_Name; }
            set
            {
                m_Counter_4_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C4_Name, m_Counter_4_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_4_Min_Cycle
        {
            get { return m_Counter_4_Min_Cycle; }
            set
            {
                m_Counter_4_Min_Cycle = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C4_Min, m_Counter_4_Min_Cycle.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_4_Max_Value
        {
            get { return m_Counter_4_Max_Value; }
            set
            {
                m_Counter_4_Max_Value = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C4_Max, m_Counter_4_Max_Value.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Counter_4_Tick
        {
            get { return m_Counter_4_Tick; }
            set
            {
                m_Counter_4_Tick = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.C4_Tick, m_Counter_4_Tick.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Byte Number_of_Alarms
        {
            get { return m_Number_of_Alarms; }
            set
            {
                m_Number_of_Alarms = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.NumAlarms, m_Number_of_Alarms.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Byte Number_of_ISR
        {
            get { return m_Number_of_ISR; }
            set
            {
                m_Number_of_ISR = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.NumISRs, m_Number_of_ISR.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_1_Action
        {
            get { return m_Alarm_1_Action; }
            set
            {
                m_Alarm_1_Action = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A1_Action, m_Alarm_1_Action.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Alarm_1_Task
        {
            get { return m_Alarm_1_Task; }
            set
            {
                m_Alarm_1_Task = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A1_Task, m_Alarm_1_Task.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_1_Event
        {
            get { return m_Alarm_1_Event; }
            set
            {
                m_Alarm_1_Event = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A1_Event, m_Alarm_1_Event.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_1_Counter
        {
            get { return m_Alarm_1_Counter; }
            set
            {
                m_Alarm_1_Counter = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A1_Counter, m_Alarm_1_Counter.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_1_Name
        {
            get { return m_Alarm_1_Name; }
            set
            {
                m_Alarm_1_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A1_Name, m_Alarm_1_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_1_Callback
        {
            get { return m_Alarm_1_Callback_Name; }
            set
            {
                m_Alarm_1_Callback_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A1_Callback, m_Alarm_1_Callback_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_2_Action
        {
            get { return m_Alarm_2_Action; }
            set
            {
                m_Alarm_2_Action = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A2_Action, m_Alarm_2_Action.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Alarm_2_Task
        {
            get { return m_Alarm_2_Task; }
            set
            {
                m_Alarm_2_Task = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A2_Task, m_Alarm_2_Task.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_2_Event
        {
            get { return m_Alarm_2_Event; }
            set
            {
                m_Alarm_2_Event = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A2_Event, m_Alarm_2_Event.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_2_Counter
        {
            get { return m_Alarm_2_Counter; }
            set
            {
                m_Alarm_2_Counter = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A2_Counter, m_Alarm_2_Counter.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_2_Name
        {
            get { return m_Alarm_2_Name; }
            set
            {
                m_Alarm_2_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A2_Name, m_Alarm_2_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_2_Callback
        {
            get { return m_Alarm_2_Callback_Name; }
            set
            {
                m_Alarm_2_Callback_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A2_Callback, m_Alarm_2_Callback_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_3_Action
        {
            get { return m_Alarm_3_Action; }
            set
            {
                m_Alarm_3_Action = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A3_Action, m_Alarm_3_Action.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Alarm_3_Task
        {
            get { return m_Alarm_3_Task; }
            set
            {
                m_Alarm_3_Task = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A3_Task, m_Alarm_3_Task.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_3_Event
        {
            get { return m_Alarm_3_Event; }
            set
            {
                m_Alarm_3_Event = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A3_Event, m_Alarm_3_Event.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_3_Counter
        {
            get { return m_Alarm_3_Counter; }
            set
            {
                m_Alarm_3_Counter = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A3_Counter, m_Alarm_3_Counter.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_3_Name
        {
            get { return m_Alarm_3_Name; }
            set
            {
                m_Alarm_3_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A3_Name, m_Alarm_3_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_3_Callback
        {
            get { return m_Alarm_3_Callback_Name; }
            set
            {
                m_Alarm_3_Callback_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A3_Callback, m_Alarm_3_Callback_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_4_Action
        {
            get { return m_Alarm_4_Action; }
            set
            {
                m_Alarm_4_Action = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A4_Action, m_Alarm_4_Action.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Alarm_4_Task
        {
            get { return m_Alarm_4_Task; }
            set
            {
                m_Alarm_4_Task = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A4_Task, m_Alarm_4_Task.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_4_Event
        {
            get { return m_Alarm_4_Event; }
            set
            {
                m_Alarm_4_Event = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A4_Event, m_Alarm_4_Event.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_4_Counter
        {
            get { return m_Alarm_4_Counter; }
            set
            {
                m_Alarm_4_Counter = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A4_Counter, m_Alarm_4_Counter.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_4_Name
        {
            get { return m_Alarm_4_Name; }
            set
            {
                m_Alarm_4_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A4_Name, m_Alarm_4_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_4_Callback
        {
            get { return m_Alarm_4_Callback_Name; }
            set
            {
                m_Alarm_4_Callback_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A4_Callback, m_Alarm_4_Callback_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_5_Action
        {
            get { return m_Alarm_5_Action; }
            set
            {
                m_Alarm_5_Action = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A5_Action, m_Alarm_5_Action.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Alarm_5_Task
        {
            get { return m_Alarm_5_Task; }
            set
            {
                m_Alarm_5_Task = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A5_Task, m_Alarm_5_Task.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_5_Event
        {
            get { return m_Alarm_5_Event; }
            set
            {
                m_Alarm_5_Event = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A5_Event, m_Alarm_5_Event.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_5_Counter
        {
            get { return m_Alarm_5_Counter; }
            set
            {
                m_Alarm_5_Counter = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A5_Counter, m_Alarm_5_Counter.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_5_Name
        {
            get { return m_Alarm_5_Name; }
            set
            {
                m_Alarm_5_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A5_Name, m_Alarm_5_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_5_Callback
        {
            get { return m_Alarm_5_Callback_Name; }
            set
            {
                m_Alarm_5_Callback_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A5_Callback, m_Alarm_5_Callback_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_6_Action
        {
            get { return m_Alarm_6_Action; }
            set
            {
                m_Alarm_6_Action = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A6_Action, m_Alarm_6_Action.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Alarm_6_Task
        {
            get { return m_Alarm_6_Task; }
            set
            {
                m_Alarm_6_Task = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A6_Task, m_Alarm_6_Task.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_6_Event
        {
            get { return m_Alarm_6_Event; }
            set
            {
                m_Alarm_6_Event = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A6_Event, m_Alarm_6_Event.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_6_Counter
        {
            get { return m_Alarm_6_Counter; }
            set
            {
                m_Alarm_6_Counter = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A6_Counter, m_Alarm_6_Counter.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_6_Name
        {
            get { return m_Alarm_6_Name; }
            set
            {
                m_Alarm_6_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A6_Name, m_Alarm_6_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_6_Callback
        {
            get { return m_Alarm_6_Callback_Name; }
            set
            {
                m_Alarm_6_Callback_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A6_Callback, m_Alarm_6_Callback_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_7_Action
        {
            get { return m_Alarm_7_Action; }
            set
            {
                m_Alarm_7_Action = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A7_Action, m_Alarm_7_Action.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Alarm_7_Task
        {
            get { return m_Alarm_7_Task; }
            set
            {
                m_Alarm_7_Task = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A7_Task, m_Alarm_7_Task.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_7_Event
        {
            get { return m_Alarm_7_Event; }
            set
            {
                m_Alarm_7_Event = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A7_Event, m_Alarm_7_Event.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_7_Counter
        {
            get { return m_Alarm_7_Counter; }
            set
            {
                m_Alarm_7_Counter = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A7_Counter, m_Alarm_7_Counter.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_7_Name
        {
            get { return m_Alarm_7_Name; }
            set
            {
                m_Alarm_7_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A7_Name, m_Alarm_7_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_7_Callback
        {
            get { return m_Alarm_7_Callback_Name; }
            set
            {
                m_Alarm_7_Callback_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A7_Callback, m_Alarm_7_Callback_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_8_Action
        {
            get { return m_Alarm_8_Action; }
            set
            {
                m_Alarm_8_Action = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A8_Action, m_Alarm_8_Action.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Alarm_8_Task
        {
            get { return m_Alarm_8_Task; }
            set
            {
                m_Alarm_8_Task = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A8_Task, m_Alarm_8_Task.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_8_Event
        {
            get { return m_Alarm_8_Event; }
            set
            {
                m_Alarm_8_Event = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A8_Event, m_Alarm_8_Event.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 Alarm_8_Counter
        {
            get { return m_Alarm_8_Counter; }
            set
            {
                m_Alarm_8_Counter = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A8_Counter, m_Alarm_8_Counter.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_8_Name
        {
            get { return m_Alarm_8_Name; }
            set
            {
                m_Alarm_8_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A8_Name, m_Alarm_8_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string Alarm_8_Callback
        {
            get { return m_Alarm_8_Callback_Name; }
            set
            {
                m_Alarm_8_Callback_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.A8_Callback, m_Alarm_8_Callback_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Byte Number_of_Tasks
        {
            get { return m_Number_of_Tasks; }
            set
            {
                m_Number_of_Tasks = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.NumTasks, m_Number_of_Tasks.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Byte Task_1_Activation
        {
            get { return m_Task_1_Activation; }
            set
            {
                m_Task_1_Activation = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_Act, m_Task_1_Activation.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool Task_1_Autostart
        {
            get { return m_Task_1_Autostart; }
            set
            {
                m_Task_1_Autostart = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_Auto, m_Task_1_Autostart.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Event_1
        {
            get { return m_Task_1_Event_1; }
            set
            {
                m_Task_1_Event_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_E1, m_Task_1_Event_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Event_2
        {
            get { return m_Task_1_Event_2; }
            set
            {
                m_Task_1_Event_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_E2, m_Task_1_Event_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Event_3
        {
            get { return m_Task_1_Event_3; }
            set
            {
                m_Task_1_Event_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_E3, m_Task_1_Event_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Event_4
        {
            get { return m_Task_1_Event_4; }
            set
            {
                m_Task_1_Event_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_E4, m_Task_1_Event_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Event_5
        {
            get { return m_Task_1_Event_5; }
            set
            {
                m_Task_1_Event_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_E5, m_Task_1_Event_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Event_6
        {
            get { return m_Task_1_Event_6; }
            set
            {
                m_Task_1_Event_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_E6, m_Task_1_Event_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Event_7
        {
            get { return m_Task_1_Event_7; }
            set
            {
                m_Task_1_Event_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_E7, m_Task_1_Event_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Event_8
        {
            get { return m_Task_1_Event_8; }
            set
            {
                m_Task_1_Event_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_E8, m_Task_1_Event_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Task_1_Name
        {
            get { return m_Task_1_Name; }
            set
            {
                m_Task_1_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_Name, m_Task_1_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_1_Number_Events
        {
            get { return m_Task_1_Number_Events; }
            set
            {
                m_Task_1_Number_Events = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_NumE, m_Task_1_Number_Events.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_1_Number_Resources
        {
            get { return m_Task_1_Number_Resources; }
            set
            {
                m_Task_1_Number_Resources = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_NumR, m_Task_1_Number_Resources.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Priority
        {
            get { return m_Task_1_Priority; }
            set
            {
                m_Task_1_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_Prio, m_Task_1_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Schedule
        {
            get { return m_Task_1_Schedule; }
            set
            {
                m_Task_1_Schedule = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_Schedule, m_Task_1_Schedule.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Stack
        {
            get { return m_Task_1_Stack; }
            set
            {
                m_Task_1_Stack = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_Stack, m_Task_1_Stack.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public UInt16 Task_1_Stack_Size
        {
            get { return m_Task_1_Stack_Size; }
            set
            {
                m_Task_1_Stack_Size = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_StackSize, m_Task_1_Stack_Size.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Resource_1
        {
            get { return m_Task_1_Resource_1; }
            set
            {
                m_Task_1_Resource_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_R1, m_Task_1_Resource_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Resource_2
        {
            get { return m_Task_1_Resource_2; }
            set
            {
                m_Task_1_Resource_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_R2, m_Task_1_Resource_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Resource_3
        {
            get { return m_Task_1_Resource_3; }
            set
            {
                m_Task_1_Resource_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_R3, m_Task_1_Resource_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Resource_4
        {
            get { return m_Task_1_Resource_4; }
            set
            {
                m_Task_1_Resource_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_R4, m_Task_1_Resource_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Resource_5
        {
            get { return m_Task_1_Resource_5; }
            set
            {
                m_Task_1_Resource_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_R5, m_Task_1_Resource_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Resource_6
        {
            get { return m_Task_1_Resource_6; }
            set
            {
                m_Task_1_Resource_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_R6, m_Task_1_Resource_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Resource_7
        {
            get { return m_Task_1_Resource_7; }
            set
            {
                m_Task_1_Resource_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_R7, m_Task_1_Resource_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_1_Resource_8
        {
            get { return m_Task_1_Resource_8; }
            set
            {
                m_Task_1_Resource_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T1_R8, m_Task_1_Resource_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_2_Activation
        {
            get { return m_Task_2_Activation; }
            set
            {
                m_Task_2_Activation = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_Act, m_Task_2_Activation.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool Task_2_Autostart
        {
            get { return m_Task_2_Autostart; }
            set
            {
                m_Task_2_Autostart = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_Auto, m_Task_2_Autostart.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Event_1
        {
            get { return m_Task_2_Event_1; }
            set
            {
                m_Task_2_Event_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_E1, m_Task_2_Event_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Event_2
        {
            get { return m_Task_2_Event_2; }
            set
            {
                m_Task_2_Event_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_E2, m_Task_2_Event_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Event_3
        {
            get { return m_Task_2_Event_3; }
            set
            {
                m_Task_2_Event_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_E3, m_Task_2_Event_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Event_4
        {
            get { return m_Task_2_Event_4; }
            set
            {
                m_Task_2_Event_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_E4, m_Task_2_Event_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Event_5
        {
            get { return m_Task_2_Event_5; }
            set
            {
                m_Task_2_Event_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_E5, m_Task_2_Event_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Event_6
        {
            get { return m_Task_2_Event_6; }
            set
            {
                m_Task_2_Event_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_E6, m_Task_2_Event_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Event_7
        {
            get { return m_Task_2_Event_7; }
            set
            {
                m_Task_2_Event_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_E7, m_Task_2_Event_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Event_8
        {
            get { return m_Task_2_Event_8; }
            set
            {
                m_Task_2_Event_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_E8, m_Task_2_Event_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Task_2_Name
        {
            get { return m_Task_2_Name; }
            set
            {
                m_Task_2_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_Name, m_Task_2_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_2_Number_Events
        {
            get { return m_Task_2_Number_Events; }
            set
            {
                m_Task_2_Number_Events = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_NumE, m_Task_2_Number_Events.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_2_Number_Resources
        {
            get { return m_Task_2_Number_Resources; }
            set
            {
                m_Task_2_Number_Resources = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_NumR, m_Task_2_Number_Resources.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Priority
        {
            get { return m_Task_2_Priority; }
            set
            {
                m_Task_2_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_Prio, m_Task_2_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Schedule
        {
            get { return m_Task_2_Schedule; }
            set
            {
                m_Task_2_Schedule = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_Schedule, m_Task_2_Schedule.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Stack
        {
            get { return m_Task_2_Stack; }
            set
            {
                m_Task_2_Stack = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_Stack, m_Task_2_Stack.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public UInt16 Task_2_Stack_Size
        {
            get { return m_Task_2_Stack_Size; }
            set
            {
                m_Task_2_Stack_Size = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_StackSize, m_Task_2_Stack_Size.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Resource_1
        {
            get { return m_Task_2_Resource_1; }
            set
            {
                m_Task_2_Resource_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_R1, m_Task_2_Resource_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Resource_2
        {
            get { return m_Task_2_Resource_2; }
            set
            {
                m_Task_2_Resource_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_R2, m_Task_2_Resource_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Resource_3
        {
            get { return m_Task_2_Resource_3; }
            set
            {
                m_Task_2_Resource_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_R3, m_Task_2_Resource_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Resource_4
        {
            get { return m_Task_2_Resource_4; }
            set
            {
                m_Task_2_Resource_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_R4, m_Task_2_Resource_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Resource_5
        {
            get { return m_Task_2_Resource_5; }
            set
            {
                m_Task_2_Resource_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_R5, m_Task_2_Resource_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Resource_6
        {
            get { return m_Task_2_Resource_6; }
            set
            {
                m_Task_2_Resource_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_R6, m_Task_2_Resource_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Resource_7
        {
            get { return m_Task_2_Resource_7; }
            set
            {
                m_Task_2_Resource_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_R7, m_Task_2_Resource_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_2_Resource_8
        {
            get { return m_Task_2_Resource_8; }
            set
            {
                m_Task_2_Resource_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T2_R8, m_Task_2_Resource_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_3_Activation
        {
            get { return m_Task_3_Activation; }
            set
            {
                m_Task_3_Activation = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_Act, m_Task_3_Activation.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool Task_3_Autostart
        {
            get { return m_Task_3_Autostart; }
            set
            {
                m_Task_3_Autostart = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_Auto, m_Task_3_Autostart.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Event_1
        {
            get { return m_Task_3_Event_1; }
            set
            {
                m_Task_3_Event_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_E1, m_Task_3_Event_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Event_2
        {
            get { return m_Task_3_Event_2; }
            set
            {
                m_Task_3_Event_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_E2, m_Task_3_Event_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Event_3
        {
            get { return m_Task_3_Event_3; }
            set
            {
                m_Task_3_Event_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_E3, m_Task_3_Event_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Event_4
        {
            get { return m_Task_3_Event_4; }
            set
            {
                m_Task_3_Event_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_E4, m_Task_3_Event_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Event_5
        {
            get { return m_Task_3_Event_5; }
            set
            {
                m_Task_3_Event_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_E5, m_Task_3_Event_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Event_6
        {
            get { return m_Task_3_Event_6; }
            set
            {
                m_Task_3_Event_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_E6, m_Task_3_Event_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Event_7
        {
            get { return m_Task_3_Event_7; }
            set
            {
                m_Task_3_Event_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_E7, m_Task_3_Event_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Event_8
        {
            get { return m_Task_3_Event_8; }
            set
            {
                m_Task_3_Event_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_E8, m_Task_3_Event_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Task_3_Name
        {
            get { return m_Task_3_Name; }
            set
            {
                m_Task_3_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_Name, m_Task_3_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_3_Number_Events
        {
            get { return m_Task_3_Number_Events; }
            set
            {
                m_Task_3_Number_Events = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_NumE, m_Task_3_Number_Events.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_3_Number_Resources
        {
            get { return m_Task_3_Number_Resources; }
            set
            {
                m_Task_3_Number_Resources = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_NumR, m_Task_3_Number_Resources.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Priority
        {
            get { return m_Task_3_Priority; }
            set
            {
                m_Task_3_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_Prio, m_Task_3_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Schedule
        {
            get { return m_Task_3_Schedule; }
            set
            {
                m_Task_3_Schedule = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_Schedule, m_Task_3_Schedule.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Stack
        {
            get { return m_Task_3_Stack; }
            set
            {
                m_Task_3_Stack = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_Stack, m_Task_3_Stack.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public UInt16 Task_3_Stack_Size
        {
            get { return m_Task_3_Stack_Size; }
            set
            {
                m_Task_3_Stack_Size = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_StackSize, m_Task_3_Stack_Size.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Resource_1
        {
            get { return m_Task_3_Resource_1; }
            set
            {
                m_Task_3_Resource_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_R1, m_Task_3_Resource_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Resource_2
        {
            get { return m_Task_3_Resource_2; }
            set
            {
                m_Task_3_Resource_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_R2, m_Task_3_Resource_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Resource_3
        {
            get { return m_Task_3_Resource_3; }
            set
            {
                m_Task_3_Resource_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_R3, m_Task_3_Resource_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Resource_4
        {
            get { return m_Task_3_Resource_4; }
            set
            {
                m_Task_3_Resource_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_R4, m_Task_3_Resource_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Resource_5
        {
            get { return m_Task_3_Resource_5; }
            set
            {
                m_Task_3_Resource_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_R5, m_Task_3_Resource_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Resource_6
        {
            get { return m_Task_3_Resource_6; }
            set
            {
                m_Task_3_Resource_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_R6, m_Task_3_Resource_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Resource_7
        {
            get { return m_Task_3_Resource_7; }
            set
            {
                m_Task_3_Resource_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_R7, m_Task_3_Resource_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_3_Resource_8
        {
            get { return m_Task_3_Resource_8; }
            set
            {
                m_Task_3_Resource_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T3_R8, m_Task_3_Resource_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_4_Activation
        {
            get { return m_Task_4_Activation; }
            set
            {
                m_Task_4_Activation = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_Act, m_Task_4_Activation.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool Task_4_Autostart
        {
            get { return m_Task_4_Autostart; }
            set
            {
                m_Task_4_Autostart = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_Auto, m_Task_4_Autostart.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Event_1
        {
            get { return m_Task_4_Event_1; }
            set
            {
                m_Task_4_Event_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_E1, m_Task_4_Event_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Event_2
        {
            get { return m_Task_4_Event_2; }
            set
            {
                m_Task_4_Event_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_E2, m_Task_4_Event_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Event_3
        {
            get { return m_Task_4_Event_3; }
            set
            {
                m_Task_4_Event_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_E3, m_Task_4_Event_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Event_4
        {
            get { return m_Task_4_Event_4; }
            set
            {
                m_Task_4_Event_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_E4, m_Task_4_Event_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Event_5
        {
            get { return m_Task_4_Event_5; }
            set
            {
                m_Task_4_Event_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_E5, m_Task_4_Event_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Event_6
        {
            get { return m_Task_4_Event_6; }
            set
            {
                m_Task_4_Event_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_E6, m_Task_4_Event_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Event_7
        {
            get { return m_Task_4_Event_7; }
            set
            {
                m_Task_4_Event_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_E7, m_Task_4_Event_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Event_8
        {
            get { return m_Task_4_Event_8; }
            set
            {
                m_Task_4_Event_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_E8, m_Task_4_Event_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Task_4_Name
        {
            get { return m_Task_4_Name; }
            set
            {
                m_Task_4_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_Name, m_Task_4_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_4_Number_Events
        {
            get { return m_Task_4_Number_Events; }
            set
            {
                m_Task_4_Number_Events = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_NumE, m_Task_4_Number_Events.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_4_Number_Resources
        {
            get { return m_Task_4_Number_Resources; }
            set
            {
                m_Task_4_Number_Resources = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_NumR, m_Task_4_Number_Resources.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Priority
        {
            get { return m_Task_4_Priority; }
            set
            {
                m_Task_4_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_Prio, m_Task_4_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Schedule
        {
            get { return m_Task_4_Schedule; }
            set
            {
                m_Task_4_Schedule = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_Schedule, m_Task_4_Schedule.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Stack
        {
            get { return m_Task_4_Stack; }
            set
            {
                m_Task_4_Stack = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_Stack, m_Task_4_Stack.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public UInt16 Task_4_Stack_Size
        {
            get { return m_Task_4_Stack_Size; }
            set
            {
                m_Task_4_Stack_Size = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_StackSize, m_Task_4_Stack_Size.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Resource_1
        {
            get { return m_Task_4_Resource_1; }
            set
            {
                m_Task_4_Resource_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_R1, m_Task_4_Resource_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Resource_2
        {
            get { return m_Task_4_Resource_2; }
            set
            {
                m_Task_4_Resource_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_R2, m_Task_4_Resource_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Resource_3
        {
            get { return m_Task_4_Resource_3; }
            set
            {
                m_Task_4_Resource_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_R3, m_Task_4_Resource_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Resource_4
        {
            get { return m_Task_4_Resource_4; }
            set
            {
                m_Task_4_Resource_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_R4, m_Task_4_Resource_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Resource_5
        {
            get { return m_Task_4_Resource_5; }
            set
            {
                m_Task_4_Resource_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_R5, m_Task_4_Resource_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Resource_6
        {
            get { return m_Task_4_Resource_6; }
            set
            {
                m_Task_4_Resource_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_R6, m_Task_4_Resource_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Resource_7
        {
            get { return m_Task_4_Resource_7; }
            set
            {
                m_Task_4_Resource_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_R7, m_Task_4_Resource_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_4_Resource_8
        {
            get { return m_Task_4_Resource_8; }
            set
            {
                m_Task_4_Resource_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T4_R8, m_Task_4_Resource_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_5_Activation
        {
            get { return m_Task_5_Activation; }
            set
            {
                m_Task_5_Activation = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_Act, m_Task_5_Activation.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool Task_5_Autostart
        {
            get { return m_Task_5_Autostart; }
            set
            {
                m_Task_5_Autostart = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_Auto, m_Task_5_Autostart.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Event_1
        {
            get { return m_Task_5_Event_1; }
            set
            {
                m_Task_5_Event_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_E1, m_Task_5_Event_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Event_2
        {
            get { return m_Task_5_Event_2; }
            set
            {
                m_Task_5_Event_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_E2, m_Task_5_Event_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Event_3
        {
            get { return m_Task_5_Event_3; }
            set
            {
                m_Task_5_Event_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_E3, m_Task_5_Event_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Event_4
        {
            get { return m_Task_5_Event_4; }
            set
            {
                m_Task_5_Event_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_E4, m_Task_5_Event_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Event_5
        {
            get { return m_Task_5_Event_5; }
            set
            {
                m_Task_5_Event_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_E5, m_Task_5_Event_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Event_6
        {
            get { return m_Task_5_Event_6; }
            set
            {
                m_Task_5_Event_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_E6, m_Task_5_Event_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Event_7
        {
            get { return m_Task_5_Event_7; }
            set
            {
                m_Task_5_Event_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_E7, m_Task_5_Event_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Event_8
        {
            get { return m_Task_5_Event_8; }
            set
            {
                m_Task_5_Event_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_E8, m_Task_5_Event_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Task_5_Name
        {
            get { return m_Task_5_Name; }
            set
            {
                m_Task_5_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_Name, m_Task_5_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_5_Number_Events
        {
            get { return m_Task_5_Number_Events; }
            set
            {
                m_Task_5_Number_Events = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_NumE, m_Task_5_Number_Events.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_5_Number_Resources
        {
            get { return m_Task_5_Number_Resources; }
            set
            {
                m_Task_5_Number_Resources = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_NumR, m_Task_5_Number_Resources.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Priority
        {
            get { return m_Task_5_Priority; }
            set
            {
                m_Task_5_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_Prio, m_Task_5_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Schedule
        {
            get { return m_Task_5_Schedule; }
            set
            {
                m_Task_5_Schedule = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_Schedule, m_Task_5_Schedule.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Stack
        {
            get { return m_Task_5_Stack; }
            set
            {
                m_Task_5_Stack = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_Stack, m_Task_5_Stack.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public UInt16 Task_5_Stack_Size
        {
            get { return m_Task_5_Stack_Size; }
            set
            {
                m_Task_5_Stack_Size = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_StackSize, m_Task_5_Stack_Size.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Resource_1
        {
            get { return m_Task_5_Resource_1; }
            set
            {
                m_Task_5_Resource_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_R1, m_Task_5_Resource_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Resource_2
        {
            get { return m_Task_5_Resource_2; }
            set
            {
                m_Task_5_Resource_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_R2, m_Task_5_Resource_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Resource_3
        {
            get { return m_Task_5_Resource_3; }
            set
            {
                m_Task_5_Resource_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_R3, m_Task_5_Resource_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Resource_4
        {
            get { return m_Task_5_Resource_4; }
            set
            {
                m_Task_5_Resource_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_R4, m_Task_5_Resource_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Resource_5
        {
            get { return m_Task_5_Resource_5; }
            set
            {
                m_Task_5_Resource_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_R5, m_Task_5_Resource_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Resource_6
        {
            get { return m_Task_5_Resource_6; }
            set
            {
                m_Task_5_Resource_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_R6, m_Task_5_Resource_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Resource_7
        {
            get { return m_Task_5_Resource_7; }
            set
            {
                m_Task_5_Resource_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_R7, m_Task_5_Resource_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_5_Resource_8
        {
            get { return m_Task_5_Resource_8; }
            set
            {
                m_Task_5_Resource_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T5_R8, m_Task_5_Resource_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_6_Activation
        {
            get { return m_Task_6_Activation; }
            set
            {
                m_Task_6_Activation = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_Act, m_Task_6_Activation.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool Task_6_Autostart
        {
            get { return m_Task_6_Autostart; }
            set
            {
                m_Task_6_Autostart = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_Auto, m_Task_6_Autostart.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Event_1
        {
            get { return m_Task_6_Event_1; }
            set
            {
                m_Task_6_Event_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_E1, m_Task_6_Event_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Event_2
        {
            get { return m_Task_6_Event_2; }
            set
            {
                m_Task_6_Event_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_E2, m_Task_6_Event_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Event_3
        {
            get { return m_Task_6_Event_3; }
            set
            {
                m_Task_6_Event_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_E3, m_Task_6_Event_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Event_4
        {
            get { return m_Task_6_Event_4; }
            set
            {
                m_Task_6_Event_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_E4, m_Task_6_Event_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Event_5
        {
            get { return m_Task_6_Event_5; }
            set
            {
                m_Task_6_Event_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_E5, m_Task_6_Event_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Event_6
        {
            get { return m_Task_6_Event_6; }
            set
            {
                m_Task_6_Event_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_E6, m_Task_6_Event_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Event_7
        {
            get { return m_Task_6_Event_7; }
            set
            {
                m_Task_6_Event_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_E7, m_Task_6_Event_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Event_8
        {
            get { return m_Task_6_Event_8; }
            set
            {
                m_Task_6_Event_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_E8, m_Task_6_Event_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Task_6_Name
        {
            get { return m_Task_6_Name; }
            set
            {
                m_Task_6_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_Name, m_Task_6_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_6_Number_Events
        {
            get { return m_Task_6_Number_Events; }
            set
            {
                m_Task_6_Number_Events = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_NumE, m_Task_6_Number_Events.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_6_Number_Resources
        {
            get { return m_Task_6_Number_Resources; }
            set
            {
                m_Task_6_Number_Resources = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_NumR, m_Task_6_Number_Resources.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Priority
        {
            get { return m_Task_6_Priority; }
            set
            {
                m_Task_6_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_Prio, m_Task_6_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Schedule
        {
            get { return m_Task_6_Schedule; }
            set
            {
                m_Task_6_Schedule = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_Schedule, m_Task_6_Schedule.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Stack
        {
            get { return m_Task_6_Stack; }
            set
            {
                m_Task_6_Stack = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_Stack, m_Task_6_Stack.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public UInt16 Task_6_Stack_Size
        {
            get { return m_Task_6_Stack_Size; }
            set
            {
                m_Task_6_Stack_Size = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_StackSize, m_Task_6_Stack_Size.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Resource_1
        {
            get { return m_Task_6_Resource_1; }
            set
            {
                m_Task_6_Resource_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_R1, m_Task_6_Resource_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Resource_2
        {
            get { return m_Task_6_Resource_2; }
            set
            {
                m_Task_6_Resource_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_R2, m_Task_6_Resource_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Resource_3
        {
            get { return m_Task_6_Resource_3; }
            set
            {
                m_Task_6_Resource_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_R3, m_Task_6_Resource_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Resource_4
        {
            get { return m_Task_6_Resource_4; }
            set
            {
                m_Task_6_Resource_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_R4, m_Task_6_Resource_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Resource_5
        {
            get { return m_Task_6_Resource_5; }
            set
            {
                m_Task_6_Resource_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_R5, m_Task_6_Resource_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Resource_6
        {
            get { return m_Task_6_Resource_6; }
            set
            {
                m_Task_6_Resource_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_R6, m_Task_6_Resource_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Resource_7
        {
            get { return m_Task_6_Resource_7; }
            set
            {
                m_Task_6_Resource_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_R7, m_Task_6_Resource_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_6_Resource_8
        {
            get { return m_Task_6_Resource_8; }
            set
            {
                m_Task_6_Resource_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T6_R8, m_Task_6_Resource_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_7_Activation
        {
            get { return m_Task_7_Activation; }
            set
            {
                m_Task_7_Activation = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_Act, m_Task_7_Activation.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool Task_7_Autostart
        {
            get { return m_Task_7_Autostart; }
            set
            {
                m_Task_7_Autostart = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_Auto, m_Task_7_Autostart.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Event_1
        {
            get { return m_Task_7_Event_1; }
            set
            {
                m_Task_7_Event_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_E1, m_Task_7_Event_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Event_2
        {
            get { return m_Task_7_Event_2; }
            set
            {
                m_Task_7_Event_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_E2, m_Task_7_Event_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Event_3
        {
            get { return m_Task_7_Event_3; }
            set
            {
                m_Task_7_Event_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_E3, m_Task_7_Event_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Event_4
        {
            get { return m_Task_7_Event_4; }
            set
            {
                m_Task_7_Event_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_E4, m_Task_7_Event_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Event_5
        {
            get { return m_Task_7_Event_5; }
            set
            {
                m_Task_7_Event_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_E5, m_Task_7_Event_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Event_6
        {
            get { return m_Task_7_Event_6; }
            set
            {
                m_Task_7_Event_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_E6, m_Task_7_Event_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Event_7
        {
            get { return m_Task_7_Event_7; }
            set
            {
                m_Task_7_Event_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_E7, m_Task_7_Event_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Event_8
        {
            get { return m_Task_7_Event_8; }
            set
            {
                m_Task_7_Event_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_E8, m_Task_7_Event_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Task_7_Name
        {
            get { return m_Task_7_Name; }
            set
            {
                m_Task_7_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_Name, m_Task_7_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_7_Number_Events
        {
            get { return m_Task_7_Number_Events; }
            set
            {
                m_Task_7_Number_Events = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_NumE, m_Task_7_Number_Events.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_7_Number_Resources
        {
            get { return m_Task_7_Number_Resources; }
            set
            {
                m_Task_7_Number_Resources = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_NumR, m_Task_7_Number_Resources.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Priority
        {
            get { return m_Task_7_Priority; }
            set
            {
                m_Task_7_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_Prio, m_Task_7_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Schedule
        {
            get { return m_Task_7_Schedule; }
            set
            {
                m_Task_7_Schedule = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_Schedule, m_Task_7_Schedule.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Stack
        {
            get { return m_Task_7_Stack; }
            set
            {
                m_Task_7_Stack = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_Stack, m_Task_7_Stack.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public UInt16 Task_7_Stack_Size
        {
            get { return m_Task_7_Stack_Size; }
            set
            {
                m_Task_7_Stack_Size = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_StackSize, m_Task_7_Stack_Size.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Resource_1
        {
            get { return m_Task_7_Resource_1; }
            set
            {
                m_Task_7_Resource_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_R1, m_Task_7_Resource_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Resource_2
        {
            get { return m_Task_7_Resource_2; }
            set
            {
                m_Task_7_Resource_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_R2, m_Task_7_Resource_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Resource_3
        {
            get { return m_Task_7_Resource_3; }
            set
            {
                m_Task_7_Resource_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_R3, m_Task_7_Resource_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Resource_4
        {
            get { return m_Task_7_Resource_4; }
            set
            {
                m_Task_7_Resource_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_R4, m_Task_7_Resource_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Resource_5
        {
            get { return m_Task_7_Resource_5; }
            set
            {
                m_Task_7_Resource_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_R5, m_Task_7_Resource_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Resource_6
        {
            get { return m_Task_7_Resource_6; }
            set
            {
                m_Task_7_Resource_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_R6, m_Task_7_Resource_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Resource_7
        {
            get { return m_Task_7_Resource_7; }
            set
            {
                m_Task_7_Resource_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_R7, m_Task_7_Resource_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_7_Resource_8
        {
            get { return m_Task_7_Resource_8; }
            set
            {
                m_Task_7_Resource_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T7_R8, m_Task_7_Resource_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_8_Activation
        {
            get { return m_Task_8_Activation; }
            set
            {
                m_Task_8_Activation = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_Act, m_Task_8_Activation.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public bool Task_8_Autostart
        {
            get { return m_Task_8_Autostart; }
            set
            {
                m_Task_8_Autostart = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_Auto, m_Task_8_Autostart.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Event_1
        {
            get { return m_Task_8_Event_1; }
            set
            {
                m_Task_8_Event_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_E1, m_Task_8_Event_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Event_2
        {
            get { return m_Task_8_Event_2; }
            set
            {
                m_Task_8_Event_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_E2, m_Task_8_Event_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Event_3
        {
            get { return m_Task_8_Event_3; }
            set
            {
                m_Task_8_Event_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_E3, m_Task_8_Event_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Event_4
        {
            get { return m_Task_8_Event_4; }
            set
            {
                m_Task_8_Event_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_E4, m_Task_8_Event_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Event_5
        {
            get { return m_Task_8_Event_5; }
            set
            {
                m_Task_8_Event_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_E5, m_Task_8_Event_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Event_6
        {
            get { return m_Task_8_Event_6; }
            set
            {
                m_Task_8_Event_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_E6, m_Task_8_Event_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Event_7
        {
            get { return m_Task_8_Event_7; }
            set
            {
                m_Task_8_Event_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_E7, m_Task_8_Event_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Event_8
        {
            get { return m_Task_8_Event_8; }
            set
            {
                m_Task_8_Event_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_E8, m_Task_8_Event_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public string Task_8_Name
        {
            get { return m_Task_8_Name; }
            set
            {
                m_Task_8_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_Name, m_Task_8_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_8_Number_Events
        {
            get { return m_Task_8_Number_Events; }
            set
            {
                m_Task_8_Number_Events = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_NumE, m_Task_8_Number_Events.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Byte Task_8_Number_Resources
        {
            get { return m_Task_8_Number_Resources; }
            set
            {
                m_Task_8_Number_Resources = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_NumR, m_Task_8_Number_Resources.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Priority
        {
            get { return m_Task_8_Priority; }
            set
            {
                m_Task_8_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_Prio, m_Task_8_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Schedule
        {
            get { return m_Task_8_Schedule; }
            set
            {
                m_Task_8_Schedule = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_Schedule, m_Task_8_Schedule.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Stack
        {
            get { return m_Task_8_Stack; }
            set
            {
                m_Task_8_Stack = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_Stack, m_Task_8_Stack.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public UInt16 Task_8_Stack_Size
        {
            get { return m_Task_8_Stack_Size; }
            set
            {
                m_Task_8_Stack_Size = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_StackSize, m_Task_8_Stack_Size.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Resource_1
        {
            get { return m_Task_8_Resource_1; }
            set
            {
                m_Task_8_Resource_1 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_R1, m_Task_8_Resource_1.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Resource_2
        {
            get { return m_Task_8_Resource_2; }
            set
            {
                m_Task_8_Resource_2 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_R2, m_Task_8_Resource_2.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Resource_3
        {
            get { return m_Task_8_Resource_3; }
            set
            {
                m_Task_8_Resource_3 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_R3, m_Task_8_Resource_3.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Resource_4
        {
            get { return m_Task_8_Resource_4; }
            set
            {
                m_Task_8_Resource_4 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_R4, m_Task_8_Resource_4.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Resource_5
        {
            get { return m_Task_8_Resource_5; }
            set
            {
                m_Task_8_Resource_5 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_R5, m_Task_8_Resource_5.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Resource_6
        {
            get { return m_Task_8_Resource_6; }
            set
            {
                m_Task_8_Resource_6 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_R6, m_Task_8_Resource_6.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Resource_7
        {
            get { return m_Task_8_Resource_7; }
            set
            {
                m_Task_8_Resource_7 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_R7, m_Task_8_Resource_7.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        public Int32 Task_8_Resource_8
        {
            get { return m_Task_8_Resource_8; }
            set
            {
                m_Task_8_Resource_8 = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.T8_R8, m_Task_8_Resource_8.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_1_Name
        {
            get { return m_ISR_1_Name; }
            set
            {
                m_ISR_1_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR1_Name, m_ISR_1_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_1_Category
        {
            get { return m_ISR_1_Category; }
            set
            {
                m_ISR_1_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR1_Cat, m_ISR_1_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_1_Priority
        {
            get { return m_ISR_1_Priority; }
            set
            {
                m_ISR_1_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR1_Pri, m_ISR_1_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_1_Resource
        {
            get { return m_ISR_1_Resource; }
            set
            {
                m_ISR_1_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR1_Res, m_ISR_1_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_2_Name
        {
            get { return m_ISR_2_Name; }
            set
            {
                m_ISR_2_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR2_Name, m_ISR_2_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_2_Category
        {
            get { return m_ISR_2_Category; }
            set
            {
                m_ISR_2_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR2_Cat, m_ISR_2_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_2_Priority
        {
            get { return m_ISR_2_Priority; }
            set
            {
                m_ISR_2_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR2_Pri, m_ISR_2_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_2_Resource
        {
            get { return m_ISR_2_Resource; }
            set
            {
                m_ISR_2_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR2_Res, m_ISR_2_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_3_Name
        {
            get { return m_ISR_3_Name; }
            set
            {
                m_ISR_3_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR3_Name, m_ISR_3_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_3_Category
        {
            get { return m_ISR_3_Category; }
            set
            {
                m_ISR_3_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR3_Cat, m_ISR_3_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_3_Priority
        {
            get { return m_ISR_3_Priority; }
            set
            {
                m_ISR_3_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR3_Pri, m_ISR_3_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_3_Resource
        {
            get { return m_ISR_3_Resource; }
            set
            {
                m_ISR_3_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR3_Res, m_ISR_3_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_4_Name
        {
            get { return m_ISR_4_Name; }
            set
            {
                m_ISR_4_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR4_Name, m_ISR_4_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_4_Category
        {
            get { return m_ISR_4_Category; }
            set
            {
                m_ISR_4_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR4_Cat, m_ISR_4_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_4_Priority
        {
            get { return m_ISR_4_Priority; }
            set
            {
                m_ISR_4_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR4_Pri, m_ISR_4_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_4_Resource
        {
            get { return m_ISR_4_Resource; }
            set
            {
                m_ISR_4_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR4_Res, m_ISR_4_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_5_Name
        {
            get { return m_ISR_5_Name; }
            set
            {
                m_ISR_5_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR5_Name, m_ISR_5_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_5_Category
        {
            get { return m_ISR_5_Category; }
            set
            {
                m_ISR_5_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR5_Cat, m_ISR_5_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_5_Priority
        {
            get { return m_ISR_5_Priority; }
            set
            {
                m_ISR_5_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR5_Pri, m_ISR_5_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_5_Resource
        {
            get { return m_ISR_5_Resource; }
            set
            {
                m_ISR_5_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR5_Res, m_ISR_5_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_6_Name
        {
            get { return m_ISR_6_Name; }
            set
            {
                m_ISR_6_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR6_Name, m_ISR_6_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_6_Category
        {
            get { return m_ISR_6_Category; }
            set
            {
                m_ISR_6_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR6_Cat, m_ISR_6_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_6_Priority
        {
            get { return m_ISR_6_Priority; }
            set
            {
                m_ISR_6_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR6_Pri, m_ISR_6_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_6_Resource
        {
            get { return m_ISR_6_Resource; }
            set
            {
                m_ISR_6_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR6_Res, m_ISR_6_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_7_Name
        {
            get { return m_ISR_7_Name; }
            set
            {
                m_ISR_7_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR7_Name, m_ISR_7_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_7_Category
        {
            get { return m_ISR_7_Category; }
            set
            {
                m_ISR_7_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR7_Cat, m_ISR_7_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_7_Priority
        {
            get { return m_ISR_7_Priority; }
            set
            {
                m_ISR_7_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR7_Pri, m_ISR_7_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_7_Resource
        {
            get { return m_ISR_7_Resource; }
            set
            {
                m_ISR_7_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR7_Res, m_ISR_7_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_8_Name
        {
            get { return m_ISR_8_Name; }
            set
            {
                m_ISR_8_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR8_Name, m_ISR_8_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_8_Category
        {
            get { return m_ISR_8_Category; }
            set
            {
                m_ISR_8_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR8_Cat, m_ISR_8_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_8_Priority
        {
            get { return m_ISR_8_Priority; }
            set
            {
                m_ISR_8_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR8_Pri, m_ISR_8_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_8_Resource
        {
            get { return m_ISR_8_Resource; }
            set
            {
                m_ISR_8_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR8_Res, m_ISR_8_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_9_Name
        {
            get { return m_ISR_9_Name; }
            set
            {
                m_ISR_9_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR9_Name, m_ISR_9_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_9_Category
        {
            get { return m_ISR_9_Category; }
            set
            {
                m_ISR_9_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR9_Cat, m_ISR_9_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_9_Priority
        {
            get { return m_ISR_9_Priority; }
            set
            {
                m_ISR_9_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR9_Pri, m_ISR_9_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_9_Resource
        {
            get { return m_ISR_9_Resource; }
            set
            {
                m_ISR_9_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR9_Res, m_ISR_9_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_10_Name
        {
            get { return m_ISR_10_Name; }
            set
            {
                m_ISR_10_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR10_Name, m_ISR_10_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_10_Category
        {
            get { return m_ISR_10_Category; }
            set
            {
                m_ISR_10_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR10_Cat, m_ISR_10_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_10_Priority
        {
            get { return m_ISR_10_Priority; }
            set
            {
                m_ISR_10_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR10_Pri, m_ISR_10_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_10_Resource
        {
            get { return m_ISR_10_Resource; }
            set
            {
                m_ISR_10_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR10_Res, m_ISR_10_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_11_Name
        {
            get { return m_ISR_11_Name; }
            set
            {
                m_ISR_11_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR11_Name, m_ISR_11_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_11_Category
        {
            get { return m_ISR_11_Category; }
            set
            {
                m_ISR_11_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR11_Cat, m_ISR_11_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_11_Priority
        {
            get { return m_ISR_11_Priority; }
            set
            {
                m_ISR_11_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR11_Pri, m_ISR_11_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_11_Resource
        {
            get { return m_ISR_11_Resource; }
            set
            {
                m_ISR_11_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR11_Res, m_ISR_11_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_12_Name
        {
            get { return m_ISR_12_Name; }
            set
            {
                m_ISR_12_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR12_Name, m_ISR_12_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_12_Category
        {
            get { return m_ISR_12_Category; }
            set
            {
                m_ISR_12_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR12_Cat, m_ISR_12_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_12_Priority
        {
            get { return m_ISR_12_Priority; }
            set
            {
                m_ISR_12_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR12_Pri, m_ISR_12_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_12_Resource
        {
            get { return m_ISR_12_Resource; }
            set
            {
                m_ISR_12_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR12_Res, m_ISR_12_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_13_Name
        {
            get { return m_ISR_13_Name; }
            set
            {
                m_ISR_13_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR13_Name, m_ISR_13_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_13_Category
        {
            get { return m_ISR_13_Category; }
            set
            {
                m_ISR_13_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR13_Cat, m_ISR_13_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_13_Priority
        {
            get { return m_ISR_13_Priority; }
            set
            {
                m_ISR_13_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR13_Pri, m_ISR_13_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_13_Resource
        {
            get { return m_ISR_13_Resource; }
            set
            {
                m_ISR_13_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR13_Res, m_ISR_13_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_14_Name
        {
            get { return m_ISR_14_Name; }
            set
            {
                m_ISR_14_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR14_Name, m_ISR_14_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_14_Category
        {
            get { return m_ISR_14_Category; }
            set
            {
                m_ISR_14_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR14_Cat, m_ISR_14_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_14_Priority
        {
            get { return m_ISR_14_Priority; }
            set
            {
                m_ISR_14_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR14_Pri, m_ISR_14_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_14_Resource
        {
            get { return m_ISR_14_Resource; }
            set
            {
                m_ISR_14_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR14_Res, m_ISR_14_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_15_Name
        {
            get { return m_ISR_15_Name; }
            set
            {
                m_ISR_15_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR15_Name, m_ISR_15_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_15_Category
        {
            get { return m_ISR_15_Category; }
            set
            {
                m_ISR_15_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR15_Cat, m_ISR_15_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_15_Priority
        {
            get { return m_ISR_15_Priority; }
            set
            {
                m_ISR_15_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR15_Pri, m_ISR_15_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_15_Resource
        {
            get { return m_ISR_15_Resource; }
            set
            {
                m_ISR_15_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR15_Res, m_ISR_15_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public string ISR_16_Name
        {
            get { return m_ISR_16_Name; }
            set
            {
                m_ISR_16_Name = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR16_Name, m_ISR_16_Name);
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_16_Category
        {
            get { return m_ISR_16_Category; }
            set
            {
                m_ISR_16_Category = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR16_Cat, m_ISR_16_Category.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_16_Priority
        {
            get { return m_ISR_16_Priority; }
            set
            {
                m_ISR_16_Priority = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR16_Pri, m_ISR_16_Priority.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }

        public Int32 ISR_16_Resource
        {
            get { return m_ISR_16_Resource; }
            set
            {
                m_ISR_16_Resource = value;
                if (m_edit != null)
                {
                    m_edit.SetParamExpr(CyParamNames.ISR16_Res, m_ISR_16_Resource.ToString().ToLower());
                    m_edit.CommitParamExprs();
                }
            }
        }
        #endregion


        public ErikaOSParameters(ICyInstEdit_v1 m_edit)
        {
            this.m_edit = m_edit;
			GetParams();
        }

        //Get Commited Parameters from Customizer
        public void GetParams()
        {
            if (m_edit != null)
            {
                try
                {
                    m_Systick = bool.Parse(m_edit.GetCommittedParam(CyParamNames.Systick).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Tracer = bool.Parse(m_edit.GetCommittedParam(CyParamNames.Tracer).Value);
                }
                catch (Exception) { }
                
                try
                {
                    m_HookError = bool.Parse(m_edit.GetCommittedParam(CyParamNames.Hook_Error).Value);
                }
                catch (Exception) { }
                try
                {
                    m_HookPosttask = bool.Parse(m_edit.GetCommittedParam(CyParamNames.Hook_Posttask).Value);
                }
                catch (Exception) { }
                try
                {
                    m_HookPretask = bool.Parse(m_edit.GetCommittedParam(CyParamNames.Hook_Pretask).Value);
                }
                catch (Exception) { }
                try
                {
                    m_HookShutdown = bool.Parse(m_edit.GetCommittedParam(CyParamNames.Hook_Shutdown).Value);
                }
                catch (Exception) { }
                try
                {
                    m_HookStart = bool.Parse(m_edit.GetCommittedParam(CyParamNames.Hook_Start).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ParamAccess = bool.Parse(m_edit.GetCommittedParam(CyParamNames.Param_Access).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ResScheduler = bool.Parse(m_edit.GetCommittedParam(CyParamNames.Res_Scheduler).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Trace1 = bool.Parse(m_edit.GetCommittedParam(CyParamNames.Trace1).Value);
                }
                catch (Exception) { }

                
                try
                {
                    m_SystickHandler = m_edit.GetCommittedParam(CyParamNames.SystickHandler).Value;
                }
                catch (Exception) { }
                try
                {
                    m_MultiStack = bool.Parse(m_edit.GetCommittedParam(CyParamNames.MultiStack).Value);
                }
                catch (Exception) { }
                try
                {
                    m_MultiStackIRQ = bool.Parse(m_edit.GetCommittedParam(CyParamNames.MultiStackIRQ).Value);
                }
                catch (Exception) { }
                try
                {
                    m_IRQStackSize = Convert.ToUInt16(m_edit.GetCommittedParam(CyParamNames.IRQStackSize).Value);
                }
                catch (Exception) { }
                try
                {
                    m_OSStatus = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.OSStatus).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Kernel = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.Kernel).Value);
                }
                catch (Exception) { }
                try
                {
                    m_CPU = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.CPU).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Number_of_Events = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.NumEvents).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Event_1 = m_edit.GetCommittedParam(CyParamNames.E1).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_2 = m_edit.GetCommittedParam(CyParamNames.E2).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_3 = m_edit.GetCommittedParam(CyParamNames.E3).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_4 = m_edit.GetCommittedParam(CyParamNames.E4).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_5 = m_edit.GetCommittedParam(CyParamNames.E5).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_6 = m_edit.GetCommittedParam(CyParamNames.E6).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_7 = m_edit.GetCommittedParam(CyParamNames.E7).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_8 = m_edit.GetCommittedParam(CyParamNames.E8).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_9 = m_edit.GetCommittedParam(CyParamNames.E9).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_10 = m_edit.GetCommittedParam(CyParamNames.E10).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_11 = m_edit.GetCommittedParam(CyParamNames.E11).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_12 = m_edit.GetCommittedParam(CyParamNames.E12).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_13 = m_edit.GetCommittedParam(CyParamNames.E13).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_14 = m_edit.GetCommittedParam(CyParamNames.E14).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_15 = m_edit.GetCommittedParam(CyParamNames.E15).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_16 = m_edit.GetCommittedParam(CyParamNames.E16).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_17 = m_edit.GetCommittedParam(CyParamNames.E17).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_18 = m_edit.GetCommittedParam(CyParamNames.E18).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_19 = m_edit.GetCommittedParam(CyParamNames.E19).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_20 = m_edit.GetCommittedParam(CyParamNames.E20).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_21 = m_edit.GetCommittedParam(CyParamNames.E21).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_22 = m_edit.GetCommittedParam(CyParamNames.E22).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_23 = m_edit.GetCommittedParam(CyParamNames.E23).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_24 = m_edit.GetCommittedParam(CyParamNames.E24).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_25 = m_edit.GetCommittedParam(CyParamNames.E25).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_26 = m_edit.GetCommittedParam(CyParamNames.E26).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_27 = m_edit.GetCommittedParam(CyParamNames.E27).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_28 = m_edit.GetCommittedParam(CyParamNames.E28).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_29 = m_edit.GetCommittedParam(CyParamNames.E29).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_30 = m_edit.GetCommittedParam(CyParamNames.E30).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Event_31 = m_edit.GetCommittedParam(CyParamNames.E31).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Number_of_Resources = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.NumResources).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Resource_1 = m_edit.GetCommittedParam(CyParamNames.R1).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Resource_2 = m_edit.GetCommittedParam(CyParamNames.R2).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Resource_3 = m_edit.GetCommittedParam(CyParamNames.R3).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Resource_4 = m_edit.GetCommittedParam(CyParamNames.R4).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Resource_5 = m_edit.GetCommittedParam(CyParamNames.R5).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Resource_6 = m_edit.GetCommittedParam(CyParamNames.R6).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Resource_7 = m_edit.GetCommittedParam(CyParamNames.R7).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Resource_8 = m_edit.GetCommittedParam(CyParamNames.R8).Value;
                }
                catch (Exception) { }

                try
                {
                    m_Number_of_Counters = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.NumCounters).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_1_Name = m_edit.GetCommittedParam(CyParamNames.C1_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Counter_1_Min_Cycle = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C1_Min).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_1_Max_Value = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C1_Max).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_1_Tick = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C1_Tick).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_2_Name = m_edit.GetCommittedParam(CyParamNames.C2_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Counter_2_Min_Cycle = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C2_Min).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_2_Max_Value = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C2_Max).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_2_Tick = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C2_Tick).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_3_Name = m_edit.GetCommittedParam(CyParamNames.C3_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Counter_3_Min_Cycle = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C3_Min).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_3_Max_Value = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C3_Max).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_3_Tick = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C3_Tick).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_4_Name = m_edit.GetCommittedParam(CyParamNames.C4_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Counter_4_Min_Cycle = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C4_Min).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_4_Max_Value = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C4_Max).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Counter_4_Tick = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.C4_Tick).Value);
                }
                catch (Exception) { }

                try
                {
                    m_Number_of_Tasks = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.NumTasks).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Activation = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T1_Act).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Autostart = bool.Parse(m_edit.GetCommittedParam(CyParamNames.T1_Auto).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Event_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_E1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Event_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_E2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Event_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_E3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Event_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_E4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Event_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_E5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Event_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_E6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Event_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_E7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Event_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_E8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Name = m_edit.GetCommittedParam(CyParamNames.T1_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Number_Events = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T1_NumE).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Number_Resources = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T1_NumR).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_Prio).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Schedule = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_Schedule).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Stack = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_Stack).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Stack_Size = Convert.ToUInt16(m_edit.GetCommittedParam(CyParamNames.T1_StackSize).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Resource_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_R1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Resource_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_R2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Resource_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_R3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Resource_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_R4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Resource_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_R5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Resource_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_R6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Resource_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_R7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_1_Resource_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T1_R8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Activation = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T2_Act).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Autostart = bool.Parse(m_edit.GetCommittedParam(CyParamNames.T2_Auto).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Event_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_E1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Event_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_E2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Event_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_E3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Event_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_E4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Event_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_E5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Event_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_E6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Event_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_E7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Event_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_E8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Name = m_edit.GetCommittedParam(CyParamNames.T2_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Number_Events = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T2_NumE).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Number_Resources = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T2_NumR).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_Prio).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Schedule = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_Schedule).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Stack = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_Stack).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Stack_Size = Convert.ToUInt16(m_edit.GetCommittedParam(CyParamNames.T2_StackSize).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Resource_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_R1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Resource_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_R2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Resource_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_R3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Resource_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_R4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Resource_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_R5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Resource_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_R6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Resource_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_R7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_2_Resource_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T2_R8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Activation = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T3_Act).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Autostart = bool.Parse(m_edit.GetCommittedParam(CyParamNames.T3_Auto).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Event_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_E1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Event_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_E2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Event_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_E3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Event_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_E4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Event_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_E5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Event_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_E6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Event_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_E7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Event_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_E8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Name = m_edit.GetCommittedParam(CyParamNames.T3_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Number_Events = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T3_NumE).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Number_Resources = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T3_NumR).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_Prio).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Schedule = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_Schedule).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Stack = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_Stack).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Stack_Size = Convert.ToUInt16(m_edit.GetCommittedParam(CyParamNames.T3_StackSize).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Resource_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_R1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Resource_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_R2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Resource_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_R3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Resource_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_R4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Resource_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_R5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Resource_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_R6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Resource_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_R7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_3_Resource_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T3_R8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Activation = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T4_Act).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Autostart = bool.Parse(m_edit.GetCommittedParam(CyParamNames.T4_Auto).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Event_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_E1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Event_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_E2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Event_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_E3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Event_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_E4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Event_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_E5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Event_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_E6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Event_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_E7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Event_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_E8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Name = m_edit.GetCommittedParam(CyParamNames.T4_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Number_Events = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T4_NumE).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Number_Resources = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T4_NumR).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_Prio).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Schedule = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_Schedule).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Stack = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_Stack).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Stack_Size = Convert.ToUInt16(m_edit.GetCommittedParam(CyParamNames.T4_StackSize).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Resource_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_R1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Resource_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_R2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Resource_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_R3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Resource_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_R4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Resource_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_R5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Resource_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_R6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Resource_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_R7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_4_Resource_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T4_R8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Activation = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T5_Act).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Autostart = bool.Parse(m_edit.GetCommittedParam(CyParamNames.T5_Auto).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Event_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_E1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Event_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_E2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Event_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_E3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Event_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_E4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Event_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_E5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Event_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_E6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Event_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_E7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Event_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_E8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Name = m_edit.GetCommittedParam(CyParamNames.T5_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Number_Events = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T5_NumE).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Number_Resources = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T5_NumR).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_Prio).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Schedule = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_Schedule).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Stack = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_Stack).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Stack_Size = Convert.ToUInt16(m_edit.GetCommittedParam(CyParamNames.T5_StackSize).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Resource_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_R1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Resource_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_R2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Resource_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_R3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Resource_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_R4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Resource_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_R5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Resource_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_R6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Resource_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_R7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_5_Resource_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T5_R8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Activation = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T6_Act).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Autostart = bool.Parse(m_edit.GetCommittedParam(CyParamNames.T6_Auto).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Event_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_E1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Event_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_E2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Event_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_E3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Event_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_E4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Event_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_E5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Event_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_E6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Event_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_E7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Event_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_E8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Name = m_edit.GetCommittedParam(CyParamNames.T6_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Number_Events = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T6_NumE).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Number_Resources = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T6_NumR).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_Prio).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Schedule = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_Schedule).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Stack = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_Stack).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Stack_Size = Convert.ToUInt16(m_edit.GetCommittedParam(CyParamNames.T6_StackSize).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Resource_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_R1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Resource_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_R2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Resource_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_R3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Resource_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_R4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Resource_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_R5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Resource_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_R6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Resource_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_R7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_6_Resource_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T6_R8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Activation = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T7_Act).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Autostart = bool.Parse(m_edit.GetCommittedParam(CyParamNames.T7_Auto).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Event_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_E1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Event_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_E2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Event_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_E3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Event_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_E4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Event_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_E5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Event_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_E6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Event_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_E7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Event_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_E8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Name = m_edit.GetCommittedParam(CyParamNames.T7_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Number_Events = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T7_NumE).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Number_Resources = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T7_NumR).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_Prio).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Schedule = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_Schedule).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Stack = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_Stack).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Stack_Size = Convert.ToUInt16(m_edit.GetCommittedParam(CyParamNames.T7_StackSize).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Resource_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_R1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Resource_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_R2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Resource_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_R3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Resource_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_R4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Resource_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_R5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Resource_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_R6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Resource_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_R7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_7_Resource_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T7_R8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Activation = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T8_Act).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Autostart = bool.Parse(m_edit.GetCommittedParam(CyParamNames.T8_Auto).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Event_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_E1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Event_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_E2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Event_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_E3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Event_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_E4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Event_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_E5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Event_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_E6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Event_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_E7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Event_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_E8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Name = m_edit.GetCommittedParam(CyParamNames.T8_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Number_Events = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T8_NumE).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Number_Resources = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.T8_NumR).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_Prio).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Schedule = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_Schedule).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Stack = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_Stack).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Stack_Size = Convert.ToUInt16(m_edit.GetCommittedParam(CyParamNames.T8_StackSize).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Resource_1 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_R1).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Resource_2 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_R2).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Resource_3 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_R3).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Resource_4 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_R4).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Resource_5 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_R5).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Resource_6 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_R6).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Resource_7 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_R7).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Task_8_Resource_8 = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.T8_R8).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Number_of_Alarms = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.NumAlarms).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_1_Action = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A1_Action).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_1_Callback_Name = m_edit.GetCommittedParam(CyParamNames.A1_Callback).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_1_Counter = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A1_Counter).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_1_Event = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A1_Event).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_1_Name = m_edit.GetCommittedParam(CyParamNames.A1_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_1_Task = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A1_Task).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_2_Action = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A2_Action).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_2_Callback_Name = m_edit.GetCommittedParam(CyParamNames.A2_Callback).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_2_Counter = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A2_Counter).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_2_Event = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A2_Event).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_2_Name = m_edit.GetCommittedParam(CyParamNames.A2_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_2_Task = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A2_Task).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_3_Action = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A3_Action).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_3_Callback_Name = m_edit.GetCommittedParam(CyParamNames.A3_Callback).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_3_Counter = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A3_Counter).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_3_Event = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A3_Event).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_3_Name = m_edit.GetCommittedParam(CyParamNames.A3_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_3_Task = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A3_Task).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_4_Action = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A4_Action).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_4_Callback_Name = m_edit.GetCommittedParam(CyParamNames.A4_Callback).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_4_Counter = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A4_Counter).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_4_Event = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A4_Event).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_4_Name = m_edit.GetCommittedParam(CyParamNames.A4_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_4_Task = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A4_Task).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_5_Action = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A5_Action).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_5_Callback_Name = m_edit.GetCommittedParam(CyParamNames.A5_Callback).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_5_Counter = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A5_Counter).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_5_Event = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A5_Event).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_5_Name = m_edit.GetCommittedParam(CyParamNames.A5_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_5_Task = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A5_Task).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_6_Action = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A6_Action).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_6_Callback_Name = m_edit.GetCommittedParam(CyParamNames.A6_Callback).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_6_Counter = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A6_Counter).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_6_Event = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A6_Event).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_6_Name = m_edit.GetCommittedParam(CyParamNames.A6_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_6_Task = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A6_Task).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_7_Action = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A7_Action).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_7_Callback_Name = m_edit.GetCommittedParam(CyParamNames.A7_Callback).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_7_Counter = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A7_Counter).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_7_Event = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A7_Event).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_7_Name = m_edit.GetCommittedParam(CyParamNames.A7_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_7_Task = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A7_Task).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_8_Action = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A8_Action).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_8_Callback_Name = m_edit.GetCommittedParam(CyParamNames.A8_Callback).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_8_Counter = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A8_Counter).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_8_Event = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A8_Event).Value);
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_8_Name = m_edit.GetCommittedParam(CyParamNames.A8_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_Alarm_8_Task = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.A8_Task).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_1_Name = m_edit.GetCommittedParam(CyParamNames.ISR1_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_1_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR1_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_1_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR1_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_1_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR1_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_2_Name = m_edit.GetCommittedParam(CyParamNames.ISR2_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_2_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR2_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_2_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR2_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_2_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR2_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_3_Name = m_edit.GetCommittedParam(CyParamNames.ISR3_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_3_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR3_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_3_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR3_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_3_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR3_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_4_Name = m_edit.GetCommittedParam(CyParamNames.ISR4_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_4_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR4_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_4_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR4_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_4_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR4_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_5_Name = m_edit.GetCommittedParam(CyParamNames.ISR5_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_5_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR5_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_5_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR5_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_5_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR5_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_6_Name = m_edit.GetCommittedParam(CyParamNames.ISR6_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_6_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR6_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_6_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR6_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_6_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR6_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_7_Name = m_edit.GetCommittedParam(CyParamNames.ISR7_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_7_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR7_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_7_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR7_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_7_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR7_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_8_Name = m_edit.GetCommittedParam(CyParamNames.ISR8_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_8_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR8_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_8_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR8_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_8_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR8_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_9_Name = m_edit.GetCommittedParam(CyParamNames.ISR9_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_9_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR9_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_9_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR9_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_9_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR9_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_10_Name = m_edit.GetCommittedParam(CyParamNames.ISR10_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_10_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR10_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_10_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR10_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_10_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR10_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_11_Name = m_edit.GetCommittedParam(CyParamNames.ISR11_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_11_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR11_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_11_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR11_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_11_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR11_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_12_Name = m_edit.GetCommittedParam(CyParamNames.ISR12_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_12_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR12_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_12_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR12_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_12_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR12_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_13_Name = m_edit.GetCommittedParam(CyParamNames.ISR13_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_13_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR13_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_13_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR13_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_13_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR13_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_14_Name = m_edit.GetCommittedParam(CyParamNames.ISR14_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_14_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR14_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_14_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR14_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_14_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR14_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_15_Name = m_edit.GetCommittedParam(CyParamNames.ISR15_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_15_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR15_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_15_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR15_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_15_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR15_Res).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_16_Name = m_edit.GetCommittedParam(CyParamNames.ISR16_Name).Value;
                }
                catch (Exception) { }
                try
                {
                    m_ISR_16_Category = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR16_Cat).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_16_Priority = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR16_Pri).Value);
                }
                catch (Exception) { }
                try
                {
                    m_ISR_16_Resource = Convert.ToInt32(m_edit.GetCommittedParam(CyParamNames.ISR16_Res).Value);
                }
                catch (Exception) { }
                try
                {

                    m_Number_of_ISR = Convert.ToByte(m_edit.GetCommittedParam(CyParamNames.NumISRs).Value);
                }
                catch (Exception) { }
            }
        }

        public void CommitParams()
        {
            if (m_edit != null)
            {
                if (!m_edit.CommitParamExprs())
                {
                    MessageBox.Show("Error in Commiting Parameters");
                }
            }
        }
    }
}
