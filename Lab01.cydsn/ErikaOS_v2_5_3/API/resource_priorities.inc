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

#ifndef RSC_PRIORITIES
#define RSC_PRIORITIES
    //Resource One
    #if `@Number_of_Resources` > 0
    #if `@Number_of_Tasks` > 0
        //Ceiling from Task 1
        #if (`@Task_1_Number_Resources` > 0) && (`@Task_1_Resource_1` == 1)
           #define RESPRI_1 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 1) && (`@Task_1_Resource_2` == 1)
            #define RESPRI_1 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 2) && (`@Task_1_Resource_3` == 1)
            #define RESPRI_1 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 3) && (`@Task_1_Resource_4` == 1)
            #define RESPRI_1 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 4) && (`@Task_1_Resource_5` == 1)
            #define RESPRI_1 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 5) && (`@Task_1_Resource_6` == 1)
            #define RESPRI_1 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 6) && (`@Task_1_Resource_7` == 1)
            #define RESPRI_1 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 7) && (`@Task_1_Resource_8` == 1)
            #define RESPRI_1 `@Task_1_Priority`
        #else
            #define RESPRI_1 0
        #endif
    #endif
    #if `@Number_of_Tasks` > 1    
        //Ceiling from Task 2
        #if (`@Task_2_Number_Resources` > 0) && (`@Task_2_Resource_1` == 1)
            #if RESPRI_1 < `@Task_2_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 1) && (`@Task_2_Resource_2` == 1)
            #if RESPRI_1 < `@Task_2_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 2) && (`@Task_2_Resource_3` == 1)
            #if RESPRI_1 < `@Task_2_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 3) && (`@Task_2_Resource_4` == 1)
            #if RESPRI_1 < `@Task_2_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 4) && (`@Task_2_Resource_5` == 1)
            #if RESPRI_1 < `@Task_2_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 5) && (`@Task_2_Resource_6` == 1)
            #if RESPRI_1 < `@Task_2_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 6) && (`@Task_2_Resource_7` == 1)
            #if RESPRI_1 < `@Task_2_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 7) && (`@Task_2_Resource_8` == 1)
            #if RESPRI_1 < `@Task_2_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_2_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 2    
        //Ceiling from Task 3
        #if (`@Task_3_Number_Resources` > 0) && (`@Task_3_Resource_1` == 1)
            #if RESPRI_1 < `@Task_3_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 1) && (`@Task_3_Resource_2` == 1)
            #if RESPRI_1 < `@Task_3_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 2) && (`@Task_3_Resource_3` == 1)
            #if RESPRI_1 < `@Task_3_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 3) && (`@Task_3_Resource_4` == 1)
            #if RESPRI_1 < `@Task_3_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 4) && (`@Task_3_Resource_5` == 1)
            #if RESPRI_1 < `@Task_3_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 5) && (`@Task_3_Resource_6` == 1)
            #if RESPRI_1 < `@Task_3_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 6) && (`@Task_3_Resource_7` == 1)
            #if RESPRI_1 < `@Task_3_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 7) && (`@Task_3_Resource_8` == 1)
            #if RESPRI_1 < `@Task_3_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_3_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 3    
        //Ceiling from Task 4
        #if (`@Task_4_Number_Resources` > 0) && (`@Task_4_Resource_1` == 1)
            #if RESPRI_1 < `@Task_4_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 1) && (`@Task_4_Resource_2` == 1)
            #if RESPRI_1 < `@Task_4_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 2) && (`@Task_4_Resource_3` == 1)
            #if RESPRI_1 < `@Task_4_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 3) && (`@Task_4_Resource_4` == 1)
            #if RESPRI_1 < `@Task_4_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 4) && (`@Task_4_Resource_5` == 1)
            #if RESPRI_1 < `@Task_4_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 5) && (`@Task_4_Resource_6` == 1)
            #if RESPRI_1 < `@Task_4_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 6) && (`@Task_4_Resource_7` == 1)
            #if RESPRI_1 < `@Task_4_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 7) && (`@Task_4_Resource_8` == 1)
            #if RESPRI_1 < `@Task_4_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_4_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 4    
        //Ceiling from Task 5
        #if (`@Task_5_Number_Resources` > 0) && (`@Task_5_Resource_1` == 1)
            #if RESPRI_1 < `@Task_5_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 1) && (`@Task_5_Resource_2` == 1)
            #if RESPRI_1 < `@Task_5_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 2) && (`@Task_5_Resource_3` == 1)
            #if RESPRI_1 < `@Task_5_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 3) && (`@Task_5_Resource_4` == 1)
            #if RESPRI_1 < `@Task_5_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 4) && (`@Task_5_Resource_5` == 1)
            #if RESPRI_1 < `@Task_5_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 5) && (`@Task_5_Resource_6` == 1)
            #if RESPRI_1 < `@Task_5_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 6) && (`@Task_5_Resource_7` == 1)
            #if RESPRI_1 < `@Task_5_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 7) && (`@Task_5_Resource_8` == 1)
            #if RESPRI_1 < `@Task_5_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_5_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 5    
        //Ceiling from Task 6
        #if (`@Task_6_Number_Resources` > 0) && (`@Task_6_Resource_1` == 1)
            #if RESPRI_1 < `@Task_6_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 1) && (`@Task_6_Resource_2` == 1)
            #if RESPRI_1 < `@Task_6_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 2) && (`@Task_6_Resource_3` == 1)
            #if RESPRI_1 < `@Task_6_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 3) && (`@Task_6_Resource_4` == 1)
            #if RESPRI_1 < `@Task_6_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 4) && (`@Task_6_Resource_5` == 1)
            #if RESPRI_1 < `@Task_6_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 5) && (`@Task_6_Resource_6` == 1)
            #if RESPRI_1 < `@Task_6_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 6) && (`@Task_6_Resource_7` == 1)
            #if RESPRI_1 < `@Task_6_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 7) && (`@Task_6_Resource_8` == 1)
            #if RESPRI_1 < `@Task_6_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_6_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 6    
        //Ceiling from Task 7
        #if (`@Task_7_Number_Resources` > 0) && (`@Task_7_Resource_1` == 1)
            #if RESPRI_1 < `@Task_7_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 1) && (`@Task_7_Resource_2` == 1)
            #if RESPRI_1 < `@Task_7_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 2) && (`@Task_7_Resource_3` == 1)
            #if RESPRI_1 < `@Task_7_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 3) && (`@Task_7_Resource_4` == 1)
            #if RESPRI_1 < `@Task_7_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 4) && (`@Task_7_Resource_5` == 1)
            #if RESPRI_1 < `@Task_7_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 5) && (`@Task_7_Resource_6` == 1)
            #if RESPRI_1 < `@Task_7_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 6) && (`@Task_7_Resource_7` == 1)
            #if RESPRI_1 < `@Task_7_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 7) && (`@Task_7_Resource_8` == 1)
            #if RESPRI_1 < `@Task_7_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_7_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 7    
        //Ceiling from Task 8
        #if (`@Task_8_Number_Resources` > 0) && (`@Task_8_Resource_1` == 1)
            #if RESPRI_1 < `@Task_8_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 1) && (`@Task_8_Resource_2` == 1)
            #if RESPRI_1 < `@Task_8_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 2) && (`@Task_8_Resource_3` == 1)
            #if RESPRI_1 < `@Task_8_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 3) && (`@Task_8_Resource_4` == 1)
            #if RESPRI_1 < `@Task_8_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 4) && (`@Task_8_Resource_5` == 1)
            #if RESPRI_1 < `@Task_8_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 5) && (`@Task_8_Resource_6` == 1)
            #if RESPRI_1 < `@Task_8_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 6) && (`@Task_8_Resource_7` == 1)
            #if RESPRI_1 < `@Task_8_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 7) && (`@Task_8_Resource_8` == 1)
            #if RESPRI_1 < `@Task_8_Priority`
                #undef RESPRI_1
                #define RESPRI_1 `@Task_8_Priority`
            #endif
        #endif   
    #endif
    #if `@Number_of_ISR` > 0
        //Ceiling from ISR 1
        #if `@ISR_1_Category` && (`@ISR_1_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_1_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_1_Priority`)
            #define RESPRI_1_ISR `@ISR_1_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 1
        //Ceiling from ISR 2
        #if `@ISR_2_Category` && (`@ISR_2_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_2_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_2_Priority`)
            #define RESPRI_1_ISR `@ISR_2_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 2
        //Ceiling from ISR 3
        #if `@ISR_3_Category` && (`@ISR_3_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_3_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_3_Priority`)
            #define RESPRI_1_ISR `@ISR_3_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 3
        //Ceiling from ISR 4
        #if `@ISR_4_Category` && (`@ISR_4_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_4_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_4_Priority`)
            #define RESPRI_1_ISR `@ISR_4_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 4
        //Ceiling from ISR 5
        #if `@ISR_5_Category` && (`@ISR_5_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_5_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_5_Priority`)
            #define RESPRI_1_ISR `@ISR_5_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 5
        //Ceiling from ISR 6
        #if `@ISR_6_Category` && (`@ISR_6_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_6_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_6_Priority`)
            #define RESPRI_1_ISR `@ISR_6_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 6
        //Ceiling from ISR 7
        #if `@ISR_7_Category` && (`@ISR_7_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_7_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_7_Priority`)
            #define RESPRI_1_ISR `@ISR_7_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 7
        //Ceiling from ISR 8
        #if `@ISR_8_Category` && (`@ISR_8_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_8_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_8_Priority`)
            #define RESPRI_1_ISR `@ISR_8_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 8
        //Ceiling from ISR 9
        #if `@ISR_9_Category` && (`@ISR_9_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_9_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_9_Priority`)
            #define RESPRI_1_ISR `@ISR_9_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 9
        //Ceiling from ISR 10
        #if `@ISR_10_Category` && (`@ISR_10_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_10_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_10_Priority`)
            #define RESPRI_1_ISR `@ISR_10_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 10
        //Ceiling from ISR 11
        #if `@ISR_11_Category` && (`@ISR_11_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_11_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_11_Priority`)
            #define RESPRI_1_ISR `@ISR_11_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 11
        //Ceiling from ISR 12
        #if `@ISR_12_Category` && (`@ISR_12_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_12_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_12_Priority`)
            #define RESPRI_1_ISR `@ISR_12_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 12
        //Ceiling from ISR 13
        #if `@ISR_13_Category` && (`@ISR_13_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_13_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_13_Priority`)
            #define RESPRI_1_ISR `@ISR_13_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 13
        //Ceiling from ISR 14
        #if `@ISR_14_Category` && (`@ISR_14_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_14_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_14_Priority`)
            #define RESPRI_1_ISR `@ISR_14_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 14
        //Ceiling from ISR 15
        #if `@ISR_15_Category` && (`@ISR_15_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_15_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_15_Priority`)
            #define RESPRI_1_ISR `@ISR_15_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 15
        //Ceiling from ISR 16
        #if `@ISR_16_Category` && (`@ISR_16_Resource` == 1)
        #if RESPRI_1 < ((1 << 7) << `@ISR_16_Priority`)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << `@ISR_16_Priority`)
            #define RESPRI_1_ISR `@ISR_16_Priority`
        #endif
        #endif
    #endif
