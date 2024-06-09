/**
* \file joystick.c
* \author P. Fromm
* \date 29.8.17
*
* \brief Joystick driver
*
* \copyright Copyright ©2016
* Department of electrical engineering and information technology, Hochschule Darmstadt - University of applied sciences (h_da). All Rights Reserved.
* Permission to use, copy, modify, and distribute this software and its documentation for educational, and research purposes in the context of non-commercial
* (unless permitted by h_da) and official h_da projects, is hereby granted for enrolled students of h_da, provided that the above copyright notice,
* this paragraph and the following paragraph appear in all copies, modifications, and distributions.
* Contact Prof.Dr.-Ing. Peter Fromm, peter.fromm@h-da.de, Birkenweg 8 64295 Darmstadt - GERMANY for commercial requests.
*
* \warning This software is a PROTOTYPE version and is not designed or intended for use in production, especially not for safety-critical applications!
* The user represents and warrants that it will NOT use or redistribute the Software for such purposes.
* This prototype is for research purposes only. This software is provided "AS IS," without a warranty of any kind.
*/

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/

#include "project.h"
#include "joystick.h"



/*****************************************************************************/
/* Local pre-processor symbols/macros ('#define')                            */
/*****************************************************************************/

/*****************************************************************************/
/* Global variable definitions (declared in header file with 'extern')       */
/*****************************************************************************/

/*****************************************************************************/
/* Local type definitions ('typedef')                                        */
/*****************************************************************************/

/*****************************************************************************/
/* Local variable definitions ('static')                                     */
/*****************************************************************************/



/*****************************************************************************/
/* Local function prototypes ('static')                                      */
/*****************************************************************************/


/*****************************************************************************/
/* Function implementation - global ('extern') and local ('static')          */
/*****************************************************************************/

/**
 * Initialisation of the Joystick
 * @return RC_SUCCESS if all ok
 */
RC_t JOYSTICK_Init()
{
    
    JOYSTICK_ADC_XY_Start();
    //JOYSTICK_ADC_X_IRQ_Enable(); //May be activated later
    JOYSTICK_ADC_XY_StartConvert();
    
    return RC_SUCCESS;
}

/**
 * Read the Joystick position
 * @param sint8_t* x, sint8_t* y - OUT x and y position
 * @return RC_SUCCESS if all ok
 */
RC_t JOYSTICK_ReadPosition(sint8_t* x, sint8_t* y)
{
    //Wait for end of conversion
    JOYSTICK_ADC_XY_IsEndConversion(JOYSTICK_ADC_XY_WAIT_FOR_RESULT);

    //Read channels
    uint16_t posX = JOYSTICK_ADC_XY_GetResult16(0);
    uint16_t posY = JOYSTICK_ADC_XY_GetResult16(1);
    
    //Convert to scaled 8bit signal
    *x = (sint8_t)((2048 - posX) / 16);
    *y = (sint8_t)((2048 - posY) / 16);
    
    return RC_SUCCESS;
}
    

