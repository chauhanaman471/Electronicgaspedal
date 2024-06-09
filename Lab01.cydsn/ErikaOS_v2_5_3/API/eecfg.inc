/*
 * PSoC Port and API Generation
 * Carlos Fernando Meier Martinez
 * Hochschule Darmstadt, Germany. 2017.
 */

#ifndef RTDH_EECFG_H
#define RTDH_EECFG_H


#define RTDRUID_CONFIGURATOR_NUMBER 1278



/***************************************************************************
 *
 * Common defines ( CPU 0 )
 *
 **************************************************************************/

    /* TASK definition */
    #define EE_MAX_TASK `@Number_of_Tasks`
    #if EE_MAX_TASK > 0
    #define `@Task_1_Name` 0
    #endif
    #if EE_MAX_TASK > 1
    #define `@Task_2_Name` 1
    #endif
    #if EE_MAX_TASK > 2
    #define `@Task_3_Name` 2
    #endif
    #if EE_MAX_TASK > 3
    #define `@Task_4_Name` 3
    #endif
    #if EE_MAX_TASK > 4
    #define `@Task_5_Name` 4
    #endif
    #if EE_MAX_TASK > 5
    #define `@Task_6_Name` 5
    #endif
    #if EE_MAX_TASK > 6
    #define `@Task_7_Name` 6
    #endif
    #if EE_MAX_TASK > 7
    #define `@Task_8_Name` 7
    #endif

    /* MUTEX definition */
    #if `@USE_RES_SCHEDULER`
    #define RES_SCHEDULER 0U
    #define RES1 1
    #else
    #define RES1 0
    #endif
    #if (`@Number_of_Resources` || RES1)
    #define EE_MAX_RESOURCE (`@Number_of_Resources`+RES1)
    #endif
    #if EE_MAX_RESOURCE > 0
    #define `@Resource_1` (0+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 1
    #define `@Resource_2` (1+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 2
    #define `@Resource_3` (2+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 3
    #define `@Resource_4` (3+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 4
    #define `@Resource_5` (4+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 5
    #define `@Resource_6` (5+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 6
    #define `@Resource_7` (6+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 7
    #define `@Resource_8` (7+RES1)
    #endif
    
    /* EVENT definition */
    #if `@MULTI_STACK`
    #include "`$INSTANCE_NAME`_event_definition.inc"
    #endif
    
    /* ALARM definition */
    #define EE_MAX_ALARM `@Number_of_Alarms`U
    #if EE_MAX_ALARM > 0
    #define `@Alarm_1_Name` 0U
    #endif
    #if EE_MAX_ALARM > 1
    #define `@Alarm_2_Name` 1U
    #endif
    #if EE_MAX_ALARM > 2
    #define `@Alarm_3_Name` 2U
    #endif
    #if EE_MAX_ALARM > 3
    #define `@Alarm_4_Name` 3U
    #endif
    #if EE_MAX_ALARM > 4
    #define `@Alarm_5_Name` 4U
    #endif
    #if EE_MAX_ALARM > 5
    #define `@Alarm_6_Name` 5U
    #endif
    #if EE_MAX_ALARM > 6
    #define `@Alarm_7_Name` 6U
    #endif
    #if EE_MAX_ALARM > 7
    #define `@Alarm_8_Name` 7U
    #endif

    /* SCHEDULING TABLE definition */
    #define EE_MAX_SCHEDULETABLE 0U

    /* COUNTER OBJECTS definition */
    #define EE_MAX_COUNTER_OBJECTS (EE_MAX_ALARM + EE_MAX_SCHEDULETABLE)

    /* COUNTER definition */
    #define EE_MAX_COUNTER `@Number_of_Counters`
    #if EE_MAX_COUNTER > 0
    #define `@Counter_1_Name` 0U
    #endif
    #if EE_MAX_COUNTER > 1
    #define `@Counter_2_Name` 1U
    #endif
    #if EE_MAX_COUNTER > 2
    #define `@Counter_3_Name` 2U
    #endif    
    #if EE_MAX_COUNTER > 3
    #define `@Counter_4_Name` 3U
    #endif
    
    /* APPMODE definition */
    #define EE_MAX_APPMODE 1U

    /* CPUs */
    #define EE_MAX_CPU 1
    #define EE_CURRENTCPU 0

    /* Number of isr */
    #include "`$INSTANCE_NAME`_ISR_definition.inc"
    #define EE_MAX_ISR_ID `@Number_of_ISR`    
    #define EE_MAX_ISR2   Number_ISR2
    #define EE_MAX_ISR2_WITH_RESOURCES Number_ISR2_Resources
    
