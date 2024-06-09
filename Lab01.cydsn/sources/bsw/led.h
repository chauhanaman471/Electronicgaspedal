/**
* \file led.h
* \author P. Fromm
* \date 28.8.17
*
* \brief LED driver for normal and RGB LED's
*
* Set, clear and toggle the normal LED's, sets the color for the RGB LED
*
* \note <notes>
* Programming rules (may be deleted in the final release of the file)
* ===================================================================
*
* 1. Naming conventions:
*    - Prefix of your module in front of every function and static data. 
*    - Scope _ for public and __ for private functions / data / types, e.g. 
*       Public:  void CONTROL_straightPark_Init();
*       Private: static void CONTROL__calcDistance();
*       Public:  typedef enum {RED, GREEN, YELLOW} CONTROL_color_t
*    - Own type definitions e.g. for structs or enums get a postfix _t
*    - #define's and enums are written in CAPITAL letters
* 2. Code structure
*    - Be aware of the scope of your modules and functions. Provide only functions which belong to your module to your files
*    - Prepare your design before starting to code
*    - Implement the simple most solution (Too many if then else nestings are an indicator that you have not properly analysed your task)
*    - Avoid magic numbers, use enums and #define's instead
*    - Make sure, that all error conditions are properly handled
*    - If your module provides data structures, which are required in many other files, it is recommended to place them in a file_type.h file
*	  - If your module contains configurable parts, is is recommended to place these in a file_config.h|.c file
* 3. Data conventions
*    - Minimize the scope of data (and functions)
*    - Global data is not allowed outside of the signal layer (in case a signal layer is part of your design)
*    - All static objects have to be placed in a valid linker sections
*    - Data which is accessed in more than one task has to be volatile and needs to be protected (e.g. by using messages or semaphores)
*    - Do not mix signed and unsigned data in the same operation
* 4. Documentation
*    - Use self explaining function and variable names
*    - Use proper indentation
*    - Provide Javadoc / Doxygen compatible comments in your header file and C-File
*    		- Every  File has to be documented in the header
*			- Every function parameter and return value must be documented, the valid range needs to be specified
*     		- Logical code blocks in the C-File must be commented
*    - For a detailed list of doxygen commands check http://www.stack.nl/~dimitri/doxygen/index.html 
* 5. Qualification
*    - Perform and document design and code reviews for every module
*    - Provide test specifications for every module (focus on error conditions)
*
* Further information:
*    - Check the programming rules defined in the MIMIR project guide
*         - Code structure: https://fromm.eit.h-da.de/intern/mimir/methods/eng_codestructure/method.htm
*         - MISRA for C: https://fromm.eit.h-da.de/intern/mimir/methods/eng_c_rules/method.htm
*         - MISRA for C++: https://fromm.eit.h-da.de/intern/mimir/methods/eng_cpp_rules/method.htm 
*
* \todo <todos>
* \warning <warnings, e.g. dependencies, order of execution etc.>
*
*  Changelog:\n
*  - <version; data of change; author>
*            - <description of the change>
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

 
#ifndef LED_H
#define LED_H

#include "global.h"

    
    
/*****************************************************************************/
/* Global pre-processor symbols/macros and type declarations                 */
/*****************************************************************************/

//####################### Enumerations
/**
* \brief Enumeration identifying the LED to be set
*
*/
enum eLED_id{
  LED_RED,          /**< Selection of red LED */
  LED_YELLOW,       /**< Selection of yellow LED */
  LED_GREEN,        /**< Selection of green LED */
  LED_ALL           /**< Selection of all LED's */
} ;         
typedef enum eLED_id LED_id_t;

enum eLED_ONOFF{
    LED_OFF = 0,    /**< Turn the LED OFF */
    LED_ON  = 1     /**< Turn the LED ON */
};
typedef enum eLED_ONOFF LED_ONOFF_t;

// Wrapper to allow representing the file in Together as class
#ifdef TOGETHER

class LED
{
private:
    /**@link aggregationByValue
     * @supplierCardinality 3*/
    PWM lnkPWM;
    /**@link dependency*/
    /*# LED_onOff lnkLED_onOff; */
    /**@link dependency*/
    /*# LED_id lnkLED_id; */
    /**@link dependency*/
    /*# RC_t lnkRC_t; */
    /**@link dependency*/
    /*# eRC lnkeRC; */
    /**@link dependency*/
    /*# eLED_ONOFF lnkeLED_ONOFF; */
    /**@link dependency*/
    /*# eLED_id lnkeLED_id; */
public:
#endif /* Together */

/*****************************************************************************/
/* Extern global variables                                                   */
/*****************************************************************************/


/*****************************************************************************/
/* API functions                                                             */
/*****************************************************************************/

/**
 * Initialises the LED's and turns them off
 * @return RC_OK if function was executed as exepected, other error code in case of error
 */
RC_t LED_Init();

/**
 * Sets the required LED
 * @param LED_t ledId - Identifier for the LED, ALL will change all LED's
 * @param LED_ONOFF_t ledOnOff - Trun the led on or off
 * @return RC_SUCCESS if function was executed as exepected, other error code in case of error
 */
RC_t LED_Set(LED_id_t ledId, LED_ONOFF_t ledOnOff);

/**
 * Toggle the required LED
 * @param LED_id_t ledId - Identifier for the LED, ALL will change all LED's
 * @return RC_SUCCESS if function was executed as exepected, other error code in case of error
 */
RC_t LED_Toggle(LED_id_t ledId);

/**
 * Set the RGB LED
 * @param uint8_t red - brightness 
 * @param uint8_t green - brightness 
 * @param uint8_t blue - brightness 
 * @return RC_SUCCESS if function was executed as exepected, other error code in case of error
 */
RC_t LED_RGB_Set(uint8_t red, uint8_t green, uint8_t blue);

/*****************************************************************************/
/* Private stuff, only visible for Together, declared static in cpp - File   */
/*****************************************************************************/


#ifdef TOGETHER
//Not visible for compiler, only used for document generation
//Attributes


//Operations



};
#endif /* Together */

#endif /* FILE_H */
