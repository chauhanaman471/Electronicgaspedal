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
    #if 0 > 0
    #if 5 > 0
        //Ceiling from Task 1
        #if (0 > 0) && (0 == 1)
           #define RESPRI_1 1
        #elif (0 > 1) && (0 == 1)
            #define RESPRI_1 1
        #elif (0 > 2) && (0 == 1)
            #define RESPRI_1 1
        #elif (0 > 3) && (0 == 1)
            #define RESPRI_1 1
        #elif (0 > 4) && (0 == 1)
            #define RESPRI_1 1
        #elif (0 > 5) && (0 == 1)
            #define RESPRI_1 1
        #elif (0 > 6) && (0 == 1)
            #define RESPRI_1 1
        #elif (0 > 7) && (0 == 1)
            #define RESPRI_1 1
        #else
            #define RESPRI_1 0
        #endif
    #endif
    #if 5 > 1    
        //Ceiling from Task 2
        #if (0 > 0) && (0 == 1)
            #if RESPRI_1 < 1
                #undef RESPRI_1
                #define RESPRI_1 1
            #endif
        #elif (0 > 1) && (0 == 1)
            #if RESPRI_1 < 1
                #undef RESPRI_1
                #define RESPRI_1 1
            #endif
        #elif (0 > 2) && (0 == 1)
            #if RESPRI_1 < 1
                #undef RESPRI_1
                #define RESPRI_1 1
            #endif
        #elif (0 > 3) && (0 == 1)
            #if RESPRI_1 < 1
                #undef RESPRI_1
                #define RESPRI_1 1
            #endif
        #elif (0 > 4) && (0 == 1)
            #if RESPRI_1 < 1
                #undef RESPRI_1
                #define RESPRI_1 1
            #endif
        #elif (0 > 5) && (0 == 1)
            #if RESPRI_1 < 1
                #undef RESPRI_1
                #define RESPRI_1 1
            #endif
        #elif (0 > 6) && (0 == 1)
            #if RESPRI_1 < 1
                #undef RESPRI_1
                #define RESPRI_1 1
            #endif
        #elif (0 > 7) && (0 == 1)
            #if RESPRI_1 < 1
                #undef RESPRI_1
                #define RESPRI_1 1
            #endif
        #endif
    #endif
    #if 5 > 2    
        //Ceiling from Task 3
        #if (0 > 0) && (0 == 1)
            #if RESPRI_1 < 16
                #undef RESPRI_1
                #define RESPRI_1 16
            #endif
        #elif (0 > 1) && (0 == 1)
            #if RESPRI_1 < 16
                #undef RESPRI_1
                #define RESPRI_1 16
            #endif
        #elif (0 > 2) && (0 == 1)
            #if RESPRI_1 < 16
                #undef RESPRI_1
                #define RESPRI_1 16
            #endif
        #elif (0 > 3) && (0 == 1)
            #if RESPRI_1 < 16
                #undef RESPRI_1
                #define RESPRI_1 16
            #endif
        #elif (0 > 4) && (0 == 1)
            #if RESPRI_1 < 16
                #undef RESPRI_1
                #define RESPRI_1 16
            #endif
        #elif (0 > 5) && (0 == 1)
            #if RESPRI_1 < 16
                #undef RESPRI_1
                #define RESPRI_1 16
            #endif
        #elif (0 > 6) && (0 == 1)
            #if RESPRI_1 < 16
                #undef RESPRI_1
                #define RESPRI_1 16
            #endif
        #elif (0 > 7) && (0 == 1)
            #if RESPRI_1 < 16
                #undef RESPRI_1
                #define RESPRI_1 16
            #endif
        #endif
    #endif
    #if 5 > 3    
        //Ceiling from Task 4
        #if (0 > 0) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 1) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 2) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 3) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 4) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 5) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 6) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 7) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #endif
    #endif
    #if 5 > 4    
        //Ceiling from Task 5
        #if (0 > 0) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 1) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 2) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 3) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 4) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 5) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 6) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #elif (0 > 7) && (0 == 1)
            #if RESPRI_1 < 4
                #undef RESPRI_1
                #define RESPRI_1 4
            #endif
        #endif        
    #endif
    #if 5 > 5    
        //Ceiling from Task 6
        #if (0 > 0) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 1) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 2) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 3) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 4) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 5) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 6) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 7) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #endif        
    #endif
    #if 5 > 6    
        //Ceiling from Task 7
        #if (0 > 0) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 1) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 2) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 3) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 4) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 5) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 6) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 7) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #endif
    #endif
    #if 5 > 7    
        //Ceiling from Task 8
        #if (0 > 0) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 1) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 2) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 3) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 4) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 5) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 6) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #elif (0 > 7) && (0 == 1)
            #if RESPRI_1 < 0
                #undef RESPRI_1
                #define RESPRI_1 0
            #endif
        #endif   
    #endif
    #if 0 > 0
        //Ceiling from ISR 1
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 1
        //Ceiling from ISR 2
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 2
        //Ceiling from ISR 3
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 3
        //Ceiling from ISR 4
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 4
        //Ceiling from ISR 5
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 5
        //Ceiling from ISR 6
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 6
        //Ceiling from ISR 7
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 7
        //Ceiling from ISR 8
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 8
        //Ceiling from ISR 9
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 9
        //Ceiling from ISR 10
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 10
        //Ceiling from ISR 11
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 11
        //Ceiling from ISR 12
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 12
        //Ceiling from ISR 13
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 13
        //Ceiling from ISR 14
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 14
        //Ceiling from ISR 15
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 15
        //Ceiling from ISR 16
        #if 0 && (0 == 1)
        #if RESPRI_1 < ((1 << 7) << 0)
            #undef RESPRI_1
            #undef RESPRI_1_ISR
            #define RESPRI_1    ((1 << 7) << 0)
            #define RESPRI_1_ISR 0
        #endif
        #endif
    #endif