#ifndef __DISABLE_EEOPT_DEFINES__


/***************************************************************************
 *
 * User options
 *
 **************************************************************************/


/***************************************************************************
 *
 * Automatic options
 *
 **************************************************************************/
#define __RTD_CYGWIN__
#define __CORTEX_MX__
#if     `@CPU_TYPE` == 1
#define __CORTEX_M4__
#else
#define __CORTEX_M0__
#endif
#define __GNU__
#if     `@KERNEL_TYPE` == 1
#define __OO_BCC1__
#elif   `@KERNEL_TYPE` == 2
#define __OO_BCC2__
#elif   `@KERNEL_TYPE` == 3
#define __OO_ECC1__
#else
#define __OO_ECC2__
#endif
#if     `@STATUS` == 2
#define __OO_EXTENDED_STATUS__
#endif
#if `@USE_STARTUP_HOOK`
#define __OO_HAS_STARTUPHOOK__
#endif
#if `@USE_ERROR_HOOK`
#define __OO_HAS_ERRORHOOK__
#endif
#if `@USE_SHUTDOWN_HOOK`
#define __OO_HAS_SHUTDOWNHOOK__
#endif
#if `@USE_PRETASK_HOOK`
#define __OO_HAS_PRETASKHOOK__
#endif
#if `@USE_POSTTASK_HOOK`
#define __OO_HAS_POSTTASKHOOK__
#endif
#if     `@USE_GET_SERVICE_ID`
#define __OO_HAS_USEGETSERVICEID__
#endif
#if     `@USE_PARAMETER_ACCESS`
#define __OO_HAS_USEPARAMETERACCESS__
#endif
#if     `@MULTI_STACK_IRQ` && `@MULTI_STACK`
#define __IRQ_STACK_NEEDED__
#endif
#if     `@MULTI_STACK`
#define __MULTI__
#else
        __MONO__
#endif
#ifndef EE_MAX_RESOURCE
#define __OO_NO_RESOURCES__
#endif
#if EE_MAX_ALARM == 0
#define __OO_NO_ALARMS__
#endif
#if Number_ISR2_Resources
#define __OO_ISR2_RESOURCES__
#endif
#if `@USE_RES_SCHEDULER`
#define __OO_HAS_USERESSCHEDULER__
#endif
#if `@USE_SYSTICK`
#define __USE_SYSTICK__
#endif
#define __ALLOW_NESTED_IRQ__

#endif



/***************************************************************************
 *
 * ISR definition
 *
 **************************************************************************/
#ifdef __USE_SYSTICK__
extern void `@Systick_Handler_Name`(void);
#define EE_CORTEX_MX_SYSTICK_ISR `@Systick_Handler_Name`
#define EE_CORTEX_MX_SYSTICK_ISR_PRI 255            //Systick should have the lowest priority.
#endif

#if EE_MAX_ISR_ID > 0
extern void `@ISR_1_Name`(void);
#endif
#if EE_MAX_ISR_ID > 1
extern void `@ISR_2_Name`(void);
#endif
#if EE_MAX_ISR_ID > 2
extern void `@ISR_3_Name`(void);
#endif
#if EE_MAX_ISR_ID > 3
extern void `@ISR_4_Name`(void);
#endif
#if EE_MAX_ISR_ID > 4
extern void `@ISR_5_Name`(void);
#endif
#if EE_MAX_ISR_ID > 5
extern void `@ISR_6_Name`(void);
#endif
#if EE_MAX_ISR_ID > 6
extern void `@ISR_7_Name`(void);
#endif
#if EE_MAX_ISR_ID > 7
extern void `@ISR_8_Name`(void);
#endif
#if EE_MAX_ISR_ID > 8
extern void `@ISR_9_Name`(void);
#endif
#if EE_MAX_ISR_ID > 9
extern void `@ISR_10_Name`(void);
#endif
#if EE_MAX_ISR_ID > 10
extern void `@ISR_11_Name`(void);
#endif
#if EE_MAX_ISR_ID > 11
extern void `@ISR_12_Name`(void);
#endif
#if EE_MAX_ISR_ID > 12
extern void `@ISR_13_Name`(void);
#endif
#if EE_MAX_ISR_ID > 13
extern void `@ISR_14_Name`(void);
#endif
#if EE_MAX_ISR_ID > 14
extern void `@ISR_15_Name`(void);
#endif
#if EE_MAX_ISR_ID > 15
extern void `@ISR_16_Name`(void);
#endif


