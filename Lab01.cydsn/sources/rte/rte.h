/**
* \file rte.h
* \author P. Fromm
* \date 5.12.2018
*
* \brief Contains basic types and elementary dispatcher functions for the RTE
*
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
*
*  Changelog:\n
*  - <1.0; 5.12.2018; P. Fromm>
*            - Initial release
*
* \copyright Copyright �2016
* Department of electrical engineering and information technology, Hochschule Darmstadt - University of applied sciences (h_da). All Rights Reserved.
* Permission to use, copy, modify, and distribute this software and its documentation for educational, and research purposes in the context of non-commercial
* (unless permitted by h_da) and official h_da projects, is hereby granted for enrolled students of h_da, provided that the above copyright notice,
* this paragraph and the following paragraph appear in all copies, modifications, and distributions.
* Contact Prof.Dr.-Ing. Peter Fromm, peter.fromm@h-da.de, Birkenweg 8 64295 Darmstadt - GERMANY for commercial requests.
*
* \warning This software is a PROTOTYPE version and is not designed or intended for use in production, especially not for safety-critical applications!
* The user represents and warrants that it will NOT use or redistribute the Software for such purposes.
* This prototype is for research purposes only. This software is provided "AS IS," without a warranty of any kind.
**/


 
#ifndef RTE_H
#define RTE_H

/*****************************************************************************/
/* Global pre-processor symbols/macros and type declarations                 */
/*****************************************************************************/
    
#include "global.h"
#include "project.h"
#include "rte_types.h"    

    

//####################### Type Definitions

    
typedef enum{ 
    RTE_SIGNALSTATUS_STARTUP,       /**< \brief Value upon startup */
    RTE_SIGNALSTATUS_INITIALIZED,   /**< \brief Value upon explicit initialisation */
    RTE_SIGNALSTATUS_VALID,         /**< \brief Value upon setting the value. Only valid values will be pushed to the connected output port */
    RTE_SIGNALSTATUS_INVALID        /**< \brief Value upon wrong read from the connected driver */
} RTE_signalStatus_t;
    
    
/**
 * Pointerdefinition for a runnable function
 * Event has only sensible data for event fired runnables
 * For time triggered runnables, the value will be 0
 **/
typedef void (*RTE_pRunnable)(RTE_event ev);

/**
 * Table entry definition for a cyclic runnable table
 **/
typedef struct
{
    RTE_pRunnable run;          /**< \brief pointer to the runnable */
    uint16_t      cycleTime;    /**< \brief cycle time in ms */
} RTE_cyclicTable_t;

/**
 * Table entry definition for a event runnable table
 **/
typedef struct
{
    RTE_pRunnable run;          /**< \brief pointer to the runnable */
    EventMaskType event;        /**< \brief event mask which will activate the runnable */
} RTE_eventTable_t;


// Wrapper to allow representing the file in Together as class
#ifdef TOGETHER

class RTE
{
public:
#endif /* Together */

/*****************************************************************************/
/* API functions                                                             */
/*****************************************************************************/

/**
 * Will call all cyclic runnables when due
 * \param RTE_cyclicTable_t const *const table : [IN] table to be processed
 * \param uint16_t tableSize : [IN] table size
 * \param uint16_t time : [IN] ticktime in ms
 * \return RC_SUCCESS if all ok, error code otherwise
 */
RC_t RTE_ProcessCyclicTable(RTE_cyclicTable_t const *const table, uint16_t tableSize, uint32_t time);
    
/**
 * Will call all event runnables when due
 * \param RTE_eventTable_t const *const table : [IN] table to be processed
 * \param uint16_t tableSize : [IN] table size
 * \param EventMaskType ev : [IN] event mask to be processed
 * \return RC_SUCCESS if all ok, error code otherwise
 */
RC_t RTE_ProcessEventTable(RTE_eventTable_t const *const table, uint16_t tableSize, EventMaskType ev);





#ifdef TOGETHER
};
#endif /* Together */

#endif /* RTE_H */
