/*******************************************************************************
* File Name: JOYSTICK_ADC_XY.h
* Version 2.10
*
* Description:
*  Contains the function prototypes, constants and register definition of the
*  ADC SAR Sequencer Component.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2012-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_JOYSTICK_ADC_XY_H)
    #define CY_JOYSTICK_ADC_XY_H

#include "cytypes.h"
#include "cyfitter.h"
#include "CyLib.h"
#include "JOYSTICK_ADC_XY_TempBuf_dma.h"
#include "JOYSTICK_ADC_XY_FinalBuf_dma.h"
#include "JOYSTICK_ADC_XY_SAR.h"

#define JOYSTICK_ADC_XY_NUMBER_OF_CHANNELS    (2u)
#define JOYSTICK_ADC_XY_SAMPLE_MODE           (0u)
#define JOYSTICK_ADC_XY_CLOCK_SOURCE          (0u)

extern int16  JOYSTICK_ADC_XY_finalArray[JOYSTICK_ADC_XY_NUMBER_OF_CHANNELS];
extern uint32 JOYSTICK_ADC_XY_initVar;

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component ADC_SAR_SEQ_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */


/***************************************
*        Function Prototypes
***************************************/
void JOYSTICK_ADC_XY_Init(void);
void JOYSTICK_ADC_XY_Enable(void);
void JOYSTICK_ADC_XY_Disable(void);
void JOYSTICK_ADC_XY_Start(void);
void JOYSTICK_ADC_XY_Stop(void);

uint32 JOYSTICK_ADC_XY_IsEndConversion(uint8 retMode);
int16 JOYSTICK_ADC_XY_GetResult16(uint16 chan);
int16 JOYSTICK_ADC_XY_GetAdcResult(void);
void JOYSTICK_ADC_XY_SetOffset(int32 offset);
void JOYSTICK_ADC_XY_SetResolution(uint8 resolution);
void JOYSTICK_ADC_XY_SetScaledGain(int32 adcGain);
int32 JOYSTICK_ADC_XY_CountsTo_mVolts(int16 adcCounts);
int32 JOYSTICK_ADC_XY_CountsTo_uVolts(int16 adcCounts);
float32 JOYSTICK_ADC_XY_CountsTo_Volts(int16 adcCounts);
void JOYSTICK_ADC_XY_Sleep(void);
void JOYSTICK_ADC_XY_Wakeup(void);
void JOYSTICK_ADC_XY_SaveConfig(void);
void JOYSTICK_ADC_XY_RestoreConfig(void);

CY_ISR_PROTO( JOYSTICK_ADC_XY_ISR );

/* Obsolete API for backward compatibility.
*  Should not be used in new designs.
*/
void JOYSTICK_ADC_XY_SetGain(int32 adcGain);


/**************************************
*    Initial Parameter Constants
**************************************/
#define JOYSTICK_ADC_XY_IRQ_REMOVE             (0u)                /* Removes internal interrupt */


/***************************************
*             Registers
***************************************/
#define JOYSTICK_ADC_XY_CYCLE_COUNTER_AUX_CONTROL_REG \
                                               (*(reg8 *) JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__CONTROL_AUX_CTL_REG)
#define JOYSTICK_ADC_XY_CYCLE_COUNTER_AUX_CONTROL_PTR \
                                               ( (reg8 *) JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__CONTROL_AUX_CTL_REG)
#define JOYSTICK_ADC_XY_CONTROL_REG    (*(reg8 *) \
                                             JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__CONTROL_REG)
#define JOYSTICK_ADC_XY_CONTROL_PTR    ( (reg8 *) \
                                             JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__CONTROL_REG)
#define JOYSTICK_ADC_XY_COUNT_REG      (*(reg8 *) \
                                             JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__COUNT_REG)
#define JOYSTICK_ADC_XY_COUNT_PTR      ( (reg8 *) \
                                             JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__COUNT_REG)
#define JOYSTICK_ADC_XY_STATUS_REG     (*(reg8 *) JOYSTICK_ADC_XY_bSAR_SEQ_EOCSts__STATUS_REG)
#define JOYSTICK_ADC_XY_STATUS_PTR     ( (reg8 *) JOYSTICK_ADC_XY_bSAR_SEQ_EOCSts__STATUS_REG)