#endif

    //Resource Two
    #if `@Number_of_Resources` > 1
    #if `@Number_of_Tasks` > 0
        //Ceiling from Task 1
        #if (`@Task_1_Number_Resources` > 0) && (`@Task_1_Resource_1` == 2)
           #define RESPRI_2 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 1) && (`@Task_1_Resource_2` == 2)
            #define RESPRI_2 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 2) && (`@Task_1_Resource_3` == 2)
            #define RESPRI_2 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 3) && (`@Task_1_Resource_4` == 2)
            #define RESPRI_2 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 4) && (`@Task_1_Resource_5` == 2)
            #define RESPRI_2 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 5) && (`@Task_1_Resource_6` == 2)
            #define RESPRI_2 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 6) && (`@Task_1_Resource_7` == 2)
            #define RESPRI_2 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 7) && (`@Task_1_Resource_8` == 2)
            #define RESPRI_2 `@Task_1_Priority`
        #else
            #define RESPRI_2 0
        #endif
    #endif
    #if `@Number_of_Tasks` > 1    
        //Ceiling from Task 2
        #if (`@Task_2_Number_Resources` > 0) && (`@Task_2_Resource_1` == 2)
            #if RESPRI_2 < `@Task_2_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 1) && (`@Task_2_Resource_2` == 2)
            #if RESPRI_2 < `@Task_2_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 2) && (`@Task_2_Resource_3` == 2)
            #if RESPRI_2 < `@Task_2_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 3) && (`@Task_2_Resource_4` == 2)
            #if RESPRI_2 < `@Task_2_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 4) && (`@Task_2_Resource_5` == 2)
            #if RESPRI_2 < `@Task_2_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 5) && (`@Task_2_Resource_6` == 2)
            #if RESPRI_2 < `@Task_2_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 6) && (`@Task_2_Resource_7` == 2)
            #if RESPRI_2 < `@Task_2_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 7) && (`@Task_2_Resource_8` == 2)
            #if RESPRI_2 < `@Task_2_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_2_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 2    
        //Ceiling from Task 3
        #if (`@Task_3_Number_Resources` > 0) && (`@Task_3_Resource_1` == 2)
            #if RESPRI_2 < `@Task_3_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 1) && (`@Task_3_Resource_2` == 2)
            #if RESPRI_2 < `@Task_3_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 2) && (`@Task_3_Resource_3` == 2)
            #if RESPRI_2 < `@Task_3_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 3) && (`@Task_3_Resource_4` == 2)
            #if RESPRI_2 < `@Task_3_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 4) && (`@Task_3_Resource_5` == 2)
            #if RESPRI_2 < `@Task_3_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 5) && (`@Task_3_Resource_6` == 2)
            #if RESPRI_2 < `@Task_3_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 6) && (`@Task_3_Resource_7` == 2)
            #if RESPRI_2 < `@Task_3_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 7) && (`@Task_3_Resource_8` == 2)
            #if RESPRI_2 < `@Task_3_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_3_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 3    
        //Ceiling from Task 4
        #if (`@Task_4_Number_Resources` > 0) && (`@Task_4_Resource_1` == 2)
            #if RESPRI_2 < `@Task_4_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 1) && (`@Task_4_Resource_2` == 2)
            #if RESPRI_2 < `@Task_4_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 2) && (`@Task_4_Resource_3` == 2)
            #if RESPRI_2 < `@Task_4_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 3) && (`@Task_4_Resource_4` == 2)
            #if RESPRI_2 < `@Task_4_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 4) && (`@Task_4_Resource_5` == 2)
            #if RESPRI_2 < `@Task_4_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 5) && (`@Task_4_Resource_6` == 2)
            #if RESPRI_2 < `@Task_4_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 6) && (`@Task_4_Resource_7` == 2)
            #if RESPRI_2 < `@Task_4_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 7) && (`@Task_4_Resource_8` == 2)
            #if RESPRI_2 < `@Task_4_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_4_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 4    
        //Ceiling from Task 5
        #if (`@Task_5_Number_Resources` > 0) && (`@Task_5_Resource_1` == 2)
            #if RESPRI_2 < `@Task_5_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 1) && (`@Task_5_Resource_2` == 2)
            #if RESPRI_2 < `@Task_5_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 2) && (`@Task_5_Resource_3` == 2)
            #if RESPRI_2 < `@Task_5_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 3) && (`@Task_5_Resource_4` == 2)
            #if RESPRI_2 < `@Task_5_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 4) && (`@Task_5_Resource_5` == 2)
            #if RESPRI_2 < `@Task_5_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 5) && (`@Task_5_Resource_6` == 2)
            #if RESPRI_2 < `@Task_5_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 6) && (`@Task_5_Resource_7` == 2)
            #if RESPRI_2 < `@Task_5_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 7) && (`@Task_5_Resource_8` == 2)
            #if RESPRI_2 < `@Task_5_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_5_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 5    
        //Ceiling from Task 6
        #if (`@Task_6_Number_Resources` > 0) && (`@Task_6_Resource_1` == 2)
            #if RESPRI_2 < `@Task_6_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 1) && (`@Task_6_Resource_2` == 2)
            #if RESPRI_2 < `@Task_6_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 2) && (`@Task_6_Resource_3` == 2)
            #if RESPRI_2 < `@Task_6_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 3) && (`@Task_6_Resource_4` == 2)
            #if RESPRI_2 < `@Task_6_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 4) && (`@Task_6_Resource_5` == 2)
            #if RESPRI_2 < `@Task_6_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 5) && (`@Task_6_Resource_6` == 2)
            #if RESPRI_2 < `@Task_6_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 6) && (`@Task_6_Resource_7` == 2)
            #if RESPRI_2 < `@Task_6_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 7) && (`@Task_6_Resource_8` == 2)
            #if RESPRI_2 < `@Task_6_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_6_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 6    
        //Ceiling from Task 7
        #if (`@Task_7_Number_Resources` > 0) && (`@Task_7_Resource_1` == 2)
            #if RESPRI_2 < `@Task_7_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 1) && (`@Task_7_Resource_2` == 2)
            #if RESPRI_2 < `@Task_7_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 2) && (`@Task_7_Resource_3` == 2)
            #if RESPRI_2 < `@Task_7_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 3) && (`@Task_7_Resource_4` == 2)
            #if RESPRI_2 < `@Task_7_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 4) && (`@Task_7_Resource_5` == 2)
            #if RESPRI_2 < `@Task_7_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 5) && (`@Task_7_Resource_6` == 2)
            #if RESPRI_2 < `@Task_7_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 6) && (`@Task_7_Resource_7` == 2)
            #if RESPRI_2 < `@Task_7_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 7) && (`@Task_7_Resource_8` == 2)
            #if RESPRI_2 < `@Task_7_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_7_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 7    
        //Ceiling from Task 8
        #if (`@Task_8_Number_Resources` > 0) && (`@Task_8_Resource_1` == 2)
            #if RESPRI_2 < `@Task_8_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 1) && (`@Task_8_Resource_2` == 2)
            #if RESPRI_2 < `@Task_8_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 2) && (`@Task_8_Resource_3` == 2)
            #if RESPRI_2 < `@Task_8_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 3) && (`@Task_8_Resource_4` == 2)
            #if RESPRI_2 < `@Task_8_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 4) && (`@Task_8_Resource_5` == 2)
            #if RESPRI_2 < `@Task_8_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 5) && (`@Task_8_Resource_6` == 2)
            #if RESPRI_2 < `@Task_8_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 6) && (`@Task_8_Resource_7` == 2)
            #if RESPRI_2 < `@Task_8_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 7) && (`@Task_8_Resource_8` == 2)
            #if RESPRI_2 < `@Task_8_Priority`
                #undef RESPRI_2
                #define RESPRI_2 `@Task_8_Priority`
            #endif
        #endif   
    #endif    
    #if `@Number_of_ISR` > 0
        //Ceiling from ISR 1
        #if `@ISR_1_Category` && (`@ISR_1_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_1_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_1_Priority`)
            #define RESPRI_2_ISR `@ISR_1_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 1
        //Ceiling from ISR 2
        #if `@ISR_2_Category` && (`@ISR_2_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_2_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_2_Priority`)
            #define RESPRI_2_ISR `@ISR_2_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 2
        //Ceiling from ISR 3
        #if `@ISR_3_Category` && (`@ISR_3_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_3_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_3_Priority`)
            #define RESPRI_2_ISR `@ISR_3_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 3
        //Ceiling from ISR 4
        #if `@ISR_4_Category` && (`@ISR_4_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_4_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_4_Priority`)
            #define RESPRI_2_ISR `@ISR_4_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 4
        //Ceiling from ISR 5
        #if `@ISR_5_Category` && (`@ISR_5_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_5_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_5_Priority`)
            #define RESPRI_2_ISR `@ISR_5_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 5
        //Ceiling from ISR 6
        #if `@ISR_6_Category` && (`@ISR_6_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_6_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_6_Priority`)
            #define RESPRI_2_ISR `@ISR_6_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 6
        //Ceiling from ISR 7
        #if `@ISR_7_Category` && (`@ISR_7_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_7_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_7_Priority`)
            #define RESPRI_2_ISR `@ISR_7_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 7
        //Ceiling from ISR 8
        #if `@ISR_8_Category` && (`@ISR_8_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_8_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_8_Priority`)
            #define RESPRI_2_ISR `@ISR_8_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 8
        //Ceiling from ISR 9
        #if `@ISR_9_Category` && (`@ISR_9_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_9_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_9_Priority`)
            #define RESPRI_2_ISR `@ISR_9_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 9
        //Ceiling from ISR 10
        #if `@ISR_10_Category` && (`@ISR_10_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_10_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_10_Priority`)
            #define RESPRI_2_ISR `@ISR_10_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 10
        //Ceiling from ISR 11
        #if `@ISR_11_Category` && (`@ISR_11_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_11_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_11_Priority`)
            #define RESPRI_2_ISR `@ISR_11_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 11
        //Ceiling from ISR 12
        #if `@ISR_12_Category` && (`@ISR_12_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_12_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_12_Priority`)
            #define RESPRI_2_ISR `@ISR_12_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 12
        //Ceiling from ISR 13
        #if `@ISR_13_Category` && (`@ISR_13_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_13_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_13_Priority`)
            #define RESPRI_2_ISR `@ISR_13_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 13
        //Ceiling from ISR 14
        #if `@ISR_14_Category` && (`@ISR_14_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_14_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_14_Priority`)
            #define RESPRI_2_ISR `@ISR_14_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 14
        //Ceiling from ISR 15
        #if `@ISR_15_Category` && (`@ISR_15_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_15_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_15_Priority`)
            #define RESPRI_2_ISR `@ISR_15_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 15
        //Ceiling from ISR 16
        #if `@ISR_16_Category` && (`@ISR_16_Resource` == 2)
        #if RESPRI_2 < ((1 << 7) << `@ISR_16_Priority`)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << `@ISR_16_Priority`)
            #define RESPRI_2_ISR `@ISR_16_Priority`
        #endif
        #endif
    #endif