#endif

    //Resource Two
    #if 0 > 1
    #if 5 > 0
        //Ceiling from Task 1
        #if (0 > 0) && (0 == 2)
           #define RESPRI_2 1
        #elif (0 > 1) && (0 == 2)
            #define RESPRI_2 1
        #elif (0 > 2) && (0 == 2)
            #define RESPRI_2 1
        #elif (0 > 3) && (0 == 2)
            #define RESPRI_2 1
        #elif (0 > 4) && (0 == 2)
            #define RESPRI_2 1
        #elif (0 > 5) && (0 == 2)
            #define RESPRI_2 1
        #elif (0 > 6) && (0 == 2)
            #define RESPRI_2 1
        #elif (0 > 7) && (0 == 2)
            #define RESPRI_2 1
        #else
            #define RESPRI_2 0
        #endif
    #endif
    #if 5 > 1    
        //Ceiling from Task 2
        #if (0 > 0) && (0 == 2)
            #if RESPRI_2 < 1
                #undef RESPRI_2
                #define RESPRI_2 1
            #endif
        #elif (0 > 1) && (0 == 2)
            #if RESPRI_2 < 1
                #undef RESPRI_2
                #define RESPRI_2 1
            #endif
        #elif (0 > 2) && (0 == 2)
            #if RESPRI_2 < 1
                #undef RESPRI_2
                #define RESPRI_2 1
            #endif
        #elif (0 > 3) && (0 == 2)
            #if RESPRI_2 < 1
                #undef RESPRI_2
                #define RESPRI_2 1
            #endif
        #elif (0 > 4) && (0 == 2)
            #if RESPRI_2 < 1
                #undef RESPRI_2
                #define RESPRI_2 1
            #endif
        #elif (0 > 5) && (0 == 2)
            #if RESPRI_2 < 1
                #undef RESPRI_2
                #define RESPRI_2 1
            #endif
        #elif (0 > 6) && (0 == 2)
            #if RESPRI_2 < 1
                #undef RESPRI_2
                #define RESPRI_2 1
            #endif
        #elif (0 > 7) && (0 == 2)
            #if RESPRI_2 < 1
                #undef RESPRI_2
                #define RESPRI_2 1
            #endif
        #endif
    #endif
    #if 5 > 2    
        //Ceiling from Task 3
        #if (0 > 0) && (0 == 2)
            #if RESPRI_2 < 16
                #undef RESPRI_2
                #define RESPRI_2 16
            #endif
        #elif (0 > 1) && (0 == 2)
            #if RESPRI_2 < 16
                #undef RESPRI_2
                #define RESPRI_2 16
            #endif
        #elif (0 > 2) && (0 == 2)
            #if RESPRI_2 < 16
                #undef RESPRI_2
                #define RESPRI_2 16
            #endif
        #elif (0 > 3) && (0 == 2)
            #if RESPRI_2 < 16
                #undef RESPRI_2
                #define RESPRI_2 16
            #endif
        #elif (0 > 4) && (0 == 2)
            #if RESPRI_2 < 16
                #undef RESPRI_2
                #define RESPRI_2 16
            #endif
        #elif (0 > 5) && (0 == 2)
            #if RESPRI_2 < 16
                #undef RESPRI_2
                #define RESPRI_2 16
            #endif
        #elif (0 > 6) && (0 == 2)
            #if RESPRI_2 < 16
                #undef RESPRI_2
                #define RESPRI_2 16
            #endif
        #elif (0 > 7) && (0 == 2)
            #if RESPRI_2 < 16
                #undef RESPRI_2
                #define RESPRI_2 16
            #endif
        #endif
    #endif
    #if 5 > 3    
        //Ceiling from Task 4
        #if (0 > 0) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 1) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 2) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 3) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 4) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 5) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 6) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 7) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #endif
    #endif
    #if 5 > 4    
        //Ceiling from Task 5
        #if (0 > 0) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 1) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 2) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 3) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 4) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 5) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 6) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #elif (0 > 7) && (0 == 2)
            #if RESPRI_2 < 4
                #undef RESPRI_2
                #define RESPRI_2 4
            #endif
        #endif        
    #endif
    #if 5 > 5    
        //Ceiling from Task 6
        #if (0 > 0) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 1) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 2) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 3) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 4) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 5) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 6) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 7) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #endif        
    #endif
    #if 5 > 6    
        //Ceiling from Task 7
        #if (0 > 0) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 1) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 2) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 3) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 4) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 5) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 6) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 7) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #endif
    #endif
    #if 5 > 7    
        //Ceiling from Task 8
        #if (0 > 0) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 1) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 2) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 3) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 4) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 5) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 6) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #elif (0 > 7) && (0 == 2)
            #if RESPRI_2 < 0
                #undef RESPRI_2
                #define RESPRI_2 0
            #endif
        #endif   
    #endif    
    #if 0 > 0
        //Ceiling from ISR 1
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 1
        //Ceiling from ISR 2
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 2
        //Ceiling from ISR 3
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 3
        //Ceiling from ISR 4
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 4
        //Ceiling from ISR 5
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 5
        //Ceiling from ISR 6
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 6
        //Ceiling from ISR 7
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 7
        //Ceiling from ISR 8
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 8
        //Ceiling from ISR 9
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 9
        //Ceiling from ISR 10
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 10
        //Ceiling from ISR 11
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 11
        //Ceiling from ISR 12
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 12
        //Ceiling from ISR 13
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 13
        //Ceiling from ISR 14
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 14
        //Ceiling from ISR 15
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 15
        //Ceiling from ISR 16
        #if 0 && (0 == 2)
        #if RESPRI_2 < ((1 << 7) << 0)
            #undef RESPRI_2
            #undef RESPRI_2_ISR
            #define RESPRI_2    ((1 << 7) << 0)
            #define RESPRI_2_ISR 0
        #endif
        #endif
    #endif
