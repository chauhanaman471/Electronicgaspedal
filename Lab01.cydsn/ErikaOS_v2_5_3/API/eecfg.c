/*
 * PSoC Port and API Generation
 * Carlos Fernando Meier Martinez
 * Hochschule Darmstadt, Germany. 2017.
 */

#include "`$INSTANCE_NAME`_ee.h"

/***************************************************************************
 *
 * Stack definition for CORTEX MX
 *
 **************************************************************************/
#if `@MULTI_STACK`
    #if ((`@Task_1_Stack` == 2) && (EE_MAX_TASK > 0))
    #define TASK_1_STACK_SIZE `@Task_1_Stack_Size`/4 // size = `@Task_1_Stack_Size` bytes
    int EE_cortex_mx_stack_1[TASK_1_STACK_SIZE];	/* Task 1 (`@Task_1_Name`) */
    #endif
    #if ((`@Task_2_Stack` == 2) && (EE_MAX_TASK > 1))
    #define TASK_2_STACK_SIZE `@Task_2_Stack_Size`/4 // size = `@Task_2_Stack_Size` bytes
    int EE_cortex_mx_stack_2[TASK_2_STACK_SIZE];	/* Task 2 (`@Task_2_Name`) */
    #endif
    #if ((`@Task_3_Stack` == 2) && (EE_MAX_TASK > 2))
    #define TASK_3_STACK_SIZE `@Task_3_Stack_Size`/4 // size = `@Task_3_Stack_Size` bytes
    int EE_cortex_mx_stack_3[TASK_3_STACK_SIZE];	/* Task 3 (`@Task_3_Name`) */
    #endif
    #if ((`@Task_4_Stack` == 2) && (EE_MAX_TASK > 3))
    #define TASK_4_STACK_SIZE `@Task_4_Stack_Size`/4 // size = `@Task_4_Stack_Size` bytes
    int EE_cortex_mx_stack_4[TASK_4_STACK_SIZE];	/* Task 4 (`@Task_4_Name`) */
    #endif
    #if ((`@Task_5_Stack` == 2) && (EE_MAX_TASK > 4))
    #define TASK_5_STACK_SIZE `@Task_5_Stack_Size`/4 // size = `@Task_5_Stack_Size` bytes
    int EE_cortex_mx_stack_5[TASK_5_STACK_SIZE];	/* Task 5 (`@Task_5_Name`) */
    #endif
    #if ((`@Task_6_Stack` == 2) && (EE_MAX_TASK > 5))
    #define TASK_6_STACK_SIZE `@Task_6_Stack_Size`/4 // size = `@Task_6_Stack_Size` bytes
    int EE_cortex_mx_stack_6[TASK_6_STACK_SIZE];	/* Task 6 (`@Task_6_Name`) */
    #endif
    #if ((`@Task_7_Stack` == 2) && (EE_MAX_TASK > 6))
    #define TASK_7_STACK_SIZE `@Task_7_Stack_Size`/4 // size = `@Task_7_Stack_Size` bytes
    int EE_cortex_mx_stack_7[TASK_7_STACK_SIZE];	/* Task 7 (`@Task_7_Name`) */
    #endif
    #if ((`@Task_8_Stack` == 2) && (EE_MAX_TASK > 7))
    #define TASK_8_STACK_SIZE `@Task_8_Stack_Size`/4 // size = `@Task_8_Stack_Size` bytes
    int EE_cortex_mx_stack_8[TASK_8_STACK_SIZE];	/* Task 8 (`@Task_8_Name`) */
    #endif
    
    #if `@MULTI_STACK_IRQ`
    #define IRQ_STACK_SIZE    `@MULTI_STACK_IRQ_SIZE`/4 // size = `@MULTI_STACK_IRQ_SIZE` bytes
    int EE_cortex_mx_stack_9[IRQ_STACK_SIZE];	/* IRQ Stack */
    #endif

#endif

    #ifdef TASK_1_STACK_SIZE
    #define Tsk1_ST 1
    #define Tsk1 (Tsk1_ST)
    #else
    #define Tsk1_ST 0
    #define Tsk1 0
    #endif
    #ifdef TASK_2_STACK_SIZE
    #define Tsk2_ST 1
    #define Tsk2 (Tsk1_ST+Tsk2_ST)
    #else
    #define Tsk2_ST 0
    #define Tsk2 0
    #endif
    #ifdef TASK_3_STACK_SIZE
    #define Tsk3_ST 1
    #define Tsk3 (Tsk1_ST+Tsk2_ST+Tsk3_ST)
    #else
    #define Tsk3_ST 0
    #define Tsk3 0
    #endif
    #ifdef TASK_4_STACK_SIZE
    #define Tsk4_ST 1
    #define Tsk4 (Tsk1_ST+Tsk2_ST+Tsk3_ST+Tsk4_ST)
    #else
    #define Tsk4_ST 0
    #define Tsk4 0
    #endif
    #ifdef TASK_5_STACK_SIZE
    #define Tsk5_ST 1
    #define Tsk5 (Tsk1_ST+Tsk2_ST+Tsk3_ST+Tsk4_ST+Tsk5_ST)
    #else
    #define Tsk5_ST 0
    #define Tsk5 0
    #endif
    #ifdef TASK_6_STACK_SIZE
    #define Tsk6_ST 1
    #define Tsk6 (Tsk1_ST+Tsk2_ST+Tsk3_ST+Tsk4_ST+Tsk5_ST+Tsk6_ST)
    #else
    #define Tsk6_ST 0
    #define Tsk6 0
    #endif
    #ifdef TASK_7_STACK_SIZE
    #define Tsk7_ST 1
    #define Tsk7 (Tsk1_ST+Tsk2_ST+Tsk3_ST+Tsk4_ST+Tsk5_ST+Tsk6_ST+Tsk7_ST)
    #else
    #define Tsk7_ST 0
    #define Tsk7 0
    #endif
    #ifdef TASK_8_STACK_SIZE
    #define Tsk8_ST 1
    #define Tsk8 (Tsk1_ST+Tsk2_ST+Tsk3_ST+Tsk4_ST+Tsk5_ST+Tsk6_ST+Tsk7_ST+Tsk8_ST)
    #else
    #define Tsk8_ST 0
    #define Tsk8 0
    #endif
    

    const EE_UREG EE_std_thread_tos[EE_MAX_TASK+1] = {
        0U	 /* dummy*/
    #if EE_MAX_TASK > 0
        ,Tsk1	 /* `@Task_1_Name`*/
    #endif
    #if EE_MAX_TASK > 1
        ,Tsk2	 /* `@Task_2_Name`*/
    #endif
    #if EE_MAX_TASK > 2
        ,Tsk3	 /* `@Task_3_Name`*/
    #endif
    #if EE_MAX_TASK > 3
        ,Tsk4	 /* `@Task_4_Name`*/
    #endif
    #if EE_MAX_TASK > 4
        ,Tsk5	 /* `@Task_5_Name`*/
    #endif
    #if EE_MAX_TASK > 5
        ,Tsk6	 /* `@Task_6_Name`*/
    #endif
    #if EE_MAX_TASK > 6
        ,Tsk7 	 /* `@Task_7_Name`*/
    #endif
    #if EE_MAX_TASK > 7
        ,Tsk8      /* `@Task_8_Name`*/
    #endif
    };

    struct EE_TOS EE_cortex_mx_system_tos[EE_CORTEX_MX_SYSTEM_TOS_SIZE] = {
        {0}
        #ifdef TASK_1_STACK_SIZE
        ,{(EE_ADDR)(&EE_cortex_mx_stack_1[(TASK_1_STACK_SIZE) - CORTEX_MX_INIT_TOS_OFFSET])}	/* `@Task_1_Name`*/
        #endif
        #ifdef TASK_2_STACK_SIZE
        ,{(EE_ADDR)(&EE_cortex_mx_stack_2[(TASK_2_STACK_SIZE) - CORTEX_MX_INIT_TOS_OFFSET])}	/* `@Task_2_Name`*/
        #endif
        #ifdef TASK_3_STACK_SIZE
        ,{(EE_ADDR)(&EE_cortex_mx_stack_3[(TASK_3_STACK_SIZE) - CORTEX_MX_INIT_TOS_OFFSET])} 	/* `@Task_3_Name`*/
        #endif
        #ifdef TASK_4_STACK_SIZE
        ,{(EE_ADDR)(&EE_cortex_mx_stack_4[(TASK_4_STACK_SIZE) - CORTEX_MX_INIT_TOS_OFFSET])}    /* `@Task_4_Name`*/
        #endif
        #ifdef TASK_5_STACK_SIZE
        ,{(EE_ADDR)(&EE_cortex_mx_stack_5[(TASK_5_STACK_SIZE) - CORTEX_MX_INIT_TOS_OFFSET])}    /* `@Task_5_Name`*/
        #endif
        #ifdef TASK_6_STACK_SIZE
        ,{(EE_ADDR)(&EE_cortex_mx_stack_6[(TASK_6_STACK_SIZE) - CORTEX_MX_INIT_TOS_OFFSET])}    /* `@Task_6_Name`*/
        #endif
        #ifdef TASK_7_STACK_SIZE
        ,{(EE_ADDR)(&EE_cortex_mx_stack_7[(TASK_7_STACK_SIZE) - CORTEX_MX_INIT_TOS_OFFSET])}    /* `@Task_7_Name`*/
        #endif
        #ifdef TASK_8_STACK_SIZE
        ,{(EE_ADDR)(&EE_cortex_mx_stack_8[(TASK_8_STACK_SIZE) - CORTEX_MX_INIT_TOS_OFFSET])}    /* `@Task_8_Name`*/
        #endif
    };

    EE_UREG EE_cortex_mx_active_tos = 0U; /* dummy */