#endif

    //Resource Three
    #if `@Number_of_Resources` > 2
    #if `@Number_of_Tasks` > 0
        //Ceiling from Task 1
        #if (`@Task_1_Number_Resources` > 0) && (`@Task_1_Resource_1` == 3)
           #define RESPRI_3 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 1) && (`@Task_1_Resource_2` == 3)
            #define RESPRI_3 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 2) && (`@Task_1_Resource_3` == 3)
            #define RESPRI_3 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 3) && (`@Task_1_Resource_4` == 3)
            #define RESPRI_3 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 4) && (`@Task_1_Resource_5` == 3)
            #define RESPRI_3 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 5) && (`@Task_1_Resource_6` == 3)
            #define RESPRI_3 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 6) && (`@Task_1_Resource_7` == 3)
            #define RESPRI_3 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 7) && (`@Task_1_Resource_8` == 3)
            #define RESPRI_3 `@Task_1_Priority`
        #else
            #define RESPRI_3 0
        #endif
    #endif
    #if `@Number_of_Tasks` > 1    
        //Ceiling from Task 2
        #if (`@Task_2_Number_Resources` > 0) && (`@Task_2_Resource_1` == 3)
            #if RESPRI_3 < `@Task_2_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 1) && (`@Task_2_Resource_2` == 3)
            #if RESPRI_3 < `@Task_2_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 2) && (`@Task_2_Resource_3` == 3)
            #if RESPRI_3 < `@Task_2_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 3) && (`@Task_2_Resource_4` == 3)
            #if RESPRI_3 < `@Task_2_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 4) && (`@Task_2_Resource_5` == 3)
            #if RESPRI_3 < `@Task_2_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 5) && (`@Task_2_Resource_6` == 3)
            #if RESPRI_3 < `@Task_2_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 6) && (`@Task_2_Resource_7` == 3)
            #if RESPRI_3 < `@Task_2_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 7) && (`@Task_2_Resource_8` == 3)
            #if RESPRI_3 < `@Task_2_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_2_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 2    
        //Ceiling from Task 3
        #if (`@Task_3_Number_Resources` > 0) && (`@Task_3_Resource_1` == 3)
            #if RESPRI_3 < `@Task_3_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 1) && (`@Task_3_Resource_2` == 3)
            #if RESPRI_3 < `@Task_3_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 2) && (`@Task_3_Resource_3` == 3)
            #if RESPRI_3 < `@Task_3_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 3) && (`@Task_3_Resource_4` == 3)
            #if RESPRI_3 < `@Task_3_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 4) && (`@Task_3_Resource_5` == 3)
            #if RESPRI_3 < `@Task_3_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 5) && (`@Task_3_Resource_6` == 3)
            #if RESPRI_3 < `@Task_3_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 6) && (`@Task_3_Resource_7` == 3)
            #if RESPRI_3 < `@Task_3_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 7) && (`@Task_3_Resource_8` == 3)
            #if RESPRI_3 < `@Task_3_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_3_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 3    
        //Ceiling from Task 4
        #if (`@Task_4_Number_Resources` > 0) && (`@Task_4_Resource_1` == 3)
            #if RESPRI_3 < `@Task_4_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 1) && (`@Task_4_Resource_2` == 3)
            #if RESPRI_3 < `@Task_4_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 2) && (`@Task_4_Resource_3` == 3)
            #if RESPRI_3 < `@Task_4_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 3) && (`@Task_4_Resource_4` == 3)
            #if RESPRI_3 < `@Task_4_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 4) && (`@Task_4_Resource_5` == 3)
            #if RESPRI_3 < `@Task_4_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 5) && (`@Task_4_Resource_6` == 3)
            #if RESPRI_3 < `@Task_4_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 6) && (`@Task_4_Resource_7` == 3)
            #if RESPRI_3 < `@Task_4_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 7) && (`@Task_4_Resource_8` == 3)
            #if RESPRI_3 < `@Task_4_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_4_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 4    
        //Ceiling from Task 5
        #if (`@Task_5_Number_Resources` > 0) && (`@Task_5_Resource_1` == 3)
            #if RESPRI_3 < `@Task_5_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 1) && (`@Task_5_Resource_2` == 3)
            #if RESPRI_3 < `@Task_5_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 2) && (`@Task_5_Resource_3` == 3)
            #if RESPRI_3 < `@Task_5_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 3) && (`@Task_5_Resource_4` == 3)
            #if RESPRI_3 < `@Task_5_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 4) && (`@Task_5_Resource_5` == 3)
            #if RESPRI_3 < `@Task_5_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 5) && (`@Task_5_Resource_6` == 3)
            #if RESPRI_3 < `@Task_5_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 6) && (`@Task_5_Resource_7` == 3)
            #if RESPRI_3 < `@Task_5_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 7) && (`@Task_5_Resource_8` == 3)
            #if RESPRI_3 < `@Task_5_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_5_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 5    
        //Ceiling from Task 6
        #if (`@Task_6_Number_Resources` > 0) && (`@Task_6_Resource_1` == 3)
            #if RESPRI_3 < `@Task_6_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 1) && (`@Task_6_Resource_2` == 3)
            #if RESPRI_3 < `@Task_6_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 2) && (`@Task_6_Resource_3` == 3)
            #if RESPRI_3 < `@Task_6_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 3) && (`@Task_6_Resource_4` == 3)
            #if RESPRI_3 < `@Task_6_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 4) && (`@Task_6_Resource_5` == 3)
            #if RESPRI_3 < `@Task_6_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 5) && (`@Task_6_Resource_6` == 3)
            #if RESPRI_3 < `@Task_6_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 6) && (`@Task_6_Resource_7` == 3)
            #if RESPRI_3 < `@Task_6_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 7) && (`@Task_6_Resource_8` == 3)
            #if RESPRI_3 < `@Task_6_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_6_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 6    
        //Ceiling from Task 7
        #if (`@Task_7_Number_Resources` > 0) && (`@Task_7_Resource_1` == 3)
            #if RESPRI_3 < `@Task_7_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 1) && (`@Task_7_Resource_2` == 3)
            #if RESPRI_3 < `@Task_7_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 2) && (`@Task_7_Resource_3` == 3)
            #if RESPRI_3 < `@Task_7_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 3) && (`@Task_7_Resource_4` == 3)
            #if RESPRI_3 < `@Task_7_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 4) && (`@Task_7_Resource_5` == 3)
            #if RESPRI_3 < `@Task_7_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 5) && (`@Task_7_Resource_6` == 3)
            #if RESPRI_3 < `@Task_7_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 6) && (`@Task_7_Resource_7` == 3)
            #if RESPRI_3 < `@Task_7_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 7) && (`@Task_7_Resource_8` == 3)
            #if RESPRI_3 < `@Task_7_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_7_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 7    
        //Ceiling from Task 8
        #if (`@Task_8_Number_Resources` > 0) && (`@Task_8_Resource_1` == 3)
            #if RESPRI_3 < `@Task_8_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 1) && (`@Task_8_Resource_2` == 3)
            #if RESPRI_3 < `@Task_8_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 2) && (`@Task_8_Resource_3` == 3)
            #if RESPRI_3 < `@Task_8_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 3) && (`@Task_8_Resource_4` == 3)
            #if RESPRI_3 < `@Task_8_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 4) && (`@Task_8_Resource_5` == 3)
            #if RESPRI_3 < `@Task_8_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 5) && (`@Task_8_Resource_6` == 3)
            #if RESPRI_3 < `@Task_8_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 6) && (`@Task_8_Resource_7` == 3)
            #if RESPRI_3 < `@Task_8_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 7) && (`@Task_8_Resource_8` == 3)
            #if RESPRI_3 < `@Task_8_Priority`
                #undef RESPRI_3
                #define RESPRI_3 `@Task_8_Priority`
            #endif
        #endif   
    #endif
    #if `@Number_of_ISR` > 0
        //Ceiling from ISR 1
        #if `@ISR_1_Category` && (`@ISR_1_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_1_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_1_Priority`)
            #define RESPRI_3_ISR `@ISR_1_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 1
        //Ceiling from ISR 2
        #if `@ISR_2_Category` && (`@ISR_2_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_2_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_2_Priority`)
            #define RESPRI_3_ISR `@ISR_2_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 2
        //Ceiling from ISR 3
        #if `@ISR_3_Category` && (`@ISR_3_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_3_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_3_Priority`)
            #define RESPRI_3_ISR `@ISR_3_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 3
        //Ceiling from ISR 4
        #if `@ISR_4_Category` && (`@ISR_4_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_4_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_4_Priority`)
            #define RESPRI_3_ISR `@ISR_4_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 4
        //Ceiling from ISR 5
        #if `@ISR_5_Category` && (`@ISR_5_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_5_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_5_Priority`)
            #define RESPRI_3_ISR `@ISR_5_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 5
        //Ceiling from ISR 6
        #if `@ISR_6_Category` && (`@ISR_6_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_6_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_6_Priority`)
            #define RESPRI_3_ISR `@ISR_6_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 6
        //Ceiling from ISR 7
        #if `@ISR_7_Category` && (`@ISR_7_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_7_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_7_Priority`)
            #define RESPRI_3_ISR `@ISR_7_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 7
        //Ceiling from ISR 8
        #if `@ISR_8_Category` && (`@ISR_8_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_8_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_8_Priority`)
            #define RESPRI_3_ISR `@ISR_8_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 8
        //Ceiling from ISR 9
        #if `@ISR_9_Category` && (`@ISR_9_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_9_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_9_Priority`)
            #define RESPRI_3_ISR `@ISR_9_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 9
        //Ceiling from ISR 10
        #if `@ISR_10_Category` && (`@ISR_10_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_10_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_10_Priority`)
            #define RESPRI_3_ISR `@ISR_10_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 10
        //Ceiling from ISR 11
        #if `@ISR_11_Category` && (`@ISR_11_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_11_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_11_Priority`)
            #define RESPRI_3_ISR `@ISR_11_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 11
        //Ceiling from ISR 12
        #if `@ISR_12_Category` && (`@ISR_12_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_12_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_12_Priority`)
            #define RESPRI_3_ISR `@ISR_12_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 12
        //Ceiling from ISR 13
        #if `@ISR_13_Category` && (`@ISR_13_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_13_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_13_Priority`)
            #define RESPRI_3_ISR `@ISR_13_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 13
        //Ceiling from ISR 14
        #if `@ISR_14_Category` && (`@ISR_14_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_14_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_14_Priority`)
            #define RESPRI_3_ISR `@ISR_14_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 14
        //Ceiling from ISR 15
        #if `@ISR_15_Category` && (`@ISR_15_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_15_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_15_Priority`)
            #define RESPRI_3_ISR `@ISR_15_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 15
        //Ceiling from ISR 16
        #if `@ISR_16_Category` && (`@ISR_16_Resource` == 3)
        #if RESPRI_3 < ((1 << 7) << `@ISR_16_Priority`)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << `@ISR_16_Priority`)
            #define RESPRI_3_ISR `@ISR_16_Priority`
        #endif
        #endif
    #endif