#endif

    //Resource Three
    #if 0 > 2
    #if 5 > 0
        //Ceiling from Task 1
        #if (0 > 0) && (0 == 3)
           #define RESPRI_3 1
        #elif (0 > 1) && (0 == 3)
            #define RESPRI_3 1
        #elif (0 > 2) && (0 == 3)
            #define RESPRI_3 1
        #elif (0 > 3) && (0 == 3)
            #define RESPRI_3 1
        #elif (0 > 4) && (0 == 3)
            #define RESPRI_3 1
        #elif (0 > 5) && (0 == 3)
            #define RESPRI_3 1
        #elif (0 > 6) && (0 == 3)
            #define RESPRI_3 1
        #elif (0 > 7) && (0 == 3)
            #define RESPRI_3 1
        #else
            #define RESPRI_3 0
        #endif
    #endif
    #if 5 > 1    
        //Ceiling from Task 2
        #if (0 > 0) && (0 == 3)
            #if RESPRI_3 < 1
                #undef RESPRI_3
                #define RESPRI_3 1
            #endif
        #elif (0 > 1) && (0 == 3)
            #if RESPRI_3 < 1
                #undef RESPRI_3
                #define RESPRI_3 1
            #endif
        #elif (0 > 2) && (0 == 3)
            #if RESPRI_3 < 1
                #undef RESPRI_3
                #define RESPRI_3 1
            #endif
        #elif (0 > 3) && (0 == 3)
            #if RESPRI_3 < 1
                #undef RESPRI_3
                #define RESPRI_3 1
            #endif
        #elif (0 > 4) && (0 == 3)
            #if RESPRI_3 < 1
                #undef RESPRI_3
                #define RESPRI_3 1
            #endif
        #elif (0 > 5) && (0 == 3)
            #if RESPRI_3 < 1
                #undef RESPRI_3
                #define RESPRI_3 1
            #endif
        #elif (0 > 6) && (0 == 3)
            #if RESPRI_3 < 1
                #undef RESPRI_3
                #define RESPRI_3 1
            #endif
        #elif (0 > 7) && (0 == 3)
            #if RESPRI_3 < 1
                #undef RESPRI_3
                #define RESPRI_3 1
            #endif
        #endif
    #endif
    #if 5 > 2    
        //Ceiling from Task 3
        #if (0 > 0) && (0 == 3)
            #if RESPRI_3 < 16
                #undef RESPRI_3
                #define RESPRI_3 16
            #endif
        #elif (0 > 1) && (0 == 3)
            #if RESPRI_3 < 16
                #undef RESPRI_3
                #define RESPRI_3 16
            #endif
        #elif (0 > 2) && (0 == 3)
            #if RESPRI_3 < 16
                #undef RESPRI_3
                #define RESPRI_3 16
            #endif
        #elif (0 > 3) && (0 == 3)
            #if RESPRI_3 < 16
                #undef RESPRI_3
                #define RESPRI_3 16
            #endif
        #elif (0 > 4) && (0 == 3)
            #if RESPRI_3 < 16
                #undef RESPRI_3
                #define RESPRI_3 16
            #endif
        #elif (0 > 5) && (0 == 3)
            #if RESPRI_3 < 16
                #undef RESPRI_3
                #define RESPRI_3 16
            #endif
        #elif (0 > 6) && (0 == 3)
            #if RESPRI_3 < 16
                #undef RESPRI_3
                #define RESPRI_3 16
            #endif
        #elif (0 > 7) && (0 == 3)
            #if RESPRI_3 < 16
                #undef RESPRI_3
                #define RESPRI_3 16
            #endif
        #endif
    #endif
    #if 5 > 3    
        //Ceiling from Task 4
        #if (0 > 0) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 1) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 2) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 3) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 4) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 5) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 6) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 7) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #endif
    #endif
    #if 5 > 4    
        //Ceiling from Task 5
        #if (0 > 0) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 1) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 2) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 3) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 4) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 5) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 6) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #elif (0 > 7) && (0 == 3)
            #if RESPRI_3 < 4
                #undef RESPRI_3
                #define RESPRI_3 4
            #endif
        #endif        
    #endif
    #if 5 > 5    
        //Ceiling from Task 6
        #if (0 > 0) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 1) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 2) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 3) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 4) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 5) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 6) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 7) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #endif        
    #endif
    #if 5 > 6    
        //Ceiling from Task 7
        #if (0 > 0) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 1) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 2) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 3) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 4) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 5) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 6) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 7) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #endif
    #endif
    #if 5 > 7    
        //Ceiling from Task 8
        #if (0 > 0) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 1) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 2) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 3) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 4) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 5) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 6) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #elif (0 > 7) && (0 == 3)
            #if RESPRI_3 < 0
                #undef RESPRI_3
                #define RESPRI_3 0
            #endif
        #endif   
    #endif
    #if 0 > 0
        //Ceiling from ISR 1
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 1
        //Ceiling from ISR 2
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 2
        //Ceiling from ISR 3
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 3
        //Ceiling from ISR 4
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 4
        //Ceiling from ISR 5
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 5
        //Ceiling from ISR 6
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 6
        //Ceiling from ISR 7
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 7
        //Ceiling from ISR 8
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 8
        //Ceiling from ISR 9
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 9
        //Ceiling from ISR 10
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 10
        //Ceiling from ISR 11
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 11
        //Ceiling from ISR 12
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 12
        //Ceiling from ISR 13
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 13
        //Ceiling from ISR 14
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 14
        //Ceiling from ISR 15
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 15
        //Ceiling from ISR 16
        #if 0 && (0 == 3)
        #if RESPRI_3 < ((1 << 7) << 0)
            #undef RESPRI_3
            #undef RESPRI_3_ISR
            #define RESPRI_3    ((1 << 7) << 0)
            #define RESPRI_3_ISR 0
        #endif
        #endif
    #endif