#ifdef IRQ_STACK_SIZE
    /* stack used only by IRQ handlers */
    struct EE_TOS EE_cortex_mx_IRQ_tos = {
        (EE_ADDR)(&EE_cortex_mx_stack_9[IRQ_STACK_SIZE])
    };
#endif


/***************************************************************************
 *
 * Kernel ( CPU 0 )
 *
 **************************************************************************/
    /* Definition of task's body */
    #if EE_MAX_TASK > 0
    DeclareTask(`@Task_1_Name`);
    #endif
    #if EE_MAX_TASK > 1
    DeclareTask(`@Task_2_Name`);
    #endif
    #if EE_MAX_TASK > 2
    DeclareTask(`@Task_3_Name`);
    #endif
    #if EE_MAX_TASK > 3
    DeclareTask(`@Task_4_Name`);
    #endif
    #if EE_MAX_TASK > 4
    DeclareTask(`@Task_5_Name`);
    #endif
    #if EE_MAX_TASK > 5
    DeclareTask(`@Task_6_Name`);
    #endif
    #if EE_MAX_TASK > 6
    DeclareTask(`@Task_7_Name`);
    #endif
    #if EE_MAX_TASK > 7
    DeclareTask(`@Task_8_Name`);
    #endif

    const EE_THREAD_PTR EE_hal_thread_body[EE_MAX_TASK] = {
    #if EE_MAX_TASK > 0
        &EE_oo_thread_stub       /* thread `@Task_1_Name` */
    #endif
    #if EE_MAX_TASK > 1
        ,&EE_oo_thread_stub      /* thread `@Task_2_Name` */
    #endif
    #if EE_MAX_TASK > 2
        ,&EE_oo_thread_stub      /* thread `@Task_3_Name` */
    #endif
    #if EE_MAX_TASK > 3
        ,&EE_oo_thread_stub      /* thread `@Task_4_Name` */
    #endif
    #if EE_MAX_TASK > 4
        ,&EE_oo_thread_stub      /* thread `@Task_5_Name` */
    #endif
    #if EE_MAX_TASK > 5
        ,&EE_oo_thread_stub      /* thread `@Task_6_Name` */
    #endif
    #if EE_MAX_TASK > 6
        ,&EE_oo_thread_stub      /* thread `@Task_7_Name` */
    #endif
    #if EE_MAX_TASK > 7      
        ,&EE_oo_thread_stub      /* thread `@Task_8_Name` */
    #endif
    };

    EE_UINT32 EE_terminate_data[EE_MAX_TASK];

    /* ip of each thread body (ROM) */
    const EE_THREAD_PTR EE_terminate_real_th_body[EE_MAX_TASK] = {
    #if EE_MAX_TASK > 0
        &Func`@Task_1_Name`
    #endif
    #if EE_MAX_TASK > 1
        ,&Func`@Task_2_Name`
    #endif
    #if EE_MAX_TASK > 2
        ,&Func`@Task_3_Name`
    #endif
    #if EE_MAX_TASK > 3
        ,&Func`@Task_4_Name`
    #endif
    #if EE_MAX_TASK > 4
        ,&Func`@Task_5_Name`
    #endif
    #if EE_MAX_TASK > 5
        ,&Func`@Task_6_Name`
    #endif
    #if EE_MAX_TASK > 6
        ,&Func`@Task_7_Name`
    #endif
    #if EE_MAX_TASK > 7      
        ,&Func`@Task_8_Name`
    #endif
    };
                
    /* ready priority */
    const EE_TYPEPRIO EE_th_ready_prio[EE_MAX_TASK] = {
    #if EE_MAX_TASK > 0
        `@Task_1_Priority`U
    #endif
    #if EE_MAX_TASK > 1
        ,`@Task_2_Priority`U
    #endif
    #if EE_MAX_TASK > 2
        ,`@Task_3_Priority`U
    #endif
    #if EE_MAX_TASK > 3
        ,`@Task_4_Priority`U
    #endif
    #if EE_MAX_TASK > 4
        ,`@Task_5_Priority`U
    #endif
    #if EE_MAX_TASK > 5
        ,`@Task_6_Priority`U
    #endif
    #if EE_MAX_TASK > 6
        ,`@Task_7_Priority`U
    #endif
    #if EE_MAX_TASK > 7      
        ,`@Task_8_Priority`U
    #endif
    };
    
        
    const char* EE_TASK_NAME[EE_MAX_TASK]=
    {
    #if EE_MAX_TASK > 0
         "`@Task_1_Name`"
    #endif
    #if EE_MAX_TASK > 1
        ,"`@Task_2_Name`"
    #endif
    #if EE_MAX_TASK > 2
        ,"`@Task_3_Name`"
    #endif
    #if EE_MAX_TASK > 3
        ,"`@Task_4_Name`"
    #endif
    #if EE_MAX_TASK > 4
        ,"`@Task_5_Name`"
    #endif
    #if EE_MAX_TASK > 5
        ,"`@Task_6_Name`"
    #endif
    #if EE_MAX_TASK > 6
        ,"`@Task_7_Name`"
    #endif
    #if EE_MAX_TASK > 7      
        ,"`@Task_8_Name`"
    #endif
    };