#endif

    //Resource Four
    #if `@Number_of_Resources` > 3
    #if `@Number_of_Tasks` > 0
        //Ceiling from Task 1
        #if (`@Task_1_Number_Resources` > 0) && (`@Task_1_Resource_1` == 4)
           #define RESPRI_4 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 1) && (`@Task_1_Resource_2` == 4)
            #define RESPRI_4 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 2) && (`@Task_1_Resource_3` == 4)
            #define RESPRI_4 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 3) && (`@Task_1_Resource_4` == 4)
            #define RESPRI_4 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 4) && (`@Task_1_Resource_5` == 4)
            #define RESPRI_4 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 5) && (`@Task_1_Resource_6` == 4)
            #define RESPRI_4 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 6) && (`@Task_1_Resource_7` == 4)
            #define RESPRI_4 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 7) && (`@Task_1_Resource_8` == 4)
            #define RESPRI_4 `@Task_1_Priority`
        #else
            #define RESPRI_4 0
        #endif
    #endif
    #if `@Number_of_Tasks` > 1    
        //Ceiling from Task 2
        #if (`@Task_2_Number_Resources` > 0) && (`@Task_2_Resource_1` == 4)
            #if RESPRI_4 < `@Task_2_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 1) && (`@Task_2_Resource_2` == 4)
            #if RESPRI_4 < `@Task_2_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 2) && (`@Task_2_Resource_3` == 4)
            #if RESPRI_4 < `@Task_2_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 3) && (`@Task_2_Resource_4` == 4)
            #if RESPRI_4 < `@Task_2_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 4) && (`@Task_2_Resource_5` == 4)
            #if RESPRI_4 < `@Task_2_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 5) && (`@Task_2_Resource_6` == 4)
            #if RESPRI_4 < `@Task_2_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 6) && (`@Task_2_Resource_7` == 4)
            #if RESPRI_4 < `@Task_2_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 7) && (`@Task_2_Resource_8` == 4)
            #if RESPRI_4 < `@Task_2_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_2_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 2    
        //Ceiling from Task 3
        #if (`@Task_3_Number_Resources` > 0) && (`@Task_3_Resource_1` == 4)
            #if RESPRI_4 < `@Task_3_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 1) && (`@Task_3_Resource_2` == 4)
            #if RESPRI_4 < `@Task_3_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 2) && (`@Task_3_Resource_3` == 4)
            #if RESPRI_4 < `@Task_3_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 3) && (`@Task_3_Resource_4` == 4)
            #if RESPRI_4 < `@Task_3_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 4) && (`@Task_3_Resource_5` == 4)
            #if RESPRI_4 < `@Task_3_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 5) && (`@Task_3_Resource_6` == 4)
            #if RESPRI_4 < `@Task_3_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 6) && (`@Task_3_Resource_7` == 4)
            #if RESPRI_4 < `@Task_3_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 7) && (`@Task_3_Resource_8` == 4)
            #if RESPRI_4 < `@Task_3_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_3_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 3    
        //Ceiling from Task 4
        #if (`@Task_4_Number_Resources` > 0) && (`@Task_4_Resource_1` == 4)
            #if RESPRI_4 < `@Task_4_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 1) && (`@Task_4_Resource_2` == 4)
            #if RESPRI_4 < `@Task_4_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 2) && (`@Task_4_Resource_3` == 4)
            #if RESPRI_4 < `@Task_4_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 3) && (`@Task_4_Resource_4` == 4)
            #if RESPRI_4 < `@Task_4_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 4) && (`@Task_4_Resource_5` == 4)
            #if RESPRI_4 < `@Task_4_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 5) && (`@Task_4_Resource_6` == 4)
            #if RESPRI_4 < `@Task_4_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 6) && (`@Task_4_Resource_7` == 4)
            #if RESPRI_4 < `@Task_4_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 7) && (`@Task_4_Resource_8` == 4)
            #if RESPRI_4 < `@Task_4_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_4_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 4    
        //Ceiling from Task 5
        #if (`@Task_5_Number_Resources` > 0) && (`@Task_5_Resource_1` == 4)
            #if RESPRI_4 < `@Task_5_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 1) && (`@Task_5_Resource_2` == 4)
            #if RESPRI_4 < `@Task_5_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 2) && (`@Task_5_Resource_3` == 4)
            #if RESPRI_4 < `@Task_5_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 3) && (`@Task_5_Resource_4` == 4)
            #if RESPRI_4 < `@Task_5_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 4) && (`@Task_5_Resource_5` == 4)
            #if RESPRI_4 < `@Task_5_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 5) && (`@Task_5_Resource_6` == 4)
            #if RESPRI_4 < `@Task_5_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 6) && (`@Task_5_Resource_7` == 4)
            #if RESPRI_4 < `@Task_5_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 7) && (`@Task_5_Resource_8` == 4)
            #if RESPRI_4 < `@Task_5_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_5_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 5    
        //Ceiling from Task 6
        #if (`@Task_6_Number_Resources` > 0) && (`@Task_6_Resource_1` == 4)
            #if RESPRI_4 < `@Task_6_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 1) && (`@Task_6_Resource_2` == 4)
            #if RESPRI_4 < `@Task_6_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 2) && (`@Task_6_Resource_3` == 4)
            #if RESPRI_4 < `@Task_6_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 3) && (`@Task_6_Resource_4` == 4)
            #if RESPRI_4 < `@Task_6_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 4) && (`@Task_6_Resource_5` == 4)
            #if RESPRI_4 < `@Task_6_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 5) && (`@Task_6_Resource_6` == 4)
            #if RESPRI_4 < `@Task_6_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 6) && (`@Task_6_Resource_7` == 4)
            #if RESPRI_4 < `@Task_6_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 7) && (`@Task_6_Resource_8` == 4)
            #if RESPRI_4 < `@Task_6_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_6_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 6    
        //Ceiling from Task 7
        #if (`@Task_7_Number_Resources` > 0) && (`@Task_7_Resource_1` == 4)
            #if RESPRI_4 < `@Task_7_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 1) && (`@Task_7_Resource_2` == 4)
            #if RESPRI_4 < `@Task_7_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 2) && (`@Task_7_Resource_3` == 4)
            #if RESPRI_4 < `@Task_7_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 3) && (`@Task_7_Resource_4` == 4)
            #if RESPRI_4 < `@Task_7_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 4) && (`@Task_7_Resource_5` == 4)
            #if RESPRI_4 < `@Task_7_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 5) && (`@Task_7_Resource_6` == 4)
            #if RESPRI_4 < `@Task_7_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 6) && (`@Task_7_Resource_7` == 4)
            #if RESPRI_4 < `@Task_7_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 7) && (`@Task_7_Resource_8` == 4)
            #if RESPRI_4 < `@Task_7_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_7_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 7    
        //Ceiling from Task 8
        #if (`@Task_8_Number_Resources` > 0) && (`@Task_8_Resource_1` == 4)
            #if RESPRI_4 < `@Task_8_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 1) && (`@Task_8_Resource_2` == 4)
            #if RESPRI_4 < `@Task_8_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 2) && (`@Task_8_Resource_3` == 4)
            #if RESPRI_4 < `@Task_8_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 3) && (`@Task_8_Resource_4` == 4)
            #if RESPRI_4 < `@Task_8_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 4) && (`@Task_8_Resource_5` == 4)
            #if RESPRI_4 < `@Task_8_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 5) && (`@Task_8_Resource_6` == 4)
            #if RESPRI_4 < `@Task_8_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 6) && (`@Task_8_Resource_7` == 4)
            #if RESPRI_4 < `@Task_8_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 7) && (`@Task_8_Resource_8` == 4)
            #if RESPRI_4 < `@Task_8_Priority`
                #undef RESPRI_4
                #define RESPRI_4 `@Task_8_Priority`
            #endif
        #endif   
    #endif
    #if `@Number_of_ISR` > 0
        //Ceiling from ISR 1
        #if `@ISR_1_Category` && (`@ISR_1_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_1_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_1_Priority`)
            #define RESPRI_4_ISR `@ISR_1_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 1
        //Ceiling from ISR 2
        #if `@ISR_2_Category` && (`@ISR_2_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_2_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_2_Priority`)
            #define RESPRI_4_ISR `@ISR_2_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 2
        //Ceiling from ISR 3
        #if `@ISR_3_Category` && (`@ISR_3_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_3_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_3_Priority`)
            #define RESPRI_4_ISR `@ISR_3_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 3
        //Ceiling from ISR 4
        #if `@ISR_4_Category` && (`@ISR_4_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_4_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_4_Priority`)
            #define RESPRI_4_ISR `@ISR_4_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 4
        //Ceiling from ISR 5
        #if `@ISR_5_Category` && (`@ISR_5_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_5_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_5_Priority`)
            #define RESPRI_4_ISR `@ISR_5_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 5
        //Ceiling from ISR 6
        #if `@ISR_6_Category` && (`@ISR_6_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_6_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_6_Priority`)
            #define RESPRI_4_ISR `@ISR_6_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 6
        //Ceiling from ISR 7
        #if `@ISR_7_Category` && (`@ISR_7_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_7_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_7_Priority`)
            #define RESPRI_4_ISR `@ISR_7_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 7
        //Ceiling from ISR 8
        #if `@ISR_8_Category` && (`@ISR_8_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_8_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_8_Priority`)
            #define RESPRI_4_ISR `@ISR_8_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 8
        //Ceiling from ISR 9
        #if `@ISR_9_Category` && (`@ISR_9_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_9_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_9_Priority`)
            #define RESPRI_4_ISR `@ISR_9_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 9
        //Ceiling from ISR 10
        #if `@ISR_10_Category` && (`@ISR_10_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_10_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_10_Priority`)
            #define RESPRI_4_ISR `@ISR_10_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 10
        //Ceiling from ISR 11
        #if `@ISR_11_Category` && (`@ISR_11_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_11_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_11_Priority`)
            #define RESPRI_4_ISR `@ISR_11_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 11
        //Ceiling from ISR 12
        #if `@ISR_12_Category` && (`@ISR_12_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_12_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_12_Priority`)
            #define RESPRI_4_ISR `@ISR_12_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 12
        //Ceiling from ISR 13
        #if `@ISR_13_Category` && (`@ISR_13_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_13_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_13_Priority`)
            #define RESPRI_4_ISR `@ISR_13_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 13
        //Ceiling from ISR 14
        #if `@ISR_14_Category` && (`@ISR_14_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_14_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_14_Priority`)
            #define RESPRI_4_ISR `@ISR_14_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 14
        //Ceiling from ISR 15
        #if `@ISR_15_Category` && (`@ISR_15_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_15_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_15_Priority`)
            #define RESPRI_4_ISR `@ISR_15_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 15
        //Ceiling from ISR 16
        #if `@ISR_16_Category` && (`@ISR_16_Resource` == 4)
        #if RESPRI_4 < ((1 << 7) << `@ISR_16_Priority`)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << `@ISR_16_Priority`)
            #define RESPRI_4_ISR `@ISR_16_Priority`
        #endif
        #endif
    #endif
