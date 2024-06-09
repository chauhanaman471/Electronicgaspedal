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

    #if (`@Number_of_ISR` > 0) && `@ISR_1_Category`
    #if `@ISR_1_Resource`
    #define ISR_1_RES   1
    #else
    #define ISR_1_RES   0
    #endif
    #define ISR_1_CAT   1
    #else
    #define ISR_1_RES   0
    #define ISR_1_CAT   0
    #endif

    #if (`@Number_of_ISR` > 1) && `@ISR_2_Category`
    #if `@ISR_2_Resource`
    #define ISR_2_RES   1
    #else
    #define ISR_2_RES   0
    #endif
    #define ISR_2_CAT   1
    #else
    #define ISR_2_RES   0
    #define ISR_2_CAT   0
    #endif

    #if (`@Number_of_ISR` > 2) && `@ISR_3_Category`
    #if `@ISR_3_Resource`
    #define ISR_3_RES   1
    #else
    #define ISR_3_RES   0
    #endif
    #define ISR_3_CAT   1
    #else
    #define ISR_3_RES   0
    #define ISR_3_CAT   0
    #endif
    
    #if (`@Number_of_ISR` > 3) && `@ISR_4_Category`
    #if `@ISR_4_Resource`
    #define ISR_4_RES   1
    #else
    #define ISR_4_RES   0
    #endif
    #define ISR_4_CAT   1
    #else
    #define ISR_4_RES   0
    #define ISR_4_CAT   0
    #endif

    #if (`@Number_of_ISR` > 4) && `@ISR_5_Category`
    #if `@ISR_5_Resource`
    #define ISR_5_RES   1
    #else
    #define ISR_5_RES   0
    #endif
    #define ISR_5_CAT   1
    #else
    #define ISR_5_RES   0
    #define ISR_5_CAT   0
    #endif

    #if (`@Number_of_ISR` > 5) && `@ISR_6_Category`
    #if `@ISR_6_Resource`
    #define ISR_6_RES   1
    #else
    #define ISR_6_RES   0
    #endif
    #define ISR_6_CAT   1
    #else
    #define ISR_6_RES   0
    #define ISR_6_CAT   0
    #endif

    #if (`@Number_of_ISR` > 6) && `@ISR_7_Category`
    #if `@ISR_7_Resource`
    #define ISR_7_RES   1
    #else
    #define ISR_7_RES   0
    #endif
    #define ISR_7_CAT   1
    #else
    #define ISR_7_RES   0
    #define ISR_7_CAT   0
    #endif

    #if (`@Number_of_ISR` > 7) && `@ISR_8_Category`
    #if `@ISR_8_Resource`
    #define ISR_8_RES   1
    #else
    #define ISR_8_RES   0
    #endif
    #define ISR_8_CAT   1
    #else
    #define ISR_8_RES   0
    #define ISR_8_CAT   0
    #endif

    #if (`@Number_of_ISR` > 8) && `@ISR_9_Category`
    #if `@ISR_9_Resource`
    #define ISR_9_RES   1
    #else
    #define ISR_9_RES   0
    #endif
    #define ISR_9_CAT   1
    #else
    #define ISR_9_RES   0
    #define ISR_9_CAT   0
    #endif

    #if (`@Number_of_ISR` > 9) && `@ISR_10_Category`
    #if `@ISR_10_Resource`
    #define ISR_10_RES   1
    #else
    #define ISR_10_RES   0
    #endif
    #define ISR_10_CAT   1
    #else
    #define ISR_10_RES   0
    #define ISR_10_CAT   0
    #endif

    #if (`@Number_of_ISR` > 10) && `@ISR_11_Category`
    #if `@ISR_11_Resource`
    #define ISR_11_RES   1
    #else
    #define ISR_11_RES   0
    #endif
    #define ISR_11_CAT   1
    #else
    #define ISR_11_RES   0
    #define ISR_11_CAT   0
    #endif

    #if (`@Number_of_ISR` > 11) && `@ISR_12_Category`
    #if `@ISR_12_Resource`
    #define ISR_12_RES   1
    #else
    #define ISR_12_RES   0
    #endif
    #define ISR_12_CAT   1
    #else
    #define ISR_12_RES   0
    #define ISR_12_CAT   0
    #endif

    #if (`@Number_of_ISR` > 12) && `@ISR_13_Category`
    #if `@ISR_13_Resource`
    #define ISR_13_RES   1
    #else
    #define ISR_13_RES   0
    #endif
    #define ISR_13_CAT   1
    #else
    #define ISR_13_RES   0
    #define ISR_13_CAT   0
    #endif

    #if (`@Number_of_ISR` > 13) && `@ISR_14_Category`
    #if `@ISR_14_Resource`
    #define ISR_14_RES   1
    #else
    #define ISR_14_RES   0
    #endif
    #define ISR_14_CAT   1
    #else
    #define ISR_14_RES   0
    #define ISR_14_CAT   0
    #endif

    #if (`@Number_of_ISR` > 14) && `@ISR_15_Category`
    #if `@ISR_15_Resource`
    #define ISR_15_RES   1
    #else
    #define ISR_15_RES   0
    #endif
    #define ISR_15_CAT   1
    #else
    #define ISR_15_RES   0
    #define ISR_15_CAT   0
    #endif
    
    #if (`@Number_of_ISR` > 15) && `@ISR_16_Category`
    #if `@ISR_16_Resource`
    #define ISR_16_RES   1
    #else
    #define ISR_16_RES   0
    #endif
    #define ISR_16_CAT   1
    #else
    #define ISR_16_RES   0
    #define ISR_16_CAT   0
    #endif

    #define Number_ISR2 (ISR_1_CAT + ISR_2_CAT + ISR_3_CAT + ISR_4_CAT + ISR_5_CAT + ISR_6_CAT + ISR_7_CAT + ISR_8_CAT + ISR_9_CAT + ISR_10_CAT + ISR_11_CAT + ISR_12_CAT + ISR_13_CAT + ISR_14_CAT + ISR_15_CAT + ISR_16_CAT)
    #define Number_ISR2_Resources (ISR_1_RES + ISR_2_RES + ISR_3_RES + ISR_4_RES + ISR_5_RES + ISR_6_RES + ISR_7_RES + ISR_8_RES + ISR_9_RES + ISR_10_RES + ISR_11_RES + ISR_12_RES + ISR_13_RES + ISR_14_RES + ISR_15_RES + ISR_16_RES)

/* [] END OF FILE */