#ifdef EE_MAX_RESOURCE
    
    const char* EE_RESOURCE_NAME[EE_MAX_RESOURCE]=  //Erika Tracing Changes
    {
    #if EE_MAX_RESOURCE > 0
         "`@Resource_1`"
    #endif
    #if EE_MAX_RESOURCE > 1
        ,"`@Resource_2`"
    #endif
    #if EE_MAX_RESOURCE > 2
        ,"`@Resource_3`"
    #endif
    #if EE_MAX_RESOURCE > 3
        ,"`@Resource_4`"
    #endif
    #if EE_MAX_RESOURCE > 4
        ,"`@Resource_5`"
    #endif
    #if EE_MAX_RESOURCE > 5
        ,"`@Resource_6`"
    #endif
    #if EE_MAX_RESOURCE > 6
        ,"`@Resource_7`"
    #endif
    #if EE_MAX_RESOURCE > 7      
        ,"`@Resource_8`"
    #endif
    };
    
    const unsigned long EE_RESOURCE_ID[EE_MAX_RESOURCE]=
    {
    #if EE_MAX_RESOURCE > 0
         `@Resource_1`
    #endif
    #if EE_MAX_RESOURCE > 1
        ,`@Resource_2`
    #endif
    #if EE_MAX_RESOURCE > 2
        ,`@Resource_3`
    #endif
    #if EE_MAX_RESOURCE > 3
        ,`@Resource_4`
    #endif
    #if EE_MAX_RESOURCE > 4
        ,`@Resource_5`
    #endif
    #if EE_MAX_RESOURCE > 5
        ,`@Resource_6`
    #endif
    #if EE_MAX_RESOURCE > 6
        ,`@Resource_7`
    #endif
    #if EE_MAX_RESOURCE > 7      
        ,`@Resource_8`
    #endif

    };

#endif
    
    const char* EE_EVENT_NAME[EE_MAX_EVENT]=
    {
    #if EE_MAX_EVENT > 0
         "`@Event_1`"
    #endif
    #if EE_MAX_EVENT > 1
        ,"`@Event_2`"
    #endif
    #if EE_MAX_EVENT > 2
        ,"`@Event_3`"
    #endif
    #if EE_MAX_EVENT > 3
         ,"`@Event_4`"
    #endif
    #if EE_MAX_EVENT > 4
         ,"`@Event_5`"
    #endif
    #if EE_MAX_EVENT > 5
         ,"`@Event_6`"
    #endif
    #if EE_MAX_EVENT > 6
         ,"`@Event_7`"
    #endif
    #if EE_MAX_EVENT > 7
         ,"`@Event_8`"
    #endif
    #if EE_MAX_EVENT > 8
         ,"`@Event_9`"
    #endif
    #if EE_MAX_EVENT > 9
         ,"`@Event_10`"
    #endif
    #if EE_MAX_EVENT > 10
         ,"`@Event_11`"
    #endif
    #if EE_MAX_EVENT > 11
         ,"`@Event_12`"
    #endif
    #if EE_MAX_EVENT > 12
         ,"`@Event_13`"
    #endif
    #if EE_MAX_EVENT > 13
         ,"`@Event_14`"
    #endif
    #if EE_MAX_EVENT > 14
         ,"`@Event_15`"
    #endif
    #if EE_MAX_EVENT > 15
         ,"`@Event_16`"
    #endif
    #if EE_MAX_EVENT > 16
         ,"`@Event_17`"
    #endif
    #if EE_MAX_EVENT > 17
         ,"`@Event_18`"
    #endif
    #if EE_MAX_EVENT > 18
         ,"`@Event_19`"
    #endif
    #if EE_MAX_EVENT > 19
         ,"`@Event_20`"
    #endif
    #if EE_MAX_EVENT > 20
         ,"`@Event_21`"
    #endif
    #if EE_MAX_EVENT > 21
         ,"`@Event_22`"
    #endif
    #if EE_MAX_EVENT > 22
         ,"`@Event_23`"
    #endif
    #if EE_MAX_EVENT > 23
         ,"`@Event_24`"
    #endif
    #if EE_MAX_EVENT > 24
         ,"`@Event_25`"
    #endif
    #if EE_MAX_EVENT > 25
         ,"`@Event_26`"
    #endif
    #if EE_MAX_EVENT > 26
         ,"`@Event_27`"
    #endif
    #if EE_MAX_EVENT > 27
         ,"`@Event_28`"
    #endif
    #if EE_MAX_EVENT > 28
         ,"`@Event_29`"
    #endif
    #if EE_MAX_EVENT > 29
         ,"`@Event_30`"
    #endif
    #if EE_MAX_EVENT > 30
         ,"`@Event_31`"
    #endif
    };
    
    const unsigned long EE_EVENT_ID[EE_MAX_EVENT]=
    {
    #if EE_MAX_EVENT > 0
        `@Event_1`
    #endif
    #if EE_MAX_EVENT > 1
        ,`@Event_2`
    #endif
    #if EE_MAX_EVENT > 2
        ,`@Event_3`
    #endif
    #if EE_MAX_EVENT > 3
        ,`@Event_4`
    #endif
    #if EE_MAX_EVENT > 4
        ,`@Event_5`
    #endif
    #if EE_MAX_EVENT > 5
        ,`@Event_6`
    #endif
    #if EE_MAX_EVENT > 6
        ,`@Event_7`
    #endif
    #if EE_MAX_EVENT > 7
        ,`@Event_8`
    #endif
    #if EE_MAX_EVENT > 8
        ,`@Event_9`
    #endif
    #if EE_MAX_EVENT > 9
        ,`@Event_10`
    #endif
    #if EE_MAX_EVENT > 10
        ,`@Event_11`
    #endif
    #if EE_MAX_EVENT > 11
        ,`@Event_12`
    #endif
    #if EE_MAX_EVENT > 12
        ,`@Event_13`
    #endif
    #if EE_MAX_EVENT > 13
        ,`@Event_14`
    #endif
    #if EE_MAX_EVENT > 14
        ,`@Event_15`
    #endif
    #if EE_MAX_EVENT > 15
        ,`@Event_16`
    #endif
    #if EE_MAX_EVENT > 16
        ,`@Event_17`
    #endif
    #if EE_MAX_EVENT > 17
        ,`@Event_18`
    #endif
    #if EE_MAX_EVENT > 18
        ,`@Event_19`
    #endif
    #if EE_MAX_EVENT > 19
        ,`@Event_20`
    #endif
    #if EE_MAX_EVENT > 20
        ,`@Event_21`
    #endif
    #if EE_MAX_EVENT > 21
        ,`@Event_22`
    #endif
    #if EE_MAX_EVENT > 22
        ,`@Event_23`
    #endif
    #if EE_MAX_EVENT > 23
        ,`@Event_24`
    #endif
    #if EE_MAX_EVENT > 24
        ,`@Event_25`
    #endif
    #if EE_MAX_EVENT > 25
        ,`@Event_26`
    #endif
    #if EE_MAX_EVENT > 26
        ,`@Event_27`
    #endif
    #if EE_MAX_EVENT > 27
        ,`@Event_28`
    #endif
    #if EE_MAX_EVENT > 28
        ,`@Event_29`
    #endif
    #if EE_MAX_EVENT > 29
        ,`@Event_30`
    #endif
    #if EE_MAX_EVENT > 30
        ,`@Event_31`
    #endif
    };
    