#endif

    //Resource Four
    #if 0 > 3
    #if 5 > 0
        //Ceiling from Task 1
        #if (0 > 0) && (0 == 4)
           #define RESPRI_4 1
        #elif (0 > 1) && (0 == 4)
            #define RESPRI_4 1
        #elif (0 > 2) && (0 == 4)
            #define RESPRI_4 1
        #elif (0 > 3) && (0 == 4)
            #define RESPRI_4 1
        #elif (0 > 4) && (0 == 4)
            #define RESPRI_4 1
        #elif (0 > 5) && (0 == 4)
            #define RESPRI_4 1
        #elif (0 > 6) && (0 == 4)
            #define RESPRI_4 1
        #elif (0 > 7) && (0 == 4)
            #define RESPRI_4 1
        #else
            #define RESPRI_4 0
        #endif
    #endif
    #if 5 > 1    
        //Ceiling from Task 2
        #if (0 > 0) && (0 == 4)
            #if RESPRI_4 < 1
                #undef RESPRI_4
                #define RESPRI_4 1
            #endif
        #elif (0 > 1) && (0 == 4)
            #if RESPRI_4 < 1
                #undef RESPRI_4
                #define RESPRI_4 1
            #endif
        #elif (0 > 2) && (0 == 4)
            #if RESPRI_4 < 1
                #undef RESPRI_4
                #define RESPRI_4 1
            #endif
        #elif (0 > 3) && (0 == 4)
            #if RESPRI_4 < 1
                #undef RESPRI_4
                #define RESPRI_4 1
            #endif
        #elif (0 > 4) && (0 == 4)
            #if RESPRI_4 < 1
                #undef RESPRI_4
                #define RESPRI_4 1
            #endif
        #elif (0 > 5) && (0 == 4)
            #if RESPRI_4 < 1
                #undef RESPRI_4
                #define RESPRI_4 1
            #endif
        #elif (0 > 6) && (0 == 4)
            #if RESPRI_4 < 1
                #undef RESPRI_4
                #define RESPRI_4 1
            #endif
        #elif (0 > 7) && (0 == 4)
            #if RESPRI_4 < 1
                #undef RESPRI_4
                #define RESPRI_4 1
            #endif
        #endif
    #endif
    #if 5 > 2    
        //Ceiling from Task 3
        #if (0 > 0) && (0 == 4)
            #if RESPRI_4 < 16
                #undef RESPRI_4
                #define RESPRI_4 16
            #endif
        #elif (0 > 1) && (0 == 4)
            #if RESPRI_4 < 16
                #undef RESPRI_4
                #define RESPRI_4 16
            #endif
        #elif (0 > 2) && (0 == 4)
            #if RESPRI_4 < 16
                #undef RESPRI_4
                #define RESPRI_4 16
            #endif
        #elif (0 > 3) && (0 == 4)
            #if RESPRI_4 < 16
                #undef RESPRI_4
                #define RESPRI_4 16
            #endif
        #elif (0 > 4) && (0 == 4)
            #if RESPRI_4 < 16
                #undef RESPRI_4
                #define RESPRI_4 16
            #endif
        #elif (0 > 5) && (0 == 4)
            #if RESPRI_4 < 16
                #undef RESPRI_4
                #define RESPRI_4 16
            #endif
        #elif (0 > 6) && (0 == 4)
            #if RESPRI_4 < 16
                #undef RESPRI_4
                #define RESPRI_4 16
            #endif
        #elif (0 > 7) && (0 == 4)
            #if RESPRI_4 < 16
                #undef RESPRI_4
                #define RESPRI_4 16
            #endif
        #endif
    #endif
    #if 5 > 3    
        //Ceiling from Task 4
        #if (0 > 0) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 1) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 2) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 3) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 4) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 5) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 6) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 7) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #endif
    #endif
    #if 5 > 4    
        //Ceiling from Task 5
        #if (0 > 0) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 1) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 2) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 3) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 4) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 5) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 6) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #elif (0 > 7) && (0 == 4)
            #if RESPRI_4 < 4
                #undef RESPRI_4
                #define RESPRI_4 4
            #endif
        #endif        
    #endif
    #if 5 > 5    
        //Ceiling from Task 6
        #if (0 > 0) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 1) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 2) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 3) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 4) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 5) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 6) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 7) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #endif        
    #endif
    #if 5 > 6    
        //Ceiling from Task 7
        #if (0 > 0) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 1) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 2) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 3) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 4) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 5) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 6) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 7) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #endif
    #endif
    #if 5 > 7    
        //Ceiling from Task 8
        #if (0 > 0) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 1) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 2) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 3) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 4) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 5) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 6) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #elif (0 > 7) && (0 == 4)
            #if RESPRI_4 < 0
                #undef RESPRI_4
                #define RESPRI_4 0
            #endif
        #endif   
    #endif
    #if 0 > 0
        //Ceiling from ISR 1
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 1
        //Ceiling from ISR 2
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 2
        //Ceiling from ISR 3
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 3
        //Ceiling from ISR 4
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 4
        //Ceiling from ISR 5
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 5
        //Ceiling from ISR 6
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 6
        //Ceiling from ISR 7
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 7
        //Ceiling from ISR 8
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 8
        //Ceiling from ISR 9
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 9
        //Ceiling from ISR 10
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 10
        //Ceiling from ISR 11
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 11
        //Ceiling from ISR 12
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 12
        //Ceiling from ISR 13
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 13
        //Ceiling from ISR 14
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 14
        //Ceiling from ISR 15
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 15
        //Ceiling from ISR 16
        #if 0 && (0 == 4)
        #if RESPRI_4 < ((1 << 7) << 0)
            #undef RESPRI_4
            #undef RESPRI_4_ISR
            #define RESPRI_4    ((1 << 7) << 0)
            #define RESPRI_4_ISR 0
        #endif
        #endif
    #endif