#endif
    
    //Resource Five
    #if `@Number_of_Resources` > 4
    #if `@Number_of_Tasks` > 0
        //Ceiling from Task 1
        #if (`@Task_1_Number_Resources` > 0) && (`@Task_1_Resource_1` == 5)
           #define RESPRI_5 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 1) && (`@Task_1_Resource_2` == 5)
            #define RESPRI_5 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 2) && (`@Task_1_Resource_3` == 5)
            #define RESPRI_5 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 3) && (`@Task_1_Resource_4` == 5)
            #define RESPRI_5 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 4) && (`@Task_1_Resource_5` == 5)
            #define RESPRI_5 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 5) && (`@Task_1_Resource_6` == 5)
            #define RESPRI_5 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 6) && (`@Task_1_Resource_7` == 5)
            #define RESPRI_5 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 7) && (`@Task_1_Resource_8` == 5)
            #define RESPRI_5 `@Task_1_Priority`
        #else
            #define RESPRI_5 0
        #endif
    #endif
    #if `@Number_of_Tasks` > 1    
        //Ceiling from Task 2
        #if (`@Task_2_Number_Resources` > 0) && (`@Task_2_Resource_1` == 5)
            #if RESPRI_5 < `@Task_2_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 1) && (`@Task_2_Resource_2` == 5)
            #if RESPRI_5 < `@Task_2_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 2) && (`@Task_2_Resource_3` == 5)
            #if RESPRI_5 < `@Task_2_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 3) && (`@Task_2_Resource_4` == 5)
            #if RESPRI_5 < `@Task_2_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 4) && (`@Task_2_Resource_5` == 5)
            #if RESPRI_5 < `@Task_2_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 5) && (`@Task_2_Resource_6` == 5)
            #if RESPRI_5 < `@Task_2_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 6) && (`@Task_2_Resource_7` == 5)
            #if RESPRI_5 < `@Task_2_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 7) && (`@Task_2_Resource_8` == 5)
            #if RESPRI_5 < `@Task_2_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_2_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 2    
        //Ceiling from Task 3
        #if (`@Task_3_Number_Resources` > 0) && (`@Task_3_Resource_1` == 5)
            #if RESPRI_5 < `@Task_3_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 1) && (`@Task_3_Resource_2` == 5)
            #if RESPRI_5 < `@Task_3_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 2) && (`@Task_3_Resource_3` == 5)
            #if RESPRI_5 < `@Task_3_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 3) && (`@Task_3_Resource_4` == 5)
            #if RESPRI_5 < `@Task_3_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 4) && (`@Task_3_Resource_5` == 5)
            #if RESPRI_5 < `@Task_3_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 5) && (`@Task_3_Resource_6` == 5)
            #if RESPRI_5 < `@Task_3_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 6) && (`@Task_3_Resource_7` == 5)
            #if RESPRI_5 < `@Task_3_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 7) && (`@Task_3_Resource_8` == 5)
            #if RESPRI_5 < `@Task_3_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_3_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 3    
        //Ceiling from Task 4
        #if (`@Task_4_Number_Resources` > 0) && (`@Task_4_Resource_1` == 5)
            #if RESPRI_5 < `@Task_4_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 1) && (`@Task_4_Resource_2` == 5)
            #if RESPRI_5 < `@Task_4_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 2) && (`@Task_4_Resource_3` == 5)
            #if RESPRI_5 < `@Task_4_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 3) && (`@Task_4_Resource_4` == 5)
            #if RESPRI_5 < `@Task_4_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 4) && (`@Task_4_Resource_5` == 5)
            #if RESPRI_5 < `@Task_4_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 5) && (`@Task_4_Resource_6` == 5)
            #if RESPRI_5 < `@Task_4_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 6) && (`@Task_4_Resource_7` == 5)
            #if RESPRI_5 < `@Task_4_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 7) && (`@Task_4_Resource_8` == 5)
            #if RESPRI_5 < `@Task_4_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_4_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 4    
        //Ceiling from Task 5
        #if (`@Task_5_Number_Resources` > 0) && (`@Task_5_Resource_1` == 5)
            #if RESPRI_5 < `@Task_5_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 1) && (`@Task_5_Resource_2` == 5)
            #if RESPRI_5 < `@Task_5_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 2) && (`@Task_5_Resource_3` == 5)
            #if RESPRI_5 < `@Task_5_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 3) && (`@Task_5_Resource_4` == 5)
            #if RESPRI_5 < `@Task_5_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 4) && (`@Task_5_Resource_5` == 5)
            #if RESPRI_5 < `@Task_5_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 5) && (`@Task_5_Resource_6` == 5)
            #if RESPRI_5 < `@Task_5_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 6) && (`@Task_5_Resource_7` == 5)
            #if RESPRI_5 < `@Task_5_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 7) && (`@Task_5_Resource_8` == 5)
            #if RESPRI_5 < `@Task_5_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_5_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 5    
        //Ceiling from Task 6
        #if (`@Task_6_Number_Resources` > 0) && (`@Task_6_Resource_1` == 5)
            #if RESPRI_5 < `@Task_6_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 1) && (`@Task_6_Resource_2` == 5)
            #if RESPRI_5 < `@Task_6_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 2) && (`@Task_6_Resource_3` == 5)
            #if RESPRI_5 < `@Task_6_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 3) && (`@Task_6_Resource_4` == 5)
            #if RESPRI_5 < `@Task_6_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 4) && (`@Task_6_Resource_5` == 5)
            #if RESPRI_5 < `@Task_6_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 5) && (`@Task_6_Resource_6` == 5)
            #if RESPRI_5 < `@Task_6_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 6) && (`@Task_6_Resource_7` == 5)
            #if RESPRI_5 < `@Task_6_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 7) && (`@Task_6_Resource_8` == 5)
            #if RESPRI_5 < `@Task_6_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_6_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 6    
        //Ceiling from Task 7
        #if (`@Task_7_Number_Resources` > 0) && (`@Task_7_Resource_1` == 5)
            #if RESPRI_5 < `@Task_7_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 1) && (`@Task_7_Resource_2` == 5)
            #if RESPRI_5 < `@Task_7_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 2) && (`@Task_7_Resource_3` == 5)
            #if RESPRI_5 < `@Task_7_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 3) && (`@Task_7_Resource_4` == 5)
            #if RESPRI_5 < `@Task_7_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 4) && (`@Task_7_Resource_5` == 5)
            #if RESPRI_5 < `@Task_7_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 5) && (`@Task_7_Resource_6` == 5)
            #if RESPRI_5 < `@Task_7_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 6) && (`@Task_7_Resource_7` == 5)
            #if RESPRI_5 < `@Task_7_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 7) && (`@Task_7_Resource_8` == 5)
            #if RESPRI_5 < `@Task_7_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_7_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 7    
        //Ceiling from Task 8
        #if (`@Task_8_Number_Resources` > 0) && (`@Task_8_Resource_1` == 5)
            #if RESPRI_5 < `@Task_8_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 1) && (`@Task_8_Resource_2` == 5)
            #if RESPRI_5 < `@Task_8_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 2) && (`@Task_8_Resource_3` == 5)
            #if RESPRI_5 < `@Task_8_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 3) && (`@Task_8_Resource_4` == 5)
            #if RESPRI_5 < `@Task_8_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 4) && (`@Task_8_Resource_5` == 5)
            #if RESPRI_5 < `@Task_8_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 5) && (`@Task_8_Resource_6` == 5)
            #if RESPRI_5 < `@Task_8_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 6) && (`@Task_8_Resource_7` == 5)
            #if RESPRI_5 < `@Task_8_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 7) && (`@Task_8_Resource_8` == 5)
            #if RESPRI_5 < `@Task_8_Priority`
                #undef RESPRI_5
                #define RESPRI_5 `@Task_8_Priority`
            #endif
        #endif   
    #endif
    #if `@Number_of_ISR` > 0
        //Ceiling from ISR 1
        #if `@ISR_1_Category` && (`@ISR_1_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_1_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_1_Priority`)
            #define RESPRI_5_ISR `@ISR_1_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 1
        //Ceiling from ISR 2
        #if `@ISR_2_Category` && (`@ISR_2_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_2_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_2_Priority`)
            #define RESPRI_5_ISR `@ISR_2_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 2
        //Ceiling from ISR 3
        #if `@ISR_3_Category` && (`@ISR_3_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_3_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_3_Priority`)
            #define RESPRI_5_ISR `@ISR_3_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 3
        //Ceiling from ISR 4
        #if `@ISR_4_Category` && (`@ISR_4_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_4_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_4_Priority`)
            #define RESPRI_5_ISR `@ISR_4_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 4
        //Ceiling from ISR 5
        #if `@ISR_5_Category` && (`@ISR_5_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_5_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_5_Priority`)
            #define RESPRI_5_ISR `@ISR_5_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 5
        //Ceiling from ISR 6
        #if `@ISR_6_Category` && (`@ISR_6_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_6_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_6_Priority`)
            #define RESPRI_5_ISR `@ISR_6_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 6
        //Ceiling from ISR 7
        #if `@ISR_7_Category` && (`@ISR_7_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_7_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_7_Priority`)
            #define RESPRI_5_ISR `@ISR_7_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 7
        //Ceiling from ISR 8
        #if `@ISR_8_Category` && (`@ISR_8_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_8_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_8_Priority`)
            #define RESPRI_5_ISR `@ISR_8_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 8
        //Ceiling from ISR 9
        #if `@ISR_9_Category` && (`@ISR_9_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_9_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_9_Priority`)
            #define RESPRI_5_ISR `@ISR_9_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 9
        //Ceiling from ISR 10
        #if `@ISR_10_Category` && (`@ISR_10_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_10_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_10_Priority`)
            #define RESPRI_5_ISR `@ISR_10_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 10
        //Ceiling from ISR 11
        #if `@ISR_11_Category` && (`@ISR_11_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_11_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_11_Priority`)
            #define RESPRI_5_ISR `@ISR_11_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 11
        //Ceiling from ISR 12
        #if `@ISR_12_Category` && (`@ISR_12_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_12_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_12_Priority`)
            #define RESPRI_5_ISR `@ISR_12_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 12
        //Ceiling from ISR 13
        #if `@ISR_13_Category` && (`@ISR_13_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_13_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_13_Priority`)
            #define RESPRI_5_ISR `@ISR_13_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 13
        //Ceiling from ISR 14
        #if `@ISR_14_Category` && (`@ISR_14_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_14_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_14_Priority`)
            #define RESPRI_5_ISR `@ISR_14_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 14
        //Ceiling from ISR 15
        #if `@ISR_15_Category` && (`@ISR_15_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_15_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_15_Priority`)
            #define RESPRI_5_ISR `@ISR_15_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 15
        //Ceiling from ISR 16
        #if `@ISR_16_Category` && (`@ISR_16_Resource` == 5)
        #if RESPRI_5 < ((1 << 7) << `@ISR_16_Priority`)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << `@ISR_16_Priority`)
            #define RESPRI_5_ISR `@ISR_16_Priority`
        #endif
        #endif
    #endif
