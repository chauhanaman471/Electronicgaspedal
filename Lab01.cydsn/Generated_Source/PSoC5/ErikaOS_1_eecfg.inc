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
    #define EE_MAX_TASK 5
    #if EE_MAX_TASK > 0
    #define tsk_init 0
    #endif
    #if EE_MAX_TASK > 1
    #define tsk_background 1
    #endif
    #if EE_MAX_TASK > 2
    #define tsk_io 2
    #endif
    #if EE_MAX_TASK > 3
    #define tsk_control 3
    #endif
    #if EE_MAX_TASK > 4
    #define tsk_brakelight 4
    #endif
    #if EE_MAX_TASK > 5
    #define Task_6 5
    #endif
    #if EE_MAX_TASK > 6
    #define Task_7 6
    #endif
    #if EE_MAX_TASK > 7
    #define Task_8 7
    #endif

    /* MUTEX definition */
    #if 0
    #define RES_SCHEDULER 0U
    #define RES1 1
    #else
    #define RES1 0
    #endif
    #if (0 || RES1)
    #define EE_MAX_RESOURCE (0+RES1)
    #endif
    #if EE_MAX_RESOURCE > 0
    #define Resource_1 (0+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 1
    #define Resource_2 (1+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 2
    #define Resource_3 (2+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 3
    #define Resource_4 (3+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 4
    #define Resource_5 (4+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 5
    #define Resource_6 (5+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 6
    #define Resource_7 (6+RES1)
    #endif    
    #if EE_MAX_RESOURCE > 7
    #define Resource_8 (7+RES1)
    #endif
    
    /* EVENT definition */
    #if 1
    #include "ErikaOS_1_event_definition.inc"
    #endif
    
    /* ALARM definition */
    #define EE_MAX_ALARM 1U
    #if EE_MAX_ALARM > 0
    #define alrm_1ms 0U
    #endif
    #if EE_MAX_ALARM > 1
    #define Alarm_2 1U
    #endif
    #if EE_MAX_ALARM > 2
    #define Alarm_3 2U
    #endif
    #if EE_MAX_ALARM > 3
    #define Alarm_4 3U
    #endif
    #if EE_MAX_ALARM > 4
    #define Alarm_5 4U
    #endif
    #if EE_MAX_ALARM > 5
    #define Alarm_6 5U
    #endif
    #if EE_MAX_ALARM > 6
    #define Alarm_7 6U
    #endif
    #if EE_MAX_ALARM > 7
    #define Alarm_8 7U
    #endif

    /* SCHEDULING TABLE definition */
    #define EE_MAX_SCHEDULETABLE 0U

    /* COUNTER OBJECTS definition */
    #define EE_MAX_COUNTER_OBJECTS (EE_MAX_ALARM + EE_MAX_SCHEDULETABLE)

    /* COUNTER definition */
    #define EE_MAX_COUNTER 1
    #if EE_MAX_COUNTER > 0
    #define cnt_systick 0U
    #endif
    #if EE_MAX_COUNTER > 1
    #define myCounter_2 1U
    #endif
    #if EE_MAX_COUNTER > 2
    #define myCounter_3 2U
    #endif    
    #if EE_MAX_COUNTER > 3
    #define myCounter_4 3U
    #endif
    
    /* APPMODE definition */
    #define EE_MAX_APPMODE 1U

    /* CPUs */
    #define EE_MAX_CPU 1
    #define EE_CURRENTCPU 0

    /* Number of isr */
    #include "ErikaOS_1_ISR_definition.inc"
    #define EE_MAX_ISR_ID 0    
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
#if     1 == 1
#define __CORTEX_M4__
#else
#define __CORTEX_M0__
#endif
#define __GNU__
#if     4 == 1
#define __OO_BCC1__
#elif   4 == 2
#define __OO_BCC2__
#elif   4 == 3
#define __OO_ECC1__
#else
#define __OO_ECC2__
#endif
#if     2 == 2
#define __OO_EXTENDED_STATUS__
#endif
#if 0
#define __OO_HAS_STARTUPHOOK__
#endif
#if 0
#define __OO_HAS_ERRORHOOK__
#endif
#if 0
#define __OO_HAS_SHUTDOWNHOOK__
#endif
#if 0
#define __OO_HAS_PRETASKHOOK__
#endif
#if 0
#define __OO_HAS_POSTTASKHOOK__
#endif
#if     0
#define __OO_HAS_USEGETSERVICEID__
#endif
#if     0
#define __OO_HAS_USEPARAMETERACCESS__
#endif
#if     1 && 1
#define __IRQ_STACK_NEEDED__
#endif
#if     1
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
#if 0
#define __OO_HAS_USERESSCHEDULER__
#endif
#if 1
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
extern void systick_handler(void);
#define EE_CORTEX_MX_SYSTICK_ISR systick_handler
#define EE_CORTEX_MX_SYSTICK_ISR_PRI 255            //Systick should have the lowest priority.
#endif