#endif
    
    //Resource Five
    #if 0 > 4
    #if 5 > 0
        //Ceiling from Task 1
        #if (0 > 0) && (0 == 5)
           #define RESPRI_5 1
        #elif (0 > 1) && (0 == 5)
            #define RESPRI_5 1
        #elif (0 > 2) && (0 == 5)
            #define RESPRI_5 1
        #elif (0 > 3) && (0 == 5)
            #define RESPRI_5 1
        #elif (0 > 4) && (0 == 5)
            #define RESPRI_5 1
        #elif (0 > 5) && (0 == 5)
            #define RESPRI_5 1
        #elif (0 > 6) && (0 == 5)
            #define RESPRI_5 1
        #elif (0 > 7) && (0 == 5)
            #define RESPRI_5 1
        #else
            #define RESPRI_5 0
        #endif
    #endif
    #if 5 > 1    
        //Ceiling from Task 2
        #if (0 > 0) && (0 == 5)
            #if RESPRI_5 < 1
                #undef RESPRI_5
                #define RESPRI_5 1
            #endif
        #elif (0 > 1) && (0 == 5)
            #if RESPRI_5 < 1
                #undef RESPRI_5
                #define RESPRI_5 1
            #endif
        #elif (0 > 2) && (0 == 5)
            #if RESPRI_5 < 1
                #undef RESPRI_5
                #define RESPRI_5 1
            #endif
        #elif (0 > 3) && (0 == 5)
            #if RESPRI_5 < 1
                #undef RESPRI_5
                #define RESPRI_5 1
            #endif
        #elif (0 > 4) && (0 == 5)
            #if RESPRI_5 < 1
                #undef RESPRI_5
                #define RESPRI_5 1
            #endif
        #elif (0 > 5) && (0 == 5)
            #if RESPRI_5 < 1
                #undef RESPRI_5
                #define RESPRI_5 1
            #endif
        #elif (0 > 6) && (0 == 5)
            #if RESPRI_5 < 1
                #undef RESPRI_5
                #define RESPRI_5 1
            #endif
        #elif (0 > 7) && (0 == 5)
            #if RESPRI_5 < 1
                #undef RESPRI_5
                #define RESPRI_5 1
            #endif
        #endif
    #endif
    #if 5 > 2    
        //Ceiling from Task 3
        #if (0 > 0) && (0 == 5)
            #if RESPRI_5 < 16
                #undef RESPRI_5
                #define RESPRI_5 16
            #endif
        #elif (0 > 1) && (0 == 5)
            #if RESPRI_5 < 16
                #undef RESPRI_5
                #define RESPRI_5 16
            #endif
        #elif (0 > 2) && (0 == 5)
            #if RESPRI_5 < 16
                #undef RESPRI_5
                #define RESPRI_5 16
            #endif
        #elif (0 > 3) && (0 == 5)
            #if RESPRI_5 < 16
                #undef RESPRI_5
                #define RESPRI_5 16
            #endif
        #elif (0 > 4) && (0 == 5)
            #if RESPRI_5 < 16
                #undef RESPRI_5
                #define RESPRI_5 16
            #endif
        #elif (0 > 5) && (0 == 5)
            #if RESPRI_5 < 16
                #undef RESPRI_5
                #define RESPRI_5 16
            #endif
        #elif (0 > 6) && (0 == 5)
            #if RESPRI_5 < 16
                #undef RESPRI_5
                #define RESPRI_5 16
            #endif
        #elif (0 > 7) && (0 == 5)
            #if RESPRI_5 < 16
                #undef RESPRI_5
                #define RESPRI_5 16
            #endif
        #endif
    #endif
    #if 5 > 3    
        //Ceiling from Task 4
        #if (0 > 0) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 1) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 2) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 3) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 4) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 5) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 6) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 7) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #endif
    #endif
    #if 5 > 4    
        //Ceiling from Task 5
        #if (0 > 0) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 1) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 2) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 3) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 4) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 5) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 6) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #elif (0 > 7) && (0 == 5)
            #if RESPRI_5 < 4
                #undef RESPRI_5
                #define RESPRI_5 4
            #endif
        #endif        
    #endif
    #if 5 > 5    
        //Ceiling from Task 6
        #if (0 > 0) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 1) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 2) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 3) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 4) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 5) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 6) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 7) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #endif        
    #endif
    #if 5 > 6    
        //Ceiling from Task 7
        #if (0 > 0) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 1) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 2) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 3) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 4) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 5) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 6) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 7) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #endif
    #endif
    #if 5 > 7    
        //Ceiling from Task 8
        #if (0 > 0) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 1) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 2) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 3) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 4) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 5) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 6) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #elif (0 > 7) && (0 == 5)
            #if RESPRI_5 < 0
                #undef RESPRI_5
                #define RESPRI_5 0
            #endif
        #endif   
    #endif
    #if 0 > 0
        //Ceiling from ISR 1
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 1
        //Ceiling from ISR 2
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 2
        //Ceiling from ISR 3
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 3
        //Ceiling from ISR 4
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 4
        //Ceiling from ISR 5
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 5
        //Ceiling from ISR 6
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 6
        //Ceiling from ISR 7
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 7
        //Ceiling from ISR 8
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 8
        //Ceiling from ISR 9
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 9
        //Ceiling from ISR 10
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 10
        //Ceiling from ISR 11
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 11
        //Ceiling from ISR 12
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 12
        //Ceiling from ISR 13
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 13
        //Ceiling from ISR 14
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 14
        //Ceiling from ISR 15
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 15
        //Ceiling from ISR 16
        #if 0 && (0 == 5)
        #if RESPRI_5 < ((1 << 7) << 0)
            #undef RESPRI_5
            #undef RESPRI_5_ISR
            #define RESPRI_5    ((1 << 7) << 0)
            #define RESPRI_5_ISR 0
        #endif
        #endif
    #endif