/***************************************************************************
 *
 * Counter defines
 *
 **************************************************************************/
#if EE_MAX_COUNTER > 0
#define OSMAXALLOWEDVALUE_`@Counter_1_Name` `@Counter_1_Max_Value`U
#define OSTICKSPERBASE_`@Counter_1_Name`    `@Counter_1_Tick`U
#define OSMINCYCLE_`@Counter_1_Name`        `@Counter_1_Min_Cycle`U
#endif
#if EE_MAX_COUNTER > 1
#define OSMAXALLOWEDVALUE_`@Counter_2_Name` `@Counter_2_Max_Value`U
#define OSTICKSPERBASE_`@Counter_2_Name`    `@Counter_2_Tick`U
#define OSMINCYCLE_`@Counter_2_Name`        `@Counter_2_Min_Cycle`U
#endif
#if EE_MAX_COUNTER > 2
#define OSMAXALLOWEDVALUE_`@Counter_3_Name` `@Counter_3_Max_Value`U
#define OSTICKSPERBASE_`@Counter_3_Name`    `@Counter_3_Tick`U
#define OSMINCYCLE_`@Counter_3_Name`        `@Counter_3_Min_Cycle`U
#endif
#if EE_MAX_COUNTER > 3
#define OSMAXALLOWEDVALUE_`@Counter_4_Name` `@Counter_4_Max_Value`U
#define OSTICKSPERBASE_`@Counter_4_Name`    `@Counter_4_Tick`U
#define OSMINCYCLE_`@Counter_4_Name`        `@Counter_4_Min_Cycle`U
#endif