#endif
    
    //Resource Six
    #if `@Number_of_Resources` > 5
    #if `@Number_of_Tasks` > 0
        //Ceiling from Task 1
        #if (`@Task_1_Number_Resources` > 0) && (`@Task_1_Resource_1` == 6)
           #define RESPRI_6 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 1) && (`@Task_1_Resource_2` == 6)
            #define RESPRI_6 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 2) && (`@Task_1_Resource_3` == 6)
            #define RESPRI_6 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 3) && (`@Task_1_Resource_4` == 6)
            #define RESPRI_6 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 4) && (`@Task_1_Resource_5` == 6)
            #define RESPRI_6 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 5) && (`@Task_1_Resource_6` == 6)
            #define RESPRI_6 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 6) && (`@Task_1_Resource_7` == 6)
            #define RESPRI_6 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 7) && (`@Task_1_Resource_8` == 6)
            #define RESPRI_6 `@Task_1_Priority`
        #else
            #define RESPRI_6 0
        #endif
    #endif
    #if `@Number_of_Tasks` > 1    
        //Ceiling from Task 2
        #if (`@Task_2_Number_Resources` > 0) && (`@Task_2_Resource_1` == 6)
            #if RESPRI_6 < `@Task_2_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 1) && (`@Task_2_Resource_2` == 6)
            #if RESPRI_6 < `@Task_2_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 2) && (`@Task_2_Resource_3` == 6)
            #if RESPRI_6 < `@Task_2_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 3) && (`@Task_2_Resource_4` == 6)
            #if RESPRI_6 < `@Task_2_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 4) && (`@Task_2_Resource_5` == 6)
            #if RESPRI_6 < `@Task_2_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 5) && (`@Task_2_Resource_6` == 6)
            #if RESPRI_6 < `@Task_2_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 6) && (`@Task_2_Resource_7` == 6)
            #if RESPRI_6 < `@Task_2_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 7) && (`@Task_2_Resource_8` == 6)
            #if RESPRI_6 < `@Task_2_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_2_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 2    
        //Ceiling from Task 3
        #if (`@Task_3_Number_Resources` > 0) && (`@Task_3_Resource_1` == 6)
            #if RESPRI_6 < `@Task_3_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 1) && (`@Task_3_Resource_2` == 6)
            #if RESPRI_6 < `@Task_3_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 2) && (`@Task_3_Resource_3` == 6)
            #if RESPRI_6 < `@Task_3_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 3) && (`@Task_3_Resource_4` == 6)
            #if RESPRI_6 < `@Task_3_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 4) && (`@Task_3_Resource_5` == 6)
            #if RESPRI_6 < `@Task_3_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 5) && (`@Task_3_Resource_6` == 6)
            #if RESPRI_6 < `@Task_3_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 6) && (`@Task_3_Resource_7` == 6)
            #if RESPRI_6 < `@Task_3_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 7) && (`@Task_3_Resource_8` == 6)
            #if RESPRI_6 < `@Task_3_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_3_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 3    
        //Ceiling from Task 4
        #if (`@Task_4_Number_Resources` > 0) && (`@Task_4_Resource_1` == 6)
            #if RESPRI_6 < `@Task_4_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 1) && (`@Task_4_Resource_2` == 6)
            #if RESPRI_6 < `@Task_4_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 2) && (`@Task_4_Resource_3` == 6)
            #if RESPRI_6 < `@Task_4_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 3) && (`@Task_4_Resource_4` == 6)
            #if RESPRI_6 < `@Task_4_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 4) && (`@Task_4_Resource_5` == 6)
            #if RESPRI_6 < `@Task_4_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 5) && (`@Task_4_Resource_6` == 6)
            #if RESPRI_6 < `@Task_4_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 6) && (`@Task_4_Resource_7` == 6)
            #if RESPRI_6 < `@Task_4_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 7) && (`@Task_4_Resource_8` == 6)
            #if RESPRI_6 < `@Task_4_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_4_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 4    
        //Ceiling from Task 5
        #if (`@Task_5_Number_Resources` > 0) && (`@Task_5_Resource_1` == 6)
            #if RESPRI_6 < `@Task_5_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 1) && (`@Task_5_Resource_2` == 6)
            #if RESPRI_6 < `@Task_5_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 2) && (`@Task_5_Resource_3` == 6)
            #if RESPRI_6 < `@Task_5_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 3) && (`@Task_5_Resource_4` == 6)
            #if RESPRI_6 < `@Task_5_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 4) && (`@Task_5_Resource_5` == 6)
            #if RESPRI_6 < `@Task_5_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 5) && (`@Task_5_Resource_6` == 6)
            #if RESPRI_6 < `@Task_5_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 6) && (`@Task_5_Resource_7` == 6)
            #if RESPRI_6 < `@Task_5_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 7) && (`@Task_5_Resource_8` == 6)
            #if RESPRI_6 < `@Task_5_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_5_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 5    
        //Ceiling from Task 6
        #if (`@Task_6_Number_Resources` > 0) && (`@Task_6_Resource_1` == 6)
            #if RESPRI_6 < `@Task_6_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 1) && (`@Task_6_Resource_2` == 6)
            #if RESPRI_6 < `@Task_6_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 2) && (`@Task_6_Resource_3` == 6)
            #if RESPRI_6 < `@Task_6_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 3) && (`@Task_6_Resource_4` == 6)
            #if RESPRI_6 < `@Task_6_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 4) && (`@Task_6_Resource_5` == 6)
            #if RESPRI_6 < `@Task_6_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 5) && (`@Task_6_Resource_6` == 6)
            #if RESPRI_6 < `@Task_6_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 6) && (`@Task_6_Resource_7` == 6)
            #if RESPRI_6 < `@Task_6_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 7) && (`@Task_6_Resource_8` == 6)
            #if RESPRI_6 < `@Task_6_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_6_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 6    
        //Ceiling from Task 7
        #if (`@Task_7_Number_Resources` > 0) && (`@Task_7_Resource_1` == 6)
            #if RESPRI_6 < `@Task_7_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 1) && (`@Task_7_Resource_2` == 6)
            #if RESPRI_6 < `@Task_7_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 2) && (`@Task_7_Resource_3` == 6)
            #if RESPRI_6 < `@Task_7_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 3) && (`@Task_7_Resource_4` == 6)
            #if RESPRI_6 < `@Task_7_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 4) && (`@Task_7_Resource_5` == 6)
            #if RESPRI_6 < `@Task_7_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 5) && (`@Task_7_Resource_6` == 6)
            #if RESPRI_6 < `@Task_7_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 6) && (`@Task_7_Resource_7` == 6)
            #if RESPRI_6 < `@Task_7_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 7) && (`@Task_7_Resource_8` == 6)
            #if RESPRI_6 < `@Task_7_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_7_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 7    
        //Ceiling from Task 8
        #if (`@Task_8_Number_Resources` > 0) && (`@Task_8_Resource_1` == 6)
            #if RESPRI_6 < `@Task_8_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 1) && (`@Task_8_Resource_2` == 6)
            #if RESPRI_6 < `@Task_8_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 2) && (`@Task_8_Resource_3` == 6)
            #if RESPRI_6 < `@Task_8_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 3) && (`@Task_8_Resource_4` == 6)
            #if RESPRI_6 < `@Task_8_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 4) && (`@Task_8_Resource_5` == 6)
            #if RESPRI_6 < `@Task_8_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 5) && (`@Task_8_Resource_6` == 6)
            #if RESPRI_6 < `@Task_8_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 6) && (`@Task_8_Resource_7` == 6)
            #if RESPRI_6 < `@Task_8_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 7) && (`@Task_8_Resource_8` == 6)
            #if RESPRI_6 < `@Task_8_Priority`
                #undef RESPRI_6
                #define RESPRI_6 `@Task_8_Priority`
            #endif
        #endif   
    #endif
    #if `@Number_of_ISR` > 0
        //Ceiling from ISR 1
        #if `@ISR_1_Category` && (`@ISR_1_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_1_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_1_Priority`)
            #define RESPRI_6_ISR `@ISR_1_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 1
        //Ceiling from ISR 2
        #if `@ISR_2_Category` && (`@ISR_2_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_2_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_2_Priority`)
            #define RESPRI_6_ISR `@ISR_2_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 2
        //Ceiling from ISR 3
        #if `@ISR_3_Category` && (`@ISR_3_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_3_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_3_Priority`)
            #define RESPRI_6_ISR `@ISR_3_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 3
        //Ceiling from ISR 4
        #if `@ISR_4_Category` && (`@ISR_4_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_4_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_4_Priority`)
            #define RESPRI_6_ISR `@ISR_4_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 4
        //Ceiling from ISR 5
        #if `@ISR_5_Category` && (`@ISR_5_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_5_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_5_Priority`)
            #define RESPRI_6_ISR `@ISR_5_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 5
        //Ceiling from ISR 6
        #if `@ISR_6_Category` && (`@ISR_6_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_6_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_6_Priority`)
            #define RESPRI_6_ISR `@ISR_6_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 6
        //Ceiling from ISR 7
        #if `@ISR_7_Category` && (`@ISR_7_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_7_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_7_Priority`)
            #define RESPRI_6_ISR `@ISR_7_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 7
        //Ceiling from ISR 8
        #if `@ISR_8_Category` && (`@ISR_8_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_8_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_8_Priority`)
            #define RESPRI_6_ISR `@ISR_8_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 8
        //Ceiling from ISR 9
        #if `@ISR_9_Category` && (`@ISR_9_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_9_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_9_Priority`)
            #define RESPRI_6_ISR `@ISR_9_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 9
        //Ceiling from ISR 10
        #if `@ISR_10_Category` && (`@ISR_10_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_10_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_10_Priority`)
            #define RESPRI_6_ISR `@ISR_10_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 10
        //Ceiling from ISR 11
        #if `@ISR_11_Category` && (`@ISR_11_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_11_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_11_Priority`)
            #define RESPRI_6_ISR `@ISR_11_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 11
        //Ceiling from ISR 12
        #if `@ISR_12_Category` && (`@ISR_12_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_12_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_12_Priority`)
            #define RESPRI_6_ISR `@ISR_12_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 12
        //Ceiling from ISR 13
        #if `@ISR_13_Category` && (`@ISR_13_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_13_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_13_Priority`)
            #define RESPRI_6_ISR `@ISR_13_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 13
        //Ceiling from ISR 14
        #if `@ISR_14_Category` && (`@ISR_14_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_14_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_14_Priority`)
            #define RESPRI_6_ISR `@ISR_14_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 14
        //Ceiling from ISR 15
        #if `@ISR_15_Category` && (`@ISR_15_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_15_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_15_Priority`)
            #define RESPRI_6_ISR `@ISR_15_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 15
        //Ceiling from ISR 16
        #if `@ISR_16_Category` && (`@ISR_16_Resource` == 6)
        #if RESPRI_6 < ((1 << 7) << `@ISR_16_Priority`)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << `@ISR_16_Priority`)
            #define RESPRI_6_ISR `@ISR_16_Priority`
        #endif
        #endif
    #endif