#endif
    
    //Resource Six
    #if 0 > 5
    #if 5 > 0
        //Ceiling from Task 1
        #if (0 > 0) && (0 == 6)
           #define RESPRI_6 1
        #elif (0 > 1) && (0 == 6)
            #define RESPRI_6 1
        #elif (0 > 2) && (0 == 6)
            #define RESPRI_6 1
        #elif (0 > 3) && (0 == 6)
            #define RESPRI_6 1
        #elif (0 > 4) && (0 == 6)
            #define RESPRI_6 1
        #elif (0 > 5) && (0 == 6)
            #define RESPRI_6 1
        #elif (0 > 6) && (0 == 6)
            #define RESPRI_6 1
        #elif (0 > 7) && (0 == 6)
            #define RESPRI_6 1
        #else
            #define RESPRI_6 0
        #endif
    #endif
    #if 5 > 1    
        //Ceiling from Task 2
        #if (0 > 0) && (0 == 6)
            #if RESPRI_6 < 1
                #undef RESPRI_6
                #define RESPRI_6 1
            #endif
        #elif (0 > 1) && (0 == 6)
            #if RESPRI_6 < 1
                #undef RESPRI_6
                #define RESPRI_6 1
            #endif
        #elif (0 > 2) && (0 == 6)
            #if RESPRI_6 < 1
                #undef RESPRI_6
                #define RESPRI_6 1
            #endif
        #elif (0 > 3) && (0 == 6)
            #if RESPRI_6 < 1
                #undef RESPRI_6
                #define RESPRI_6 1
            #endif
        #elif (0 > 4) && (0 == 6)
            #if RESPRI_6 < 1
                #undef RESPRI_6
                #define RESPRI_6 1
            #endif
        #elif (0 > 5) && (0 == 6)
            #if RESPRI_6 < 1
                #undef RESPRI_6
                #define RESPRI_6 1
            #endif
        #elif (0 > 6) && (0 == 6)
            #if RESPRI_6 < 1
                #undef RESPRI_6
                #define RESPRI_6 1
            #endif
        #elif (0 > 7) && (0 == 6)
            #if RESPRI_6 < 1
                #undef RESPRI_6
                #define RESPRI_6 1
            #endif
        #endif
    #endif
    #if 5 > 2    
        //Ceiling from Task 3
        #if (0 > 0) && (0 == 6)
            #if RESPRI_6 < 16
                #undef RESPRI_6
                #define RESPRI_6 16
            #endif
        #elif (0 > 1) && (0 == 6)
            #if RESPRI_6 < 16
                #undef RESPRI_6
                #define RESPRI_6 16
            #endif
        #elif (0 > 2) && (0 == 6)
            #if RESPRI_6 < 16
                #undef RESPRI_6
                #define RESPRI_6 16
            #endif
        #elif (0 > 3) && (0 == 6)
            #if RESPRI_6 < 16
                #undef RESPRI_6
                #define RESPRI_6 16
            #endif
        #elif (0 > 4) && (0 == 6)
            #if RESPRI_6 < 16
                #undef RESPRI_6
                #define RESPRI_6 16
            #endif
        #elif (0 > 5) && (0 == 6)
            #if RESPRI_6 < 16
                #undef RESPRI_6
                #define RESPRI_6 16
            #endif
        #elif (0 > 6) && (0 == 6)
            #if RESPRI_6 < 16
                #undef RESPRI_6
                #define RESPRI_6 16
            #endif
        #elif (0 > 7) && (0 == 6)
            #if RESPRI_6 < 16
                #undef RESPRI_6
                #define RESPRI_6 16
            #endif
        #endif
    #endif
    #if 5 > 3    
        //Ceiling from Task 4
        #if (0 > 0) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 1) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 2) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 3) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 4) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 5) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 6) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 7) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #endif
    #endif
    #if 5 > 4    
        //Ceiling from Task 5
        #if (0 > 0) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 1) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 2) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 3) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 4) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 5) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 6) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #elif (0 > 7) && (0 == 6)
            #if RESPRI_6 < 4
                #undef RESPRI_6
                #define RESPRI_6 4
            #endif
        #endif        
    #endif
    #if 5 > 5    
        //Ceiling from Task 6
        #if (0 > 0) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 1) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 2) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 3) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 4) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 5) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 6) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 7) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #endif        
    #endif
    #if 5 > 6    
        //Ceiling from Task 7
        #if (0 > 0) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 1) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 2) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 3) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 4) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 5) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 6) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 7) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #endif
    #endif
    #if 5 > 7    
        //Ceiling from Task 8
        #if (0 > 0) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 1) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 2) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 3) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 4) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 5) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 6) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #elif (0 > 7) && (0 == 6)
            #if RESPRI_6 < 0
                #undef RESPRI_6
                #define RESPRI_6 0
            #endif
        #endif   
    #endif
    #if 0 > 0
        //Ceiling from ISR 1
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 1
        //Ceiling from ISR 2
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 2
        //Ceiling from ISR 3
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 3
        //Ceiling from ISR 4
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 4
        //Ceiling from ISR 5
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 5
        //Ceiling from ISR 6
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 6
        //Ceiling from ISR 7
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 7
        //Ceiling from ISR 8
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 8
        //Ceiling from ISR 9
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 9
        //Ceiling from ISR 10
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 10
        //Ceiling from ISR 11
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 11
        //Ceiling from ISR 12
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 12
        //Ceiling from ISR 13
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 13
        //Ceiling from ISR 14
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 14
        //Ceiling from ISR 15
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 15
        //Ceiling from ISR 16
        #if 0 && (0 == 6)
        #if RESPRI_6 < ((1 << 7) << 0)
            #undef RESPRI_6
            #undef RESPRI_6_ISR
            #define RESPRI_6    ((1 << 7) << 0)
            #define RESPRI_6_ISR 0
        #endif
        #endif
    #endif