#define JOYSTICK_ADC_XY_SAR_DATA_ADDR_0 (JOYSTICK_ADC_XY_SAR_ADC_SAR__WRK0)
#define JOYSTICK_ADC_XY_SAR_DATA_ADDR_1 (JOYSTICK_ADC_XY_SAR_ADC_SAR__WRK1)
#define JOYSTICK_ADC_XY_SAR_DATA_ADDR_0_REG (*(reg8 *) \
                                              JOYSTICK_ADC_XY_SAR_ADC_SAR__WRK0)
#define JOYSTICK_ADC_XY_SAR_DATA_ADDR_1_REG (*(reg8 *) \
                                              JOYSTICK_ADC_XY_SAR_ADC_SAR__WRK1)


/**************************************
*       Register Constants
**************************************/

#if(JOYSTICK_ADC_XY_IRQ_REMOVE == 0u)

    /* Priority of the ADC_SAR_IRQ interrupt. */
    #define JOYSTICK_ADC_XY_INTC_PRIOR_NUMBER          (uint8)(JOYSTICK_ADC_XY_IRQ__INTC_PRIOR_NUM)

    /* ADC_SAR_IRQ interrupt number */
    #define JOYSTICK_ADC_XY_INTC_NUMBER                (uint8)(JOYSTICK_ADC_XY_IRQ__INTC_NUMBER)

#endif   /* End JOYSTICK_ADC_XY_IRQ_REMOVE */


/***************************************
*       API Constants
***************************************/

/* Constants for IsEndConversion() "retMode" parameter */
#define JOYSTICK_ADC_XY_RETURN_STATUS              (0x01u)
#define JOYSTICK_ADC_XY_WAIT_FOR_RESULT            (0x00u)

/* Defines for the Resolution parameter */
#define JOYSTICK_ADC_XY_BITS_12    JOYSTICK_ADC_XY_SAR__BITS_12
#define JOYSTICK_ADC_XY_BITS_10    JOYSTICK_ADC_XY_SAR__BITS_10
#define JOYSTICK_ADC_XY_BITS_8     JOYSTICK_ADC_XY_SAR__BITS_8

#define JOYSTICK_ADC_XY_CYCLE_COUNTER_ENABLE    (0x20u)
#define JOYSTICK_ADC_XY_BASE_COMPONENT_ENABLE   (0x01u)
#define JOYSTICK_ADC_XY_LOAD_COUNTER_PERIOD     (0x02u)
#define JOYSTICK_ADC_XY_SOFTWARE_SOC_PULSE      (0x04u)

/* Generic DMA Configuration parameters */
#define JOYSTICK_ADC_XY_TEMP_BYTES_PER_BURST     (uint8)(2u)
#define JOYSTICK_ADC_XY_TEMP_TRANSFER_COUNT      ((uint16)JOYSTICK_ADC_XY_NUMBER_OF_CHANNELS << 1u)
#define JOYSTICK_ADC_XY_FINAL_BYTES_PER_BURST    ((uint16)JOYSTICK_ADC_XY_NUMBER_OF_CHANNELS << 1u)
#define JOYSTICK_ADC_XY_REQUEST_PER_BURST        (uint8)(1u)

#define JOYSTICK_ADC_XY_GET_RESULT_INDEX_OFFSET    ((uint8)JOYSTICK_ADC_XY_NUMBER_OF_CHANNELS - 1u)

/* Define for Sample Mode  */
#define JOYSTICK_ADC_XY_SAMPLE_MODE_FREE_RUNNING    (0x00u)
#define JOYSTICK_ADC_XY_SAMPLE_MODE_SW_TRIGGERED    (0x01u)
#define JOYSTICK_ADC_XY_SAMPLE_MODE_HW_TRIGGERED    (0x02u)

/* Define for Clock Source  */
#define JOYSTICK_ADC_XY_CLOCK_INTERNAL              (0x00u)
#define JOYSTICK_ADC_XY_CLOCK_EXTERNAL              (0x01u)


/***************************************
*        Optional Function Prototypes
***************************************/
#if(JOYSTICK_ADC_XY_SAMPLE_MODE != JOYSTICK_ADC_XY_SAMPLE_MODE_HW_TRIGGERED)
    void JOYSTICK_ADC_XY_StartConvert(void);
    void JOYSTICK_ADC_XY_StopConvert(void);
#endif /* JOYSTICK_ADC_XY_SAMPLE_MODE != JOYSTICK_ADC_XY_SAMPLE_MODE_HW_TRIGGERED */

#endif  /* !defined(CY_JOYSTICK_ADC_XY_H) */

/* [] END OF FILE */