#endif
    
    //Resource Seven
    #if `@Number_of_Resources` > 6
    #if `@Number_of_Tasks` > 0
        //Ceiling from Task 1
        #if (`@Task_1_Number_Resources` > 0) && (`@Task_1_Resource_1` == 7)
           #define RESPRI_7 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 1) && (`@Task_1_Resource_2` == 7)
            #define RESPRI_7 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 2) && (`@Task_1_Resource_3` == 7)
            #define RESPRI_7 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 3) && (`@Task_1_Resource_4` == 7)
            #define RESPRI_7 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 4) && (`@Task_1_Resource_5` == 7)
            #define RESPRI_7 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 5) && (`@Task_1_Resource_6` == 7)
            #define RESPRI_7 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 6) && (`@Task_1_Resource_7` == 7)
            #define RESPRI_7 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 7) && (`@Task_1_Resource_8` == 7)
            #define RESPRI_7 `@Task_1_Priority`
        #else
            #define RESPRI_7 0
        #endif
    #endif
    #if `@Number_of_Tasks` > 1    
        //Ceiling from Task 2
        #if (`@Task_2_Number_Resources` > 0) && (`@Task_2_Resource_1` == 7)
            #if RESPRI_7 < `@Task_2_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 1) && (`@Task_2_Resource_2` == 7)
            #if RESPRI_7 < `@Task_2_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 2) && (`@Task_2_Resource_3` == 7)
            #if RESPRI_7 < `@Task_2_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 3) && (`@Task_2_Resource_4` == 7)
            #if RESPRI_7 < `@Task_2_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 4) && (`@Task_2_Resource_5` == 7)
            #if RESPRI_7 < `@Task_2_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 5) && (`@Task_2_Resource_6` == 7)
            #if RESPRI_7 < `@Task_2_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 6) && (`@Task_2_Resource_7` == 7)
            #if RESPRI_7 < `@Task_2_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 7) && (`@Task_2_Resource_8` == 7)
            #if RESPRI_7 < `@Task_2_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_2_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 2    
        //Ceiling from Task 3
        #if (`@Task_3_Number_Resources` > 0) && (`@Task_3_Resource_1` == 7)
            #if RESPRI_7 < `@Task_3_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 1) && (`@Task_3_Resource_2` == 7)
            #if RESPRI_7 < `@Task_3_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 2) && (`@Task_3_Resource_3` == 7)
            #if RESPRI_7 < `@Task_3_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 3) && (`@Task_3_Resource_4` == 7)
            #if RESPRI_7 < `@Task_3_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 4) && (`@Task_3_Resource_5` == 7)
            #if RESPRI_7 < `@Task_3_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 5) && (`@Task_3_Resource_6` == 7)
            #if RESPRI_7 < `@Task_3_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 6) && (`@Task_3_Resource_7` == 7)
            #if RESPRI_7 < `@Task_3_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 7) && (`@Task_3_Resource_8` == 7)
            #if RESPRI_7 < `@Task_3_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_3_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 3    
        //Ceiling from Task 4
        #if (`@Task_4_Number_Resources` > 0) && (`@Task_4_Resource_1` == 7)
            #if RESPRI_7 < `@Task_4_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 1) && (`@Task_4_Resource_2` == 7)
            #if RESPRI_7 < `@Task_4_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 2) && (`@Task_4_Resource_3` == 7)
            #if RESPRI_7 < `@Task_4_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 3) && (`@Task_4_Resource_4` == 7)
            #if RESPRI_7 < `@Task_4_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 4) && (`@Task_4_Resource_5` == 7)
            #if RESPRI_7 < `@Task_4_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 5) && (`@Task_4_Resource_6` == 7)
            #if RESPRI_7 < `@Task_4_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 6) && (`@Task_4_Resource_7` == 7)
            #if RESPRI_7 < `@Task_4_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 7) && (`@Task_4_Resource_8` == 7)
            #if RESPRI_7 < `@Task_4_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_4_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 4    
        //Ceiling from Task 5
        #if (`@Task_5_Number_Resources` > 0) && (`@Task_5_Resource_1` == 7)
            #if RESPRI_7 < `@Task_5_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 1) && (`@Task_5_Resource_2` == 7)
            #if RESPRI_7 < `@Task_5_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 2) && (`@Task_5_Resource_3` == 7)
            #if RESPRI_7 < `@Task_5_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 3) && (`@Task_5_Resource_4` == 7)
            #if RESPRI_7 < `@Task_5_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 4) && (`@Task_5_Resource_5` == 7)
            #if RESPRI_7 < `@Task_5_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 5) && (`@Task_5_Resource_6` == 7)
            #if RESPRI_7 < `@Task_5_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 6) && (`@Task_5_Resource_7` == 7)
            #if RESPRI_7 < `@Task_5_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 7) && (`@Task_5_Resource_8` == 7)
            #if RESPRI_7 < `@Task_5_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_5_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 5    
        //Ceiling from Task 6
        #if (`@Task_6_Number_Resources` > 0) && (`@Task_6_Resource_1` == 7)
            #if RESPRI_7 < `@Task_6_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 1) && (`@Task_6_Resource_2` == 7)
            #if RESPRI_7 < `@Task_6_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 2) && (`@Task_6_Resource_3` == 7)
            #if RESPRI_7 < `@Task_6_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 3) && (`@Task_6_Resource_4` == 7)
            #if RESPRI_7 < `@Task_6_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 4) && (`@Task_6_Resource_5` == 7)
            #if RESPRI_7 < `@Task_6_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 5) && (`@Task_6_Resource_6` == 7)
            #if RESPRI_7 < `@Task_6_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 6) && (`@Task_6_Resource_7` == 7)
            #if RESPRI_7 < `@Task_6_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 7) && (`@Task_6_Resource_8` == 7)
            #if RESPRI_7 < `@Task_6_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_6_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 6    
        //Ceiling from Task 7
        #if (`@Task_7_Number_Resources` > 0) && (`@Task_7_Resource_1` == 7)
            #if RESPRI_7 < `@Task_7_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 1) && (`@Task_7_Resource_2` == 7)
            #if RESPRI_7 < `@Task_7_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 2) && (`@Task_7_Resource_3` == 7)
            #if RESPRI_7 < `@Task_7_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 3) && (`@Task_7_Resource_4` == 7)
            #if RESPRI_7 < `@Task_7_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 4) && (`@Task_7_Resource_5` == 7)
            #if RESPRI_7 < `@Task_7_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 5) && (`@Task_7_Resource_6` == 7)
            #if RESPRI_7 < `@Task_7_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 6) && (`@Task_7_Resource_7` == 7)
            #if RESPRI_7 < `@Task_7_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 7) && (`@Task_7_Resource_8` == 7)
            #if RESPRI_7 < `@Task_7_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_7_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 7    
        //Ceiling from Task 8
        #if (`@Task_8_Number_Resources` > 0) && (`@Task_8_Resource_1` == 7)
            #if RESPRI_7 < `@Task_8_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 1) && (`@Task_8_Resource_2` == 7)
            #if RESPRI_7 < `@Task_8_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 2) && (`@Task_8_Resource_3` == 7)
            #if RESPRI_7 < `@Task_8_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 3) && (`@Task_8_Resource_4` == 7)
            #if RESPRI_7 < `@Task_8_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 4) && (`@Task_8_Resource_5` == 7)
            #if RESPRI_7 < `@Task_8_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 5) && (`@Task_8_Resource_6` == 7)
            #if RESPRI_7 < `@Task_8_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 6) && (`@Task_8_Resource_7` == 7)
            #if RESPRI_7 < `@Task_8_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 7) && (`@Task_8_Resource_8` == 7)
            #if RESPRI_7 < `@Task_8_Priority`
                #undef RESPRI_7
                #define RESPRI_7 `@Task_8_Priority`
            #endif
        #endif   
    #endif
    #if `@Number_of_ISR` > 0
        //Ceiling from ISR 1
        #if `@ISR_1_Category` && (`@ISR_1_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_1_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_1_Priority`)
            #define RESPRI_7_ISR `@ISR_1_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 1
        //Ceiling from ISR 2
        #if `@ISR_2_Category` && (`@ISR_2_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_2_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_2_Priority`)
            #define RESPRI_7_ISR `@ISR_2_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 2
        //Ceiling from ISR 3
        #if `@ISR_3_Category` && (`@ISR_3_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_3_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_3_Priority`)
            #define RESPRI_7_ISR `@ISR_3_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 3
        //Ceiling from ISR 4
        #if `@ISR_4_Category` && (`@ISR_4_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_4_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_4_Priority`)
            #define RESPRI_7_ISR `@ISR_4_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 4
        //Ceiling from ISR 5
        #if `@ISR_5_Category` && (`@ISR_5_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_5_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_5_Priority`)
            #define RESPRI_7_ISR `@ISR_5_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 5
        //Ceiling from ISR 6
        #if `@ISR_6_Category` && (`@ISR_6_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_6_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_6_Priority`)
            #define RESPRI_7_ISR `@ISR_6_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 6
        //Ceiling from ISR 7
        #if `@ISR_7_Category` && (`@ISR_7_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_7_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_7_Priority`)
            #define RESPRI_7_ISR `@ISR_7_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 7
        //Ceiling from ISR 8
        #if `@ISR_8_Category` && (`@ISR_8_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_8_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_8_Priority`)
            #define RESPRI_7_ISR `@ISR_8_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 8
        //Ceiling from ISR 9
        #if `@ISR_9_Category` && (`@ISR_9_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_9_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_9_Priority`)
            #define RESPRI_7_ISR `@ISR_9_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 9
        //Ceiling from ISR 10
        #if `@ISR_10_Category` && (`@ISR_10_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_10_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_10_Priority`)
            #define RESPRI_7_ISR `@ISR_10_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 10
        //Ceiling from ISR 11
        #if `@ISR_11_Category` && (`@ISR_11_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_11_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_11_Priority`)
            #define RESPRI_7_ISR `@ISR_11_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 11
        //Ceiling from ISR 12
        #if `@ISR_12_Category` && (`@ISR_12_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_12_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_12_Priority`)
            #define RESPRI_7_ISR `@ISR_12_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 12
        //Ceiling from ISR 13
        #if `@ISR_13_Category` && (`@ISR_13_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_13_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_13_Priority`)
            #define RESPRI_7_ISR `@ISR_13_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 13
        //Ceiling from ISR 14
        #if `@ISR_14_Category` && (`@ISR_14_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_14_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_14_Priority`)
            #define RESPRI_7_ISR `@ISR_14_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 14
        //Ceiling from ISR 15
        #if `@ISR_15_Category` && (`@ISR_15_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_15_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_15_Priority`)
            #define RESPRI_7_ISR `@ISR_15_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 15
        //Ceiling from ISR 16
        #if `@ISR_16_Category` && (`@ISR_16_Resource` == 7)
        #if RESPRI_7 < ((1 << 7) << `@ISR_16_Priority`)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << `@ISR_16_Priority`)
            #define RESPRI_7_ISR `@ISR_16_Priority`
        #endif
        #endif
    #endif