#endif
    
    //Resource Seven
    #if 0 > 6
    #if 5 > 0
        //Ceiling from Task 1
        #if (0 > 0) && (0 == 7)
           #define RESPRI_7 1
        #elif (0 > 1) && (0 == 7)
            #define RESPRI_7 1
        #elif (0 > 2) && (0 == 7)
            #define RESPRI_7 1
        #elif (0 > 3) && (0 == 7)
            #define RESPRI_7 1
        #elif (0 > 4) && (0 == 7)
            #define RESPRI_7 1
        #elif (0 > 5) && (0 == 7)
            #define RESPRI_7 1
        #elif (0 > 6) && (0 == 7)
            #define RESPRI_7 1
        #elif (0 > 7) && (0 == 7)
            #define RESPRI_7 1
        #else
            #define RESPRI_7 0
        #endif
    #endif
    #if 5 > 1    
        //Ceiling from Task 2
        #if (0 > 0) && (0 == 7)
            #if RESPRI_7 < 1
                #undef RESPRI_7
                #define RESPRI_7 1
            #endif
        #elif (0 > 1) && (0 == 7)
            #if RESPRI_7 < 1
                #undef RESPRI_7
                #define RESPRI_7 1
            #endif
        #elif (0 > 2) && (0 == 7)
            #if RESPRI_7 < 1
                #undef RESPRI_7
                #define RESPRI_7 1
            #endif
        #elif (0 > 3) && (0 == 7)
            #if RESPRI_7 < 1
                #undef RESPRI_7
                #define RESPRI_7 1
            #endif
        #elif (0 > 4) && (0 == 7)
            #if RESPRI_7 < 1
                #undef RESPRI_7
                #define RESPRI_7 1
            #endif
        #elif (0 > 5) && (0 == 7)
            #if RESPRI_7 < 1
                #undef RESPRI_7
                #define RESPRI_7 1
            #endif
        #elif (0 > 6) && (0 == 7)
            #if RESPRI_7 < 1
                #undef RESPRI_7
                #define RESPRI_7 1
            #endif
        #elif (0 > 7) && (0 == 7)
            #if RESPRI_7 < 1
                #undef RESPRI_7
                #define RESPRI_7 1
            #endif
        #endif
    #endif
    #if 5 > 2    
        //Ceiling from Task 3
        #if (0 > 0) && (0 == 7)
            #if RESPRI_7 < 16
                #undef RESPRI_7
                #define RESPRI_7 16
            #endif
        #elif (0 > 1) && (0 == 7)
            #if RESPRI_7 < 16
                #undef RESPRI_7
                #define RESPRI_7 16
            #endif
        #elif (0 > 2) && (0 == 7)
            #if RESPRI_7 < 16
                #undef RESPRI_7
                #define RESPRI_7 16
            #endif
        #elif (0 > 3) && (0 == 7)
            #if RESPRI_7 < 16
                #undef RESPRI_7
                #define RESPRI_7 16
            #endif
        #elif (0 > 4) && (0 == 7)
            #if RESPRI_7 < 16
                #undef RESPRI_7
                #define RESPRI_7 16
            #endif
        #elif (0 > 5) && (0 == 7)
            #if RESPRI_7 < 16
                #undef RESPRI_7
                #define RESPRI_7 16
            #endif
        #elif (0 > 6) && (0 == 7)
            #if RESPRI_7 < 16
                #undef RESPRI_7
                #define RESPRI_7 16
            #endif
        #elif (0 > 7) && (0 == 7)
            #if RESPRI_7 < 16
                #undef RESPRI_7
                #define RESPRI_7 16
            #endif
        #endif
    #endif
    #if 5 > 3    
        //Ceiling from Task 4
        #if (0 > 0) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 1) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 2) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 3) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 4) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 5) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 6) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 7) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #endif
    #endif
    #if 5 > 4    
        //Ceiling from Task 5
        #if (0 > 0) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 1) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 2) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 3) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 4) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 5) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 6) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #elif (0 > 7) && (0 == 7)
            #if RESPRI_7 < 4
                #undef RESPRI_7
                #define RESPRI_7 4
            #endif
        #endif        
    #endif
    #if 5 > 5    
        //Ceiling from Task 6
        #if (0 > 0) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 1) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 2) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 3) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 4) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 5) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 6) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 7) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #endif        
    #endif
    #if 5 > 6    
        //Ceiling from Task 7
        #if (0 > 0) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 1) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 2) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 3) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 4) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 5) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 6) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 7) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #endif
    #endif
    #if 5 > 7    
        //Ceiling from Task 8
        #if (0 > 0) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 1) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 2) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 3) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 4) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 5) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 6) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #elif (0 > 7) && (0 == 7)
            #if RESPRI_7 < 0
                #undef RESPRI_7
                #define RESPRI_7 0
            #endif
        #endif   
    #endif
    #if 0 > 0
        //Ceiling from ISR 1
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 1
        //Ceiling from ISR 2
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 2
        //Ceiling from ISR 3
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 3
        //Ceiling from ISR 4
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 4
        //Ceiling from ISR 5
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 5
        //Ceiling from ISR 6
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 6
        //Ceiling from ISR 7
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 7
        //Ceiling from ISR 8
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 8
        //Ceiling from ISR 9
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 9
        //Ceiling from ISR 10
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 10
        //Ceiling from ISR 11
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 11
        //Ceiling from ISR 12
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 12
        //Ceiling from ISR 13
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 13
        //Ceiling from ISR 14
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 14
        //Ceiling from ISR 15
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 15
        //Ceiling from ISR 16
        #if 0 && (0 == 7)
        #if RESPRI_7 < ((1 << 7) << 0)
            #undef RESPRI_7
            #undef RESPRI_7_ISR
            #define RESPRI_7    ((1 << 7) << 0)
            #define RESPRI_7_ISR 0
        #endif
        #endif
    #endif
