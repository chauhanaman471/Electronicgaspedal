/**
* \file rte.h
* \author P. Fromm
* \date 28.10.2020
*
* \brief Contains basic types and elementary dispatcher functions for the RTE
*/
 
#ifndef RTE_TYPES_H
#define RTE_TYPES_H

/*****************************************************************************/
/* Global pre-processor symbols/macros and type declarations                 */
/*****************************************************************************/
    
#include "global.h"
#include "project.h"
    

//####################### Type Definitions
    
/**
 * Required for creating the onUpdate and onError Callists 
 */
typedef TaskType TaskTypeArray[];

//####################### OS Glue Logic

/**
 * Datatype representing the events fired to the event driven tasks
 * Used as first parameter so that the user can identify which event was fired
 */
typedef EventMaskType RTE_event;


/**
 * In case no ressources are required in the OS, the Resource Type Definition is missing.
 * So we create a stub here. Must be commented out if we have real resources.
 **/

#define OSRES 0 //0: No ressources being used, 1: Ressources present


#if OSRES == 0
    typedef uint32_t ResourceType;
    #define GetResource(A)
    #define ReleaseResource(A)
#endif

#endif /* RTE_TYPES_H */