#endif
    
    //Resource Eight
    #if `@Number_of_Resources` > 7
    #if `@Number_of_Tasks` > 0
        //Ceiling from Task 1
        #if (`@Task_1_Number_Resources` > 0) && (`@Task_1_Resource_1` == 8)
           #define RESPRI_8 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 1) && (`@Task_1_Resource_2` == 8)
            #define RESPRI_8 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 2) && (`@Task_1_Resource_3` == 8)
            #define RESPRI_8 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 3) && (`@Task_1_Resource_4` == 8)
            #define RESPRI_8 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 4) && (`@Task_1_Resource_5` == 8)
            #define RESPRI_8 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 5) && (`@Task_1_Resource_6` == 8)
            #define RESPRI_8 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 6) && (`@Task_1_Resource_7` == 8)
            #define RESPRI_8 `@Task_1_Priority`
        #elif (`@Task_1_Number_Resources` > 7) && (`@Task_1_Resource_8` == 8)
            #define RESPRI_8 `@Task_1_Priority`
        #else
            #define RESPRI_8 0
        #endif
    #endif
    #if `@Number_of_Tasks` > 1    
        //Ceiling from Task 2
        #if (`@Task_2_Number_Resources` > 0) && (`@Task_2_Resource_1` == 8)
            #if RESPRI_8 < `@Task_2_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 1) && (`@Task_2_Resource_2` == 8)
            #if RESPRI_8 < `@Task_2_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 2) && (`@Task_2_Resource_3` == 8)
            #if RESPRI_8 < `@Task_2_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 3) && (`@Task_2_Resource_4` == 8)
            #if RESPRI_8 < `@Task_2_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 4) && (`@Task_2_Resource_5` == 8)
            #if RESPRI_8 < `@Task_2_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 5) && (`@Task_2_Resource_6` == 8)
            #if RESPRI_8 < `@Task_2_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 6) && (`@Task_2_Resource_7` == 8)
            #if RESPRI_8 < `@Task_2_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_2_Priority`
            #endif
        #elif (`@Task_2_Number_Resources` > 7) && (`@Task_2_Resource_8` == 8)
            #if RESPRI_8 < `@Task_2_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_2_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 2    
        //Ceiling from Task 3
        #if (`@Task_3_Number_Resources` > 0) && (`@Task_3_Resource_1` == 8)
            #if RESPRI_8 < `@Task_3_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 1) && (`@Task_3_Resource_2` == 8)
            #if RESPRI_8 < `@Task_3_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 2) && (`@Task_3_Resource_3` == 8)
            #if RESPRI_8 < `@Task_3_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 3) && (`@Task_3_Resource_4` == 8)
            #if RESPRI_8 < `@Task_3_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 4) && (`@Task_3_Resource_5` == 8)
            #if RESPRI_8 < `@Task_3_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 5) && (`@Task_3_Resource_6` == 8)
            #if RESPRI_8 < `@Task_3_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 6) && (`@Task_3_Resource_7` == 8)
            #if RESPRI_8 < `@Task_3_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_3_Priority`
            #endif
        #elif (`@Task_3_Number_Resources` > 7) && (`@Task_3_Resource_8` == 8)
            #if RESPRI_8 < `@Task_3_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_3_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 3    
        //Ceiling from Task 4
        #if (`@Task_4_Number_Resources` > 0) && (`@Task_4_Resource_1` == 8)
            #if RESPRI_8 < `@Task_4_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 1) && (`@Task_4_Resource_2` == 8)
            #if RESPRI_8 < `@Task_4_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 2) && (`@Task_4_Resource_3` == 8)
            #if RESPRI_8 < `@Task_4_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 3) && (`@Task_4_Resource_4` == 8)
            #if RESPRI_8 < `@Task_4_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 4) && (`@Task_4_Resource_5` == 8)
            #if RESPRI_8 < `@Task_4_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 5) && (`@Task_4_Resource_6` == 8)
            #if RESPRI_8 < `@Task_4_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 6) && (`@Task_4_Resource_7` == 8)
            #if RESPRI_8 < `@Task_4_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_4_Priority`
            #endif
        #elif (`@Task_4_Number_Resources` > 7) && (`@Task_4_Resource_8` == 8)
            #if RESPRI_8 < `@Task_4_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_4_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 4    
        //Ceiling from Task 5
        #if (`@Task_5_Number_Resources` > 0) && (`@Task_5_Resource_1` == 8)
            #if RESPRI_8 < `@Task_5_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 1) && (`@Task_5_Resource_2` == 8)
            #if RESPRI_8 < `@Task_5_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 2) && (`@Task_5_Resource_3` == 8)
            #if RESPRI_8 < `@Task_5_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 3) && (`@Task_5_Resource_4` == 8)
            #if RESPRI_8 < `@Task_5_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 4) && (`@Task_5_Resource_5` == 8)
            #if RESPRI_8 < `@Task_5_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 5) && (`@Task_5_Resource_6` == 8)
            #if RESPRI_8 < `@Task_5_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 6) && (`@Task_5_Resource_7` == 8)
            #if RESPRI_8 < `@Task_5_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_5_Priority`
            #endif
        #elif (`@Task_5_Number_Resources` > 7) && (`@Task_5_Resource_8` == 8)
            #if RESPRI_8 < `@Task_5_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_5_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 5    
        //Ceiling from Task 6
        #if (`@Task_6_Number_Resources` > 0) && (`@Task_6_Resource_1` == 8)
            #if RESPRI_8 < `@Task_6_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 1) && (`@Task_6_Resource_2` == 8)
            #if RESPRI_8 < `@Task_6_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 2) && (`@Task_6_Resource_3` == 8)
            #if RESPRI_8 < `@Task_6_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 3) && (`@Task_6_Resource_4` == 8)
            #if RESPRI_8 < `@Task_6_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 4) && (`@Task_6_Resource_5` == 8)
            #if RESPRI_8 < `@Task_6_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 5) && (`@Task_6_Resource_6` == 8)
            #if RESPRI_8 < `@Task_6_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 6) && (`@Task_6_Resource_7` == 8)
            #if RESPRI_8 < `@Task_6_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_6_Priority`
            #endif
        #elif (`@Task_6_Number_Resources` > 7) && (`@Task_6_Resource_8` == 8)
            #if RESPRI_8 < `@Task_6_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_6_Priority`
            #endif
        #endif        
    #endif
    #if `@Number_of_Tasks` > 6    
        //Ceiling from Task 7
        #if (`@Task_7_Number_Resources` > 0) && (`@Task_7_Resource_1` == 8)
            #if RESPRI_8 < `@Task_7_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 1) && (`@Task_7_Resource_2` == 8)
            #if RESPRI_8 < `@Task_7_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 2) && (`@Task_7_Resource_3` == 8)
            #if RESPRI_8 < `@Task_7_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 3) && (`@Task_7_Resource_4` == 8)
            #if RESPRI_8 < `@Task_7_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 4) && (`@Task_7_Resource_5` == 8)
            #if RESPRI_8 < `@Task_7_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 5) && (`@Task_7_Resource_6` == 8)
            #if RESPRI_8 < `@Task_7_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 6) && (`@Task_7_Resource_7` == 8)
            #if RESPRI_8 < `@Task_7_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_7_Priority`
            #endif
        #elif (`@Task_7_Number_Resources` > 7) && (`@Task_7_Resource_8` == 8)
            #if RESPRI_8 < `@Task_7_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_7_Priority`
            #endif
        #endif
    #endif
    #if `@Number_of_Tasks` > 7    
        //Ceiling from Task 8
        #if (`@Task_8_Number_Resources` > 0) && (`@Task_8_Resource_1` == 8)
            #if RESPRI_8 < `@Task_8_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 1) && (`@Task_8_Resource_2` == 8)
            #if RESPRI_8 < `@Task_8_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 2) && (`@Task_8_Resource_3` == 8)
            #if RESPRI_8 < `@Task_8_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 3) && (`@Task_8_Resource_4` == 8)
            #if RESPRI_8 < `@Task_8_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 4) && (`@Task_8_Resource_5` == 8)
            #if RESPRI_8 < `@Task_8_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 5) && (`@Task_8_Resource_6` == 8)
            #if RESPRI_8 < `@Task_8_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 6) && (`@Task_8_Resource_7` == 8)
            #if RESPRI_8 < `@Task_8_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_8_Priority`
            #endif
        #elif (`@Task_8_Number_Resources` > 7) && (`@Task_8_Resource_8` == 8)
            #if RESPRI_8 < `@Task_8_Priority`
                #undef RESPRI_8
                #define RESPRI_8 `@Task_8_Priority`
            #endif
        #endif   
    #endif
    #if `@Number_of_ISR` > 0
        //Ceiling from ISR 1
        #if `@ISR_1_Category` && (`@ISR_1_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_1_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_1_Priority`)
            #define RESPRI_8_ISR `@ISR_1_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 1
        //Ceiling from ISR 2
        #if `@ISR_2_Category` && (`@ISR_2_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_2_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_2_Priority`)
            #define RESPRI_8_ISR `@ISR_2_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 2
        //Ceiling from ISR 3
        #if `@ISR_3_Category` && (`@ISR_3_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_3_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_3_Priority`)
            #define RESPRI_8_ISR `@ISR_3_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 3
        //Ceiling from ISR 4
        #if `@ISR_4_Category` && (`@ISR_4_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_4_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_4_Priority`)
            #define RESPRI_8_ISR `@ISR_4_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 4
        //Ceiling from ISR 5
        #if `@ISR_5_Category` && (`@ISR_5_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_5_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_5_Priority`)
            #define RESPRI_8_ISR `@ISR_5_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 5
        //Ceiling from ISR 6
        #if `@ISR_6_Category` && (`@ISR_6_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_6_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_6_Priority`)
            #define RESPRI_8_ISR `@ISR_6_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 6
        //Ceiling from ISR 7
        #if `@ISR_7_Category` && (`@ISR_7_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_7_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_7_Priority`)
            #define RESPRI_8_ISR `@ISR_7_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 7
        //Ceiling from ISR 8
        #if `@ISR_8_Category` && (`@ISR_8_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_8_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_8_Priority`)
            #define RESPRI_8_ISR `@ISR_8_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 8
        //Ceiling from ISR 9
        #if `@ISR_9_Category` && (`@ISR_9_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_9_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_9_Priority`)
            #define RESPRI_8_ISR `@ISR_9_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 9
        //Ceiling from ISR 10
        #if `@ISR_10_Category` && (`@ISR_10_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_10_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_10_Priority`)
            #define RESPRI_8_ISR `@ISR_10_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 10
        //Ceiling from ISR 11
        #if `@ISR_11_Category` && (`@ISR_11_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_11_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_11_Priority`)
            #define RESPRI_8_ISR `@ISR_11_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 11
        //Ceiling from ISR 12
        #if `@ISR_12_Category` && (`@ISR_12_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_12_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_12_Priority`)
            #define RESPRI_8_ISR `@ISR_12_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 12
        //Ceiling from ISR 13
        #if `@ISR_13_Category` && (`@ISR_13_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_13_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_13_Priority`)
            #define RESPRI_8_ISR `@ISR_13_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 13
        //Ceiling from ISR 14
        #if `@ISR_14_Category` && (`@ISR_14_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_14_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_14_Priority`)
            #define RESPRI_8_ISR `@ISR_14_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 14
        //Ceiling from ISR 15
        #if `@ISR_15_Category` && (`@ISR_15_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_15_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_15_Priority`)
            #define RESPRI_8_ISR `@ISR_15_Priority`
        #endif
        #endif
    #endif
    #if `@Number_of_ISR` > 15
        //Ceiling from ISR 16
        #if `@ISR_16_Category` && (`@ISR_16_Resource` == 8)
        #if RESPRI_8 < ((1 << 7) << `@ISR_16_Priority`)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << `@ISR_16_Priority`)
            #define RESPRI_8_ISR `@ISR_16_Priority`
        #endif
        #endif
    #endif
    #endif
 #endif
/* [] END OF FILE */