#if EE_MAX_ISR_ID > 0
extern void ISR_1(void);
#endif
#if EE_MAX_ISR_ID > 1
extern void ISR_2(void);
#endif
#if EE_MAX_ISR_ID > 2
extern void ISR_3(void);
#endif
#if EE_MAX_ISR_ID > 3
extern void ISR_4(void);
#endif
#if EE_MAX_ISR_ID > 4
extern void ISR_5(void);
#endif
#if EE_MAX_ISR_ID > 5
extern void ISR_6(void);
#endif
#if EE_MAX_ISR_ID > 6
extern void ISR_7(void);
#endif
#if EE_MAX_ISR_ID > 7
extern void ISR_8(void);
#endif
#if EE_MAX_ISR_ID > 8
extern void ISR_9(void);
#endif
#if EE_MAX_ISR_ID > 9
extern void ISR_10(void);
#endif
#if EE_MAX_ISR_ID > 10
extern void ISR_11(void);
#endif
#if EE_MAX_ISR_ID > 11
extern void ISR_12(void);
#endif
#if EE_MAX_ISR_ID > 12
extern void ISR_13(void);
#endif
#if EE_MAX_ISR_ID > 13
extern void ISR_14(void);
#endif
#if EE_MAX_ISR_ID > 14
extern void ISR_15(void);
#endif
#if EE_MAX_ISR_ID > 15
extern void ISR_16(void);
#endif


/***************************************************************************
 *
 * Counter defines
 *
 **************************************************************************/
#if EE_MAX_COUNTER > 0
#define OSMAXALLOWEDVALUE_cnt_systick 10000U
#define OSTICKSPERBASE_cnt_systick    1U
#define OSMINCYCLE_cnt_systick        0U
#endif
#if EE_MAX_COUNTER > 1
#define OSMAXALLOWEDVALUE_myCounter_2 0U
#define OSTICKSPERBASE_myCounter_2    0U
#define OSMINCYCLE_myCounter_2        0U
#endif
#if EE_MAX_COUNTER > 2
#define OSMAXALLOWEDVALUE_myCounter_3 0U
#define OSTICKSPERBASE_myCounter_3    0U
#define OSMINCYCLE_myCounter_3        0U
#endif
#if EE_MAX_COUNTER > 3
#define OSMAXALLOWEDVALUE_myCounter_4 0U
#define OSTICKSPERBASE_myCounter_4    0U
#define OSMINCYCLE_myCounter_4        0U
#endif