#define MAX_PRIORITY 0x80U
    
    const EE_TYPEPRIO EE_th_dispatch_prio[EE_MAX_TASK] = {
    #if EE_MAX_TASK > 0
        #if `@Task_1_Schedule`
        `@Task_1_Priority`U
        #else
        MAX_PRIORITY
        #endif
    #endif
    #if EE_MAX_TASK > 1
        #if `@Task_2_Schedule`
        ,`@Task_2_Priority`U
        #else
        ,MAX_PRIORITY
        #endif
    #endif
    #if EE_MAX_TASK > 2
        #if `@Task_3_Schedule`
        ,`@Task_3_Priority`U
        #else
        ,MAX_PRIORITY
        #endif
    #endif
    #if EE_MAX_TASK > 3
        #if `@Task_4_Schedule`
        ,`@Task_4_Priority`U
        #else
        ,MAX_PRIORITY
        #endif
    #endif
    #if EE_MAX_TASK > 4
        #if `@Task_5_Schedule`
        ,`@Task_5_Priority`U
        #else
        ,MAX_PRIORITY
        #endif
    #endif
    #if EE_MAX_TASK > 5
        #if `@Task_6_Schedule`
        ,`@Task_6_Priority`U
        #else
        ,MAX_PRIORITY
        #endif
    #endif
    #if EE_MAX_TASK > 6
        #if `@Task_7_Schedule`
        ,`@Task_7_Priority`U
        #else
        ,MAX_PRIORITY
        #endif
    #endif
    #if EE_MAX_TASK > 7      
         #if `@Task_8_Schedule`
        ,`@Task_8_Priority`U
        #else
        ,MAX_PRIORITY
        #endif
    #endif        
    };

    /* thread status */
    EE_TYPESTATUS EE_th_status[EE_MAX_TASK] = {
    #if EE_MAX_TASK > 0
        SUSPENDED
    #endif
    #if EE_MAX_TASK > 1
        ,SUSPENDED
    #endif
    #if EE_MAX_TASK > 2
        ,SUSPENDED
    #endif
    #if EE_MAX_TASK > 3
        ,SUSPENDED
    #endif
    #if EE_MAX_TASK > 4
        ,SUSPENDED
    #endif
    #if EE_MAX_TASK > 5
        ,SUSPENDED
    #endif
    #if EE_MAX_TASK > 6
        ,SUSPENDED
    #endif
    #if EE_MAX_TASK > 7
        ,SUSPENDED
    #endif
    };

    /* next thread */
    EE_TID EE_th_next[EE_MAX_TASK] = {
    #if EE_MAX_TASK > 0
        EE_NIL
    #endif
    #if EE_MAX_TASK > 1
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 2
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 3
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 4
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 5
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 6
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 7
        ,EE_NIL
    #endif
    };

    /* The first stacked task */
    EE_TID EE_stkfirst = EE_NIL;

    /* system ceiling */
    EE_TYPEPRIO EE_sys_ceiling= 0x0000U;

    /* The priority queues: (16 priorities maximum!) */
    EE_TYPEPAIR EE_rq_queues_head[EE_RQ_QUEUES_HEAD_SIZE] =
        { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    EE_TYPEPAIR EE_rq_queues_tail[EE_RQ_QUEUES_TAIL_SIZE] =
        { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    EE_TYPE_RQ_MASK EE_rq_bitmask = 0U;

    /* remaining nact: init= maximum pending activations of a Task */
    EE_TYPENACT EE_th_rnact[EE_MAX_TASK] = {
    #if EE_MAX_TASK > 0
        `@Task_1_Activation`U
    #endif
    #if EE_MAX_TASK > 1
        ,`@Task_2_Activation`U
    #endif
    #if EE_MAX_TASK > 2
        ,`@Task_3_Activation`U
    #endif
    #if EE_MAX_TASK > 3
        ,`@Task_4_Activation`U
    #endif
    #if EE_MAX_TASK > 4
        ,`@Task_5_Activation`U
    #endif
    #if EE_MAX_TASK > 5
        ,`@Task_6_Activation`U
    #endif
    #if EE_MAX_TASK > 6
        ,`@Task_7_Activation`U
    #endif
    #if EE_MAX_TASK > 7
        ,`@Task_8_Activation`U
    #endif
    };

    const EE_TYPENACT EE_th_rnact_max[EE_MAX_TASK] = {
    #if EE_MAX_TASK > 0
        `@Task_1_Activation`U
    #endif
    #if EE_MAX_TASK > 1
        ,`@Task_2_Activation`U
    #endif
    #if EE_MAX_TASK > 2
        ,`@Task_3_Activation`U
    #endif
    #if EE_MAX_TASK > 3
        ,`@Task_4_Activation`U
    #endif
    #if EE_MAX_TASK > 4
        ,`@Task_5_Activation`U
    #endif
    #if EE_MAX_TASK > 5
        ,`@Task_6_Activation`U
    #endif
    #if EE_MAX_TASK > 6
        ,`@Task_7_Activation`U
    #endif
    #if EE_MAX_TASK > 7
        ,`@Task_8_Activation`U
    #endif
    };

    EE_TYPEPRIO EE_rq_link[EE_MAX_TASK] =
        { 
        #include "`$INSTANCE_NAME`_task_priorities.inc"
            #if EE_MAX_TASK > 0
            TSK1_PRI
            #endif
            #if EE_MAX_TASK > 1
            ,TSK2_PRI
            #endif
            #if EE_MAX_TASK > 2
            ,TSK3_PRI
            #endif
            #if EE_MAX_TASK > 3
            ,TSK4_PRI
            #endif
            #if EE_MAX_TASK > 4
            ,TSK5_PRI
            #endif
            #if EE_MAX_TASK > 5
            ,TSK6_PRI
            #endif
            #if EE_MAX_TASK > 6
            ,TSK7_PRI
            #endif
            #if EE_MAX_TASK > 7
            ,TSK8_PRI
            #endif
        };

    /* The pairs that are enqueued into the priority queues */
    EE_TYPEPAIR EE_rq_pairs_next[EE_RQ_PAIRS_NEXT_SIZE] =
        {
            #if EE_RQ_PAIRS_NEXT_SIZE > 0
            #if EE_RQ_PAIRS_NEXT_SIZE == 1
                -1
            #else
                1
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 2
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 2
                ,2
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 3
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 3
                ,3
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 4
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 4
                ,4
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 5
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 5
                ,5
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 6
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 6
                ,6
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 7
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 7
                ,7
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 8
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 8
                ,8
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 9
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 9
                ,9
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 10
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 10
                ,10
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 11
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 11
                ,11
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 12
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 12
                ,12
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 13
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 13
                ,13
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 14
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 14
                ,14
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 15
                ,-1
            #elif EE_RQ_PAIRS_NEXT_SIZE > 15
                ,15
            #endif
            #if EE_RQ_PAIRS_NEXT_SIZE == 16
                ,-1
            #endif
            #endif
        };

    /* no need to be initialized */
    EE_TID EE_rq_pairs_tid[EE_RQ_PAIRS_TID_SIZE];

    /* a list of unused pairs */
    EE_TYPEPAIR EE_rq_free = 0; /* pointer to a free pair */

    #ifndef __OO_NO_CHAINTASK__
        /* The next task to be activated after a ChainTask. initvalue=all EE_NIL */
        EE_TID EE_th_terminate_nextask[EE_MAX_TASK] = {
    #if EE_MAX_TASK > 0
        EE_NIL
    #endif
    #if EE_MAX_TASK > 1
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 2
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 3
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 4
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 5
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 6
        ,EE_NIL
    #endif
    #if EE_MAX_TASK > 7
        ,EE_NIL
    #endif
        };
    #endif



/***************************************************************************
 *
 * Event handling
 *
 **************************************************************************/
    EE_TYPEEVENTMASK EE_th_event_active[EE_MAX_TASK] =
        { 
    #if EE_MAX_TASK > 0
        0U
    #endif
    #if EE_MAX_TASK > 1
        ,0U
    #endif
    #if EE_MAX_TASK > 2
        ,0U
    #endif
    #if EE_MAX_TASK > 3
        ,0U
    #endif
    #if EE_MAX_TASK > 4
        ,0U
    #endif
    #if EE_MAX_TASK > 5
        ,0U
    #endif
    #if EE_MAX_TASK > 6
        ,0U
    #endif
    #if EE_MAX_TASK > 7
        ,0U
    #endif
        };    /* thread event already active */

    EE_TYPEEVENTMASK EE_th_event_waitmask[EE_MAX_TASK] =
        {
    #if EE_MAX_TASK > 0
        0U
    #endif
    #if EE_MAX_TASK > 1
        ,0U
    #endif
    #if EE_MAX_TASK > 2
        ,0U
    #endif
    #if EE_MAX_TASK > 3
        ,0U
    #endif
    #if EE_MAX_TASK > 4
        ,0U
    #endif
    #if EE_MAX_TASK > 5
        ,0U
    #endif
    #if EE_MAX_TASK > 6
        ,0U
    #endif
    #if EE_MAX_TASK > 7
        ,0U
    #endif
    };    /* thread wait mask */

    EE_TYPEBOOL EE_th_waswaiting[EE_MAX_TASK] =
        { 
    #if EE_MAX_TASK > 0
        0U
    #endif
    #if EE_MAX_TASK > 1
        ,0U
    #endif
    #if EE_MAX_TASK > 2
        ,0U
    #endif
    #if EE_MAX_TASK > 3
        ,0U
    #endif
    #if EE_MAX_TASK > 4
        ,0U
    #endif
    #if EE_MAX_TASK > 5
        ,0U
    #endif
    #if EE_MAX_TASK > 6
        ,0U
    #endif
    #if EE_MAX_TASK > 7
        ,0U
    #endif
    };

    const EE_TYPEPRIO EE_th_is_extended[EE_MAX_TASK] =
        { 
    #if EE_MAX_TASK > 0
        #if `@Task_1_Number_Events`
        1U
        #else
        0U
        #endif
    #endif
    #if EE_MAX_TASK > 1
        #if `@Task_2_Number_Events`
        ,1U
        #else
        ,0U
        #endif
    #endif
    #if EE_MAX_TASK > 2
        #if `@Task_3_Number_Events`
        ,1U
        #else
        ,0U
        #endif
    #endif
    #if EE_MAX_TASK > 3
        #if `@Task_4_Number_Events`
        ,1U
        #else
        ,0U
        #endif
    #endif
    #if EE_MAX_TASK > 4
        #if `@Task_5_Number_Events`
        ,1U
        #else
        ,0U
        #endif
    #endif
    #if EE_MAX_TASK > 5
        #if `@Task_6_Number_Events`
        ,1U
        #else
        ,0U
        #endif
    #endif
    #if EE_MAX_TASK > 6
        #if `@Task_7_Number_Events`
        ,1U
        #else
        ,0U
        #endif
    #endif
    #if EE_MAX_TASK > 7
        #if `@Task_8_Number_Events`
        ,1U
        #else
        ,0U
        #endif
    #endif
        };



/***************************************************************************
 *
 * Mutex
 *
 **************************************************************************/
#ifdef EE_MAX_RESOURCE
    /*
     * This is the last mutex that the task has locked. This array
     *    contains one entry for each task. Initvalue= all -1. at runtime,
     *    it points to the first item in the EE_resource_stack data structure.
    */
    EE_UREG EE_th_resource_last[EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES] =
        {
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 0
            (EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 1
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 2
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 3
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 4
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 5
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 6
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 7
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 8
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 9
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 10
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 11
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 12
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 13
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 14
            ,(EE_UREG) -1
        #endif
        #if (EE_MAX_TASK + EE_MAX_ISR2_WITH_RESOURCES) > 15
            ,(EE_UREG) -1
        #endif
        };

    /*
     * This array is used to store a list of resources locked by a
     *    task. there is one entry for each resource, initvalue = -1. the
     *    list of resources locked by a task is ended by -1.
    */
    EE_UREG EE_resource_stack[EE_MAX_RESOURCE] =
        {
        #if EE_MAX_RESOURCE > 0
            (EE_UREG) -1
        #endif
        #if EE_MAX_RESOURCE > 1
            ,(EE_UREG) -1
        #endif
        #if EE_MAX_RESOURCE > 2
            ,(EE_UREG) -1
        #endif
        #if EE_MAX_RESOURCE > 3
            ,(EE_UREG) -1
        #endif
        #if EE_MAX_RESOURCE > 4
            ,(EE_UREG) -1
        #endif
        #if EE_MAX_RESOURCE > 5
            ,(EE_UREG) -1
        #endif
        #if EE_MAX_RESOURCE > 6
            ,(EE_UREG) -1
        #endif
        #if EE_MAX_RESOURCE > 7
            ,(EE_UREG) -1
        #endif
        #if EE_MAX_RESOURCE > 8
            ,(EE_UREG) -1
        #endif
        };
    /*
     * Only in extended status or when using ORTI with resources; for
     *    each resource, a flag is allocated to see if the resource is locked or
     *    not.  Note that this information cannot be easily knew from the previous
     *    two data structures. initvalue=0
    */
    EE_TYPEBOOL EE_resource_locked[EE_MAX_RESOURCE] =
        {
        #if EE_MAX_RESOURCE > 0
            0U
        #endif
        #if EE_MAX_RESOURCE > 1
            ,0U
        #endif
        #if EE_MAX_RESOURCE > 2
            ,0U
        #endif
        #if EE_MAX_RESOURCE > 3
            ,0U
        #endif
        #if EE_MAX_RESOURCE > 4
            ,0U
        #endif
        #if EE_MAX_RESOURCE > 5
            ,0U
        #endif
        #if EE_MAX_RESOURCE > 6
            ,0U
        #endif
        #if EE_MAX_RESOURCE > 7
            ,0U
        #endif
        #if EE_MAX_RESOURCE > 8
            ,0U
        #endif            
        };

        
        #include "`$INSTANCE_NAME`_resource_priorities.inc"
    const EE_TYPEPRIO EE_resource_ceiling[EE_MAX_RESOURCE]= 
        {
        #if EE_MAX_RESOURCE > 0
        #if `@USE_RES_SCHEDULER`
            MAX_PRIORITY
        #else
            RESPRI_1
        #endif
        #endif
        #if EE_MAX_RESOURCE > 1
        #if `@USE_RES_SCHEDULER`
            ,RESPRI_1
        #else
            ,RESPRI_2
        #endif
        #endif
        #if EE_MAX_RESOURCE > 2
        #if `@USE_RES_SCHEDULER`
            ,RESPRI_2
        #else
            ,RESPRI_3
        #endif
        #endif
        #if EE_MAX_RESOURCE > 3
        #if `@USE_RES_SCHEDULER`
            ,RESPRI_3
        #else
            ,RESPRI_4
        #endif
        #endif
        #if EE_MAX_RESOURCE > 4
        #if `@USE_RES_SCHEDULER`
            ,RESPRI_4
        #else
            ,RESPRI_5
        #endif
        #endif
        #if EE_MAX_RESOURCE > 5
        #if `@USE_RES_SCHEDULER`
            ,RESPRI_5
        #else
            ,RESPRI_6
        #endif
        #endif
        #if EE_MAX_RESOURCE > 6
        #if `@USE_RES_SCHEDULER`
            ,RESPRI_6
        #else
            ,RESPRI_7
        #endif
        #endif
        #if EE_MAX_RESOURCE > 7
        #if `@USE_RES_SCHEDULER`
            ,RESPRI_7
        #else
            ,RESPRI_8
        #endif
        #endif
        #if EE_MAX_RESOURCE > 8
            ,RESPRI_8
        #endif
        };

    EE_TYPEPRIO EE_resource_oldceiling[EE_MAX_RESOURCE];

#ifdef __OO_ISR2_RESOURCES__    
#define ISR_MIN_PRI     48
    const EE_TYPEISR2PRIO EE_resource_isr2_priority[EE_MAX_RESOURCE]= {        
        #if EE_MAX_RESOURCE > 0
        #if `@USE_RES_SCHEDULER`
            EE_ISR_UNMASKED
        #elif defined RESPRI_1_ISR
            ISR_MIN_PRI - RESPRI_1_ISR
        #else
            EE_ISR_UNMASKED
        #endif
        #endif
        #if EE_MAX_RESOURCE > 1
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_1_ISR
            , ISR_MIN_PRI - RESPRI_1_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_2_ISR
            ,ISR_MIN_PRI - RESPRI_2_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 2
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_2_ISR
            , ISR_MIN_PRI - RESPRI_2_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_3_ISR
            ,ISR_MIN_PRI - RESPRI_3_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 3
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_3_ISR
            ,ISR_MIN_PRI - RESPRI_3_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_4_ISR
            ,ISR_MIN_PRI - RESPRI_4_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 4
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_4_ISR
            , ISR_MIN_PRI - RESPRI_4_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_5_ISR
            , ISR_MIN_PRI - RESPRI_5_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 5
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_5_ISR
            , ISR_MIN_PRI - RESPRI_5_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_6_ISR
            , ISR_MIN_PRI - RESPRI_6_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 6
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_6_ISR
            , ISR_MIN_PRI - RESPRI_6_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_7_ISR
            , ISR_MIN_PRI - RESPRI_7_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 7
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_7_ISR
            , ISR_MIN_PRI - RESPRI_7_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_8_ISR
            , ISR_MIN_PRI - RESPRI_8_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 8
        #if defined RESPRI_8_ISR
            , ISR_MIN_PRI - RESPRI_8_ISR
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
    };

    EE_TYPEISR2PRIO EE_isr2_oldpriority[EE_MAX_RESOURCE];

    const EE_TYPEPRIO EE_resource_isr2_ceiling[EE_MAX_RESOURCE]= {
        #if EE_MAX_RESOURCE > 0
        #if `@USE_RES_SCHEDULER`
            EE_ISR_UNMASKED
        #elif defined RESPRI_1_ISR
            RESPRI_1
        #else
            EE_ISR_UNMASKED
        #endif
        #endif
        #if EE_MAX_RESOURCE > 1
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_1_ISR
            ,RESPRI_1
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_2_ISR
            ,RESPRI_2
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 2
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_2_ISR
            ,RESPRI_2
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_3_ISR
            ,RESPRI_3
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 3
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_3_ISR
            ,RESPRI_3
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_4_ISR
            ,RESPRI_4
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 4
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_4_ISR
            ,RESPRI_4
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_5_ISR
            ,RESPRI_5
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 5
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_5_ISR
            ,RESPRI_5
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_6_ISR
            ,RESPRI_6
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 6
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_6_ISR
            ,RESPRI_6
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_7_ISR
            ,RESPRI_7
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 7
        #if `@USE_RES_SCHEDULER`
        #if defined RESPRI_7_ISR
            ,RESPRI_7
        #else
            ,EE_ISR_UNMASKED
        #endif
        #else
        #if defined RESPRI_8_ISR
            ,RESPRI_8
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
        #endif
        #if EE_MAX_RESOURCE > 8
        #if defined RESPRI_8_ISR
            ,RESPRI_8
        #else
            ,EE_ISR_UNMASKED
        #endif
        #endif
    };
    /*
     * array to hold corresponding isr2 nesting levels.
    */
    EE_UREG EE_isr2_nesting_level[EE_MAX_ISR2_WITH_RESOURCES];
#endif    
#endif


/***************************************************************************
 *
 * Counters
 *
 **************************************************************************/
#if EE_MAX_COUNTER
    const EE_oo_counter_ROM_type EE_counter_ROM[EE_COUNTER_ROM_SIZE] = {
        {OSMAXALLOWEDVALUE_`@Counter_1_Name`, OSTICKSPERBASE_`@Counter_1_Name`, OSMINCYCLE_`@Counter_1_Name`} /* `@Counter_1_Name` */
        #if EE_COUNTER_ROM_SIZE > 1
        ,{OSMAXALLOWEDVALUE_`@Counter_2_Name`, OSTICKSPERBASE_`@Counter_2_Name`, OSMINCYCLE_`@Counter_2_Name`} /* `@Counter_2_Name` */
        #endif
        #if EE_COUNTER_ROM_SIZE > 2
        ,{OSMAXALLOWEDVALUE_`@Counter_3_Name`, OSTICKSPERBASE_`@Counter_3_Name`, OSMINCYCLE_`@Counter_3_Name`} /* `@Counter_3_Name` */
        #endif
        #if EE_COUNTER_ROM_SIZE > 3
        ,{OSMAXALLOWEDVALUE_`@Counter_4_Name`, OSTICKSPERBASE_`@Counter_4_Name`, OSMINCYCLE_`@Counter_4_Name`} /* `@Counter_4_Name` */
        #endif
    };

    EE_oo_counter_RAM_type       EE_counter_RAM[EE_MAX_COUNTER] = {
        {0U, (EE_TYPECOUNTEROBJECT)-1}
        #if EE_MAX_COUNTER > 1
        ,{0U, (EE_TYPECOUNTEROBJECT)-1}
        #endif
        #if EE_MAX_COUNTER > 2
        ,{0U, (EE_TYPECOUNTEROBJECT)-1}
        #endif
        #if EE_MAX_COUNTER > 3
        ,{0U, (EE_TYPECOUNTEROBJECT)-1}
        #endif
    };
#endif

/***************************************************************************
 *
 * Alarms
 *
 **************************************************************************/
#if EE_ALARM_ROM_SIZE
    const EE_oo_alarm_ROM_type EE_alarm_ROM[EE_ALARM_ROM_SIZE] = {
    #if EE_MAX_ALARM > 0
        {`@Alarm_1_Name`}
    #endif
    #if EE_MAX_ALARM > 1
        ,{`@Alarm_2_Name`}
    #endif
    #if EE_MAX_ALARM > 2
        ,{`@Alarm_3_Name`}
    #endif
    #if EE_MAX_ALARM > 3
        ,{`@Alarm_4_Name`}
    #endif
    #if EE_MAX_ALARM > 4
        ,{`@Alarm_5_Name`}
    #endif
    #if EE_MAX_ALARM > 5
        ,{`@Alarm_6_Name`}
    #endif
    #if EE_MAX_ALARM > 6
        ,{`@Alarm_7_Name`}
    #endif
    #if EE_MAX_ALARM > 7
        ,{`@Alarm_8_Name`}
    #endif
    };
#endif

//ERIKA OS Changes
const char* EE_ALARM_NAME[EE_MAX_ALARM]=
    {
    #if EE_MAX_ALARM > 0
         "`@Alarm_1_Name`"
    #endif
    #if EE_MAX_ALARM > 1
        ,"`@Alarm_2_Name`"
    #endif
    #if EE_MAX_ALARM > 2
        ,"`@Alarm_3_Name`"
    #endif
    #if EE_MAX_ALARM > 3
        ,"`@Alarm_4_Name`"
    #endif
    #if EE_MAX_ALARM > 4
        ,"`@Alarm_5_Name`"
    #endif
    #if EE_MAX_ALARM > 5
        ,"`@Alarm_6_Name`"
    #endif
    #if EE_MAX_ALARM > 6
        ,"`@Alarm_7_Name`"
    #endif
    #if EE_MAX_ALARM > 7      
        ,"`@Alarm_8_Name`"
    #endif
    };
    
const unsigned long EE_ALARM_ID[EE_MAX_ALARM]=
    {
    #if EE_MAX_ALARM > 0
         `@Alarm_1_Name`
    #endif
    #if EE_MAX_ALARM > 1
        ,`@Alarm_2_Name`
    #endif
    #if EE_MAX_ALARM > 2
        ,`@Alarm_3_Name`
    #endif
    #if EE_MAX_ALARM > 3
        ,`@Alarm_4_Name`
    #endif
    #if EE_MAX_ALARM > 4
        ,`@Alarm_5_Name`
    #endif
    #if EE_MAX_ALARM > 5
        ,`@Alarm_6_Name`
    #endif
    #if EE_MAX_ALARM > 6
        ,`@Alarm_7_Name`
    #endif
    #if EE_MAX_ALARM > 7      
        ,`@Alarm_8_Name`
    #endif
    };

//Functions
#if (EE_MAX_ALARM > 0) && (`@Alarm_1_Action` == 3)
    void `@Alarm_1_Callback_Name`(void);
#endif
#if (EE_MAX_ALARM > 1) && (`@Alarm_2_Action` == 3)
    void `@Alarm_2_Callback_Name`(void);
#endif
#if (EE_MAX_ALARM > 2) && (`@Alarm_3_Action` == 3)
    void `@Alarm_3_Callback_Name`(void);
#endif
#if (EE_MAX_ALARM > 3) && (`@Alarm_4_Action` == 3)
    void `@Alarm_4_Callback_Name`(void);
#endif
#if (EE_MAX_ALARM > 4) && (`@Alarm_5_Action` == 3)
    void `@Alarm_5_Callback_Name`(void);
#endif
#if (EE_MAX_ALARM > 5) && (`@Alarm_6_Action` == 3)
    void `@Alarm_6_Callback_Name`(void);
#endif
#if (EE_MAX_ALARM > 6) && (`@Alarm_7_Action` == 3)
    void `@Alarm_7_Callback_Name`(void);
#endif
#if (EE_MAX_ALARM > 7) && (`@Alarm_8_Action` == 3)
    void `@Alarm_8_Callback_Name`(void);
#endif


/***************************************************************************
 *
 * Counter Objects
 *
 **************************************************************************/
#if EE_COUNTER_OBJECTS_ROM_SIZE
    const EE_oo_counter_object_ROM_type   EE_oo_counter_object_ROM[EE_COUNTER_OBJECTS_ROM_SIZE] = {
        #if EE_MAX_ALARM > 0
        {`@Alarm_1_Counter`, `@Alarm_1_Name`, EE_ALARM }
        #endif
        #if EE_MAX_ALARM > 1
        ,{`@Alarm_2_Counter`, `@Alarm_2_Name`, EE_ALARM }
        #endif
        #if EE_MAX_ALARM > 2
        ,{`@Alarm_3_Counter`, `@Alarm_3_Name`, EE_ALARM }
        #endif
        #if EE_MAX_ALARM > 3
        ,{`@Alarm_4_Counter`, `@Alarm_4_Name`, EE_ALARM }
        #endif
        #if EE_MAX_ALARM > 4
        ,{`@Alarm_5_Counter`, `@Alarm_5_Name`, EE_ALARM }
        #endif
        #if EE_MAX_ALARM > 5
        ,{`@Alarm_6_Counter`, `@Alarm_6_Name`, EE_ALARM }
        #endif
        #if EE_MAX_ALARM > 6
        ,{`@Alarm_7_Counter`, `@Alarm_7_Name`, EE_ALARM }
        #endif
        #if EE_MAX_ALARM > 7
        ,{`@Alarm_8_Counter`, `@Alarm_8_Name`, EE_ALARM }
        #endif
    };

    EE_oo_counter_object_RAM_type EE_oo_counter_object_RAM[EE_COUNTER_OBJECTS_ROM_SIZE];
#endif

/***************************************************************************
 *
 * Alarms and Scheduling Tables actions
 *
 **************************************************************************/
#if EE_ACTION_ROM_SIZE
    const EE_oo_action_ROM_type   EE_oo_action_ROM[EE_ACTION_ROM_SIZE] = {
    #if EE_ACTION_ROM_SIZE > 0
        {`@Alarm_1_Action`    , 
            #if `@Alarm_1_Action` != 3 
                `@Alarm_1_Task`,
            #else
                0,
            #endif
            #if `@Alarm_1_Action` == 1
                `@Alarm_1_Event`U,
            #else
                0U,
            #endif
            #if `@Alarm_1_Action` != 3
             (EE_VOID_CALLBACK)NULL,
            #else
                `@Alarm_1_Callback_Name`,
            #endif
            (EE_TYPECOUNTER)-1 }
    #endif
    #if EE_ACTION_ROM_SIZE > 1
        ,{`@Alarm_2_Action`    , 
            #if `@Alarm_2_Action` != 3 
                `@Alarm_2_Task`,
            #else
                0,
            #endif
            #if `@Alarm_2_Action` == 1
                `@Alarm_2_Event`U,
            #else
                0U,
            #endif
            #if `@Alarm_2_Action` != 3
             (EE_VOID_CALLBACK)NULL,
            #else
                `@Alarm_2_Callback_Name`,
            #endif
            (EE_TYPECOUNTER)-1 }
    #endif
    #if EE_ACTION_ROM_SIZE > 2
        ,{`@Alarm_3_Action`    , 
            #if `@Alarm_3_Action` != 3 
                `@Alarm_3_Task`,
            #else
                0,
            #endif
            #if `@Alarm_3_Action` == 1
                `@Alarm_3_Event`U,
            #else
                0U,
            #endif
            #if `@Alarm_3_Action` != 3
             (EE_VOID_CALLBACK)NULL,
            #else
                `@Alarm_3_Callback_Name`,
            #endif
            (EE_TYPECOUNTER)-1 }
    #endif
    #if EE_ACTION_ROM_SIZE > 3
        ,{`@Alarm_4_Action`    , 
            #if `@Alarm_4_Action` != 3 
                `@Alarm_4_Task`,
            #else
                0,
            #endif
            #if `@Alarm_4_Action` == 1
                `@Alarm_4_Event`U,
            #else
                0U,
            #endif
            #if `@Alarm_4_Action` != 3
             (EE_VOID_CALLBACK)NULL,
            #else
                `@Alarm_4_Callback_Name`,
            #endif
            (EE_TYPECOUNTER)-1 }
    #endif
    #if EE_ACTION_ROM_SIZE > 4
        ,{`@Alarm_5_Action`    , 
            #if `@Alarm_5_Action` != 3 
                `@Alarm_5_Task`,
            #else
                0,
            #endif
            #if `@Alarm_5_Action` == 1
                `@Alarm_5_Event`U,
            #else
                0U,
            #endif
            #if `@Alarm_5_Action` != 3
             (EE_VOID_CALLBACK)NULL,
            #else
                `@Alarm_5_Callback_Name`,
            #endif
            (EE_TYPECOUNTER)-1 }
    #endif
    #if EE_ACTION_ROM_SIZE > 5
        ,{`@Alarm_6_Action`    , 
            #if `@Alarm_6_Action` != 3 
                `@Alarm_6_Task`,
            #else
                0,
            #endif
            #if `@Alarm_6_Action` == 1
                `@Alarm_6_Event`U,
            #else
                0U,
            #endif
            #if `@Alarm_6_Action` != 3
             (EE_VOID_CALLBACK)NULL,
            #else
                `@Alarm_6_Callback_Name`,
            #endif
            (EE_TYPECOUNTER)-1 }
    #endif
    #if EE_ACTION_ROM_SIZE > 6
        ,{`@Alarm_7_Action`    , 
            #if `@Alarm_7_Action` != 3 
                `@Alarm_7_Task`,
            #else
                0,
            #endif
            #if `@Alarm_7_Action` == 1
                `@Alarm_7_Event`U,
            #else
                0U,
            #endif
            #if `@Alarm_7_Action` != 3
             (EE_VOID_CALLBACK)NULL,
            #else
                `@Alarm_7_Callback_Name`,
            #endif
            (EE_TYPECOUNTER)-1 }
    #endif
    #if EE_ACTION_ROM_SIZE > 7
        ,{`@Alarm_8_Action`    , 
            #if `@Alarm_8_Action` != 3 
                `@Alarm_8_Task`,
            #else
                0,
            #endif
            #if `@Alarm_8_Action` == 1
                `@Alarm_8_Event`U,
            #else
                0U,
            #endif
            #if `@Alarm_8_Action` != 3
             (EE_VOID_CALLBACK)NULL,
            #else
                `@Alarm_8_Callback_Name`,
            #endif
            (EE_TYPECOUNTER)-1 }
    #endif   
    };
#endif


/***************************************************************************
 *
 * AppMode
 *
 **************************************************************************/
    EE_TYPEAPPMODE EE_ApplicationMode;


/***************************************************************************
 *
 * Auto Start (TASK)
 *
 **************************************************************************/
#ifdef __OO_AUTOSTART_TASK__
    static const EE_TID EE_oo_autostart_task_mode_OSDEFAULTAPPMODE[EE_OO_AUTOSTART_TASK_MODE_OSDEFAULTAPPMODE_SIZE] = 
        { 
    #if (EE_MAX_TASK > 0) && `@Task_1_Autostart`
        `@Task_1_Name`
    #endif
    #if (EE_MAX_TASK > 1) && `@Task_2_Autostart`
    #if `@Task_1_Autostart`
        ,
    #endif
        `@Task_2_Name`
    #endif
    #if (EE_MAX_TASK > 2) && `@Task_3_Autostart`
    #if `@Task_1_Autostart` || `@Task_2_Autostart`
        ,
    #endif
        `@Task_3_Name`
    #endif
    #if (EE_MAX_TASK > 3) && `@Task_4_Autostart`
    #if `@Task_1_Autostart` || `@Task_2_Autostart` || `@Task_3_Autostart`
        ,
    #endif
        `@Task_4_Name`
    #endif
    #if (EE_MAX_TASK > 4) && `@Task_5_Autostart`
    #if `@Task_1_Autostart` || `@Task_2_Autostart` || `@Task_3_Autostart` || `@Task_4_Autostart`
        ,
    #endif
        `@Task_5_Name`
    #endif
    #if (EE_MAX_TASK > 5) && `@Task_6_Autostart`
    #if `@Task_1_Autostart` || `@Task_2_Autostart` || `@Task_3_Autostart` || `@Task_4_Autostart` || `@Task_5_Autostart`
        ,
    #endif
        `@Task_6_Name`
    #endif
    #if (EE_MAX_TASK > 6) && `@Task_7_Autostart`
    #if `@Task_1_Autostart` || `@Task_2_Autostart` || `@Task_3_Autostart` || `@Task_4_Autostart` || `@Task_5_Autostart` || `@Task_6_Autostart`
        ,
    #endif
        `@Task_7_Name`
    #endif
    #if (EE_MAX_TASK > 7) && `@Task_8_Autostart`
    #if `@Task_1_Autostart` || `@Task_2_Autostart` || `@Task_3_Autostart` || `@Task_4_Autostart` || `@Task_5_Autostart` || `@Task_6_Autostart` || `@Task_7_Autostart`
        ,
    #endif
        `@Task_8_Name`
    #endif
        };

    const struct EE_oo_autostart_task_type EE_oo_autostart_task_data[EE_MAX_APPMODE] = {
        { (EE_OO_AUTOSTART_TASK_MODE_OSDEFAULTAPPMODE_SIZE), EE_oo_autostart_task_mode_OSDEFAULTAPPMODE}
    };
#endif
