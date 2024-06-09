/**
* \file rte.c
* \author P. Fromm
* \date 8.12.18
*
* \brief Runnable dispatcher
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
#include "rte.h"

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
 * Will call all cyclic runnables when due
 * \param RTE_cyclicTable_t const *const table : [IN] table to be processed
 * \param uint16_t tableSize : [IN] table size
 * \param uint32_t* time : [IN] ticktime elapsed since start in ms
 * \return RC_SUCCESS if all ok, error code otherwise
 */
RC_t RTE_ProcessCyclicTable(RTE_cyclicTable_t const *const table, uint16_t tableSize, uint32_t time)
{
	RC_t rc = RC_SUCCESS;
    
    for (uint16_t i = 0; i < tableSize; i++)
    {
        if (0 == (time % table[i].cycleTime))
        {
			//No event information in this case
            table[i].run(0);
        }
    }
	
	return rc;
    
}
    
/**
 * Will call all event runnables when due
 * \param RTE_eventTable_t const *const table : [IN] table to be processed
 * \param uint16_t tableSize : [IN] table size
 * \param EventMaskType ev : [IN] event mask to be processed
 * \return RC_SUCCESS if all ok, error code otherwise
 */
RC_t RTE_ProcessEventTable(RTE_eventTable_t const *const table, uint16_t tableSize, EventMaskType ev)
{
    RC_t rc = RC_SUCCESS;
	
    for (uint16_t i = 0; i < tableSize; i++)
    {
        if (ev & table[i].event)
        {
			//Fire activating event
            table[i].run(table[i].event);
        }
    }
	
	return rc;
    
}