/***************************************************************************
 *
 * Vector size defines
 *
 **************************************************************************/
    #define EE_ACTION_ROM_SIZE EE_MAX_ALARM
    #define EE_ALARM_ROM_SIZE EE_MAX_ALARM

    #if (`@Task_1_Stack` == 2) && (EE_MAX_TASK > 0)
        #define TSK1_STCK 1
    #else
        #define TSK1_STCK 0
    #endif
    #if (`@Task_2_Stack` == 2) && (EE_MAX_TASK > 1)
        #define TSK2_STCK 1
    #else
        #define TSK2_STCK 0
    #endif
    #if (`@Task_3_Stack` == 2) && (EE_MAX_TASK > 2)
        #define TSK3_STCK 1
    #else
        #define TSK3_STCK 0
    #endif
    #if (`@Task_4_Stack` == 2) && (EE_MAX_TASK > 3)
        #define TSK4_STCK 1
    #else
        #define TSK4_STCK 0
    #endif
    #if (`@Task_5_Stack` == 2) && (EE_MAX_TASK > 4)
        #define TSK5_STCK 1
    #else
        #define TSK5_STCK 0
    #endif
    #if (`@Task_6_Stack` == 2) && (EE_MAX_TASK > 5)
        #define TSK6_STCK 1
    #else
        #define TSK6_STCK 0
    #endif
    #if (`@Task_7_Stack` == 2) && (EE_MAX_TASK > 6)
        #define TSK7_STCK 1
    #else
        #define TSK7_STCK 0
    #endif
    #if (`@Task_8_Stack` == 2) && (EE_MAX_TASK > 7)
        #define TSK8_STCK 1
    #else
        #define TSK8_STCK 0
    #endif

    #define EE_CORTEX_MX_SYSTEM_TOS_SIZE (TSK1_STCK + TSK2_STCK + TSK3_STCK + TSK4_STCK + TSK5_STCK + TSK6_STCK + TSK7_STCK + TSK8_STCK + 1)

    #define EE_COUNTER_OBJECTS_ROM_SIZE EE_MAX_ALARM
    #define EE_COUNTER_ROM_SIZE EE_MAX_COUNTER

    #if `@Task_1_Autostart` && (EE_MAX_TASK > 0)
        #define TSK1_AS 1
    #else
        #define TSK1_AS 0
    #endif
    #if `@Task_2_Autostart` && (EE_MAX_TASK > 1)
        #define TSK2_AS 1
    #else
        #define TSK2_AS 0
    #endif
    #if `@Task_3_Autostart` && (EE_MAX_TASK > 2)
        #define TSK3_AS 1
    #else
        #define TSK3_AS 0
    #endif
    #if `@Task_4_Autostart` && (EE_MAX_TASK > 3)
        #define TSK4_AS 1
    #else
        #define TSK4_AS 0
    #endif
    #if `@Task_5_Autostart` && (EE_MAX_TASK > 4)
        #define TSK5_AS 1
    #else
        #define TSK5_AS 0
    #endif
    #if `@Task_6_Autostart` && (EE_MAX_TASK > 5)
        #define TSK6_AS 1
    #else
        #define TSK6_AS 0
    #endif
    #if `@Task_7_Autostart` && (EE_MAX_TASK > 6)
        #define TSK7_AS 1
    #else
        #define TSK7_AS 0
    #endif
    #if `@Task_8_Autostart` && (EE_MAX_TASK > 7)
        #define TSK8_AS 1
    #else
        #define TSK8_AS 0
    #endif
    
    #if (TSK1_AS + TSK2_AS + TSK3_AS + TSK4_AS + TSK5_AS + TSK6_AS + TSK7_AS + TSK8_AS)
    #define __OO_AUTOSTART_TASK__
    #define EE_OO_AUTOSTART_TASK_MODE_OSDEFAULTAPPMODE_SIZE (TSK1_AS + TSK2_AS + TSK3_AS + TSK4_AS + TSK5_AS + TSK6_AS + TSK7_AS + TSK8_AS)
    #endif
    
    #if `@Task_1_Activation` && (EE_MAX_TASK > 0)
        #define TSK1_ACT `@Task_1_Activation`
    #else
        #define TSK1_ACT 0
    #endif
    #if `@Task_2_Activation` && (EE_MAX_TASK > 1)
        #define TSK2_ACT `@Task_2_Activation`
    #else
        #define TSK2_ACT 0
    #endif
    #if `@Task_3_Activation` && (EE_MAX_TASK > 2)
        #define TSK3_ACT `@Task_3_Activation`
    #else
        #define TSK3_ACT 0
    #endif
    #if `@Task_4_Activation` && (EE_MAX_TASK > 3)
        #define TSK4_ACT `@Task_4_Activation`
    #else
        #define TSK4_ACT 0
    #endif
    #if `@Task_5_Activation` && (EE_MAX_TASK > 4)
        #define TSK5_ACT `@Task_5_Activation`
    #else
        #define TSK5_ACT 0
    #endif
    #if `@Task_6_Activation` && (EE_MAX_TASK > 5)
        #define TSK6_ACT `@Task_6_Activation`
    #else
        #define TSK6_ACT 0
    #endif
    #if `@Task_7_Activation` && (EE_MAX_TASK > 6)
        #define TSK7_ACT `@Task_7_Activation`
    #else
        #define TSK7_ACT 0
    #endif
    #if `@Task_8_Activation` && (EE_MAX_TASK > 7)
        #define TSK8_ACT `@Task_8_Activation`
    #else
        #define TSK8_ACT 0
    #endif
    
    #define EE_RQ_PAIRS_NEXT_SIZE (TSK1_ACT + TSK2_ACT + TSK3_ACT + TSK4_ACT + TSK5_ACT + TSK6_ACT + TSK7_ACT + TSK8_ACT)
    #define EE_RQ_PAIRS_TID_SIZE (TSK1_ACT + TSK2_ACT + TSK3_ACT + TSK4_ACT + TSK5_ACT + TSK6_ACT + TSK7_ACT + TSK8_ACT)
    #define EE_RQ_QUEUES_HEAD_SIZE 16
    #define EE_RQ_QUEUES_TAIL_SIZE 16


#endif