#endif
    
    //Resource Eight
    #if 0 > 7
    #if 5 > 0
        //Ceiling from Task 1
        #if (0 > 0) && (0 == 8)
           #define RESPRI_8 1
        #elif (0 > 1) && (0 == 8)
            #define RESPRI_8 1
        #elif (0 > 2) && (0 == 8)
            #define RESPRI_8 1
        #elif (0 > 3) && (0 == 8)
            #define RESPRI_8 1
        #elif (0 > 4) && (0 == 8)
            #define RESPRI_8 1
        #elif (0 > 5) && (0 == 8)
            #define RESPRI_8 1
        #elif (0 > 6) && (0 == 8)
            #define RESPRI_8 1
        #elif (0 > 7) && (0 == 8)
            #define RESPRI_8 1
        #else
            #define RESPRI_8 0
        #endif
    #endif
    #if 5 > 1    
        //Ceiling from Task 2
        #if (0 > 0) && (0 == 8)
            #if RESPRI_8 < 1
                #undef RESPRI_8
                #define RESPRI_8 1
            #endif
        #elif (0 > 1) && (0 == 8)
            #if RESPRI_8 < 1
                #undef RESPRI_8
                #define RESPRI_8 1
            #endif
        #elif (0 > 2) && (0 == 8)
            #if RESPRI_8 < 1
                #undef RESPRI_8
                #define RESPRI_8 1
            #endif
        #elif (0 > 3) && (0 == 8)
            #if RESPRI_8 < 1
                #undef RESPRI_8
                #define RESPRI_8 1
            #endif
        #elif (0 > 4) && (0 == 8)
            #if RESPRI_8 < 1
                #undef RESPRI_8
                #define RESPRI_8 1
            #endif
        #elif (0 > 5) && (0 == 8)
            #if RESPRI_8 < 1
                #undef RESPRI_8
                #define RESPRI_8 1
            #endif
        #elif (0 > 6) && (0 == 8)
            #if RESPRI_8 < 1
                #undef RESPRI_8
                #define RESPRI_8 1
            #endif
        #elif (0 > 7) && (0 == 8)
            #if RESPRI_8 < 1
                #undef RESPRI_8
                #define RESPRI_8 1
            #endif
        #endif
    #endif
    #if 5 > 2    
        //Ceiling from Task 3
        #if (0 > 0) && (0 == 8)
            #if RESPRI_8 < 16
                #undef RESPRI_8
                #define RESPRI_8 16
            #endif
        #elif (0 > 1) && (0 == 8)
            #if RESPRI_8 < 16
                #undef RESPRI_8
                #define RESPRI_8 16
            #endif
        #elif (0 > 2) && (0 == 8)
            #if RESPRI_8 < 16
                #undef RESPRI_8
                #define RESPRI_8 16
            #endif
        #elif (0 > 3) && (0 == 8)
            #if RESPRI_8 < 16
                #undef RESPRI_8
                #define RESPRI_8 16
            #endif
        #elif (0 > 4) && (0 == 8)
            #if RESPRI_8 < 16
                #undef RESPRI_8
                #define RESPRI_8 16
            #endif
        #elif (0 > 5) && (0 == 8)
            #if RESPRI_8 < 16
                #undef RESPRI_8
                #define RESPRI_8 16
            #endif
        #elif (0 > 6) && (0 == 8)
            #if RESPRI_8 < 16
                #undef RESPRI_8
                #define RESPRI_8 16
            #endif
        #elif (0 > 7) && (0 == 8)
            #if RESPRI_8 < 16
                #undef RESPRI_8
                #define RESPRI_8 16
            #endif
        #endif
    #endif
    #if 5 > 3    
        //Ceiling from Task 4
        #if (0 > 0) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 1) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 2) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 3) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 4) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 5) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 6) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 7) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #endif
    #endif
    #if 5 > 4    
        //Ceiling from Task 5
        #if (0 > 0) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 1) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 2) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 3) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 4) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 5) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 6) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #elif (0 > 7) && (0 == 8)
            #if RESPRI_8 < 4
                #undef RESPRI_8
                #define RESPRI_8 4
            #endif
        #endif        
    #endif
    #if 5 > 5    
        //Ceiling from Task 6
        #if (0 > 0) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 1) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 2) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 3) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 4) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 5) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 6) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 7) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #endif        
    #endif
    #if 5 > 6    
        //Ceiling from Task 7
        #if (0 > 0) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 1) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 2) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 3) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 4) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 5) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 6) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 7) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #endif
    #endif
    #if 5 > 7    
        //Ceiling from Task 8
        #if (0 > 0) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 1) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 2) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 3) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 4) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 5) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 6) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #elif (0 > 7) && (0 == 8)
            #if RESPRI_8 < 0
                #undef RESPRI_8
                #define RESPRI_8 0
            #endif
        #endif   
    #endif
    #if 0 > 0
        //Ceiling from ISR 1
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 1
        //Ceiling from ISR 2
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 2
        //Ceiling from ISR 3
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 3
        //Ceiling from ISR 4
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 4
        //Ceiling from ISR 5
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 5
        //Ceiling from ISR 6
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 6
        //Ceiling from ISR 7
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 7
        //Ceiling from ISR 8
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 8
        //Ceiling from ISR 9
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 9
        //Ceiling from ISR 10
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 10
        //Ceiling from ISR 11
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 11
        //Ceiling from ISR 12
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 12
        //Ceiling from ISR 13
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 13
        //Ceiling from ISR 14
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 14
        //Ceiling from ISR 15
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #if 0 > 15
        //Ceiling from ISR 16
        #if 0 && (0 == 8)
        #if RESPRI_8 < ((1 << 7) << 0)
            #undef RESPRI_8
            #undef RESPRI_8_ISR
            #define RESPRI_8    ((1 << 7) << 0)
            #define RESPRI_8_ISR 0
        #endif
        #endif
    #endif
    #endif
 #endif
/* [] END OF FILE */