/***************************************************************************
 *
 * Vector size defines
 *
 **************************************************************************/
    #define EE_ACTION_ROM_SIZE EE_MAX_ALARM
    #define EE_ALARM_ROM_SIZE EE_MAX_ALARM

    #if (1 == 2) && (EE_MAX_TASK > 0)
        #define TSK1_STCK 1
    #else
        #define TSK1_STCK 0
    #endif
    #if (1 == 2) && (EE_MAX_TASK > 1)
        #define TSK2_STCK 1
    #else
        #define TSK2_STCK 0
    #endif
    #if (1 == 2) && (EE_MAX_TASK > 2)
        #define TSK3_STCK 1
    #else
        #define TSK3_STCK 0
    #endif
    #if (2 == 2) && (EE_MAX_TASK > 3)
        #define TSK4_STCK 1
    #else
        #define TSK4_STCK 0
    #endif
    #if (2 == 2) && (EE_MAX_TASK > 4)
        #define TSK5_STCK 1
    #else
        #define TSK5_STCK 0
    #endif
    #if (1 == 2) && (EE_MAX_TASK > 5)
        #define TSK6_STCK 1
    #else
        #define TSK6_STCK 0
    #endif
    #if (1 == 2) && (EE_MAX_TASK > 6)
        #define TSK7_STCK 1
    #else
        #define TSK7_STCK 0
    #endif
    #if (1 == 2) && (EE_MAX_TASK > 7)
        #define TSK8_STCK 1
    #else
        #define TSK8_STCK 0
    #endif

    #define EE_CORTEX_MX_SYSTEM_TOS_SIZE (TSK1_STCK + TSK2_STCK + TSK3_STCK + TSK4_STCK + TSK5_STCK + TSK6_STCK + TSK7_STCK + TSK8_STCK + 1)

    #define EE_COUNTER_OBJECTS_ROM_SIZE EE_MAX_ALARM
    #define EE_COUNTER_ROM_SIZE EE_MAX_COUNTER

    #if 1 && (EE_MAX_TASK > 0)
        #define TSK1_AS 1
    #else
        #define TSK1_AS 0
    #endif
    #if 0 && (EE_MAX_TASK > 1)
        #define TSK2_AS 1
    #else
        #define TSK2_AS 0
    #endif
    #if 0 && (EE_MAX_TASK > 2)
        #define TSK3_AS 1
    #else
        #define TSK3_AS 0
    #endif
    #if 0 && (EE_MAX_TASK > 3)
        #define TSK4_AS 1
    #else
        #define TSK4_AS 0
    #endif
    #if 0 && (EE_MAX_TASK > 4)
        #define TSK5_AS 1
    #else
        #define TSK5_AS 0
    #endif
    #if 0 && (EE_MAX_TASK > 5)
        #define TSK6_AS 1
    #else
        #define TSK6_AS 0
    #endif
    #if 0 && (EE_MAX_TASK > 6)
        #define TSK7_AS 1
    #else
        #define TSK7_AS 0
    #endif
    #if 0 && (EE_MAX_TASK > 7)
        #define TSK8_AS 1
    #else
        #define TSK8_AS 0
    #endif
    
    #if (TSK1_AS + TSK2_AS + TSK3_AS + TSK4_AS + TSK5_AS + TSK6_AS + TSK7_AS + TSK8_AS)
    #define __OO_AUTOSTART_TASK__
    #define EE_OO_AUTOSTART_TASK_MODE_OSDEFAULTAPPMODE_SIZE (TSK1_AS + TSK2_AS + TSK3_AS + TSK4_AS + TSK5_AS + TSK6_AS + TSK7_AS + TSK8_AS)
    #endif
    
    #if 1 && (EE_MAX_TASK > 0)
        #define TSK1_ACT 1
    #else
        #define TSK1_ACT 0
    #endif
    #if 1 && (EE_MAX_TASK > 1)
        #define TSK2_ACT 1
    #else
        #define TSK2_ACT 0
    #endif
    #if 1 && (EE_MAX_TASK > 2)
        #define TSK3_ACT 1
    #else
        #define TSK3_ACT 0
    #endif
    #if 1 && (EE_MAX_TASK > 3)
        #define TSK4_ACT 1
    #else
        #define TSK4_ACT 0
    #endif
    #if 1 && (EE_MAX_TASK > 4)
        #define TSK5_ACT 1
    #else
        #define TSK5_ACT 0
    #endif
    #if 1 && (EE_MAX_TASK > 5)
        #define TSK6_ACT 1
    #else
        #define TSK6_ACT 0
    #endif
    #if 1 && (EE_MAX_TASK > 6)
        #define TSK7_ACT 1
    #else
        #define TSK7_ACT 0
    #endif
    #if 1 && (EE_MAX_TASK > 7)
        #define TSK8_ACT 1
    #else
        #define TSK8_ACT 0
    #endif
    
    #define EE_RQ_PAIRS_NEXT_SIZE (TSK1_ACT + TSK2_ACT + TSK3_ACT + TSK4_ACT + TSK5_ACT + TSK6_ACT + TSK7_ACT + TSK8_ACT)
    #define EE_RQ_PAIRS_TID_SIZE (TSK1_ACT + TSK2_ACT + TSK3_ACT + TSK4_ACT + TSK5_ACT + TSK6_ACT + TSK7_ACT + TSK8_ACT)
    #define EE_RQ_QUEUES_HEAD_SIZE 16
    #define EE_RQ_QUEUES_TAIL_SIZE 16


#endif

