/*******************************************************************************
* File Name: LED_yellow.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_LED_yellow_H) /* Pins LED_yellow_H */
#define CY_PINS_LED_yellow_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LED_yellow_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LED_yellow__PORT == 15 && ((LED_yellow__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LED_yellow_Write(uint8 value);
void    LED_yellow_SetDriveMode(uint8 mode);
uint8   LED_yellow_ReadDataReg(void);
uint8   LED_yellow_Read(void);
void    LED_yellow_SetInterruptMode(uint16 position, uint16 mode);
uint8   LED_yellow_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LED_yellow_SetDriveMode() function.
     *  @{
     */
        #define LED_yellow_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LED_yellow_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LED_yellow_DM_RES_UP          PIN_DM_RES_UP
        #define LED_yellow_DM_RES_DWN         PIN_DM_RES_DWN
        #define LED_yellow_DM_OD_LO           PIN_DM_OD_LO
        #define LED_yellow_DM_OD_HI           PIN_DM_OD_HI
        #define LED_yellow_DM_STRONG          PIN_DM_STRONG
        #define LED_yellow_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LED_yellow_MASK               LED_yellow__MASK
#define LED_yellow_SHIFT              LED_yellow__SHIFT
#define LED_yellow_WIDTH              1u

/* Interrupt constants */
#if defined(LED_yellow__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LED_yellow_SetInterruptMode() function.
     *  @{
     */
        #define LED_yellow_INTR_NONE      (uint16)(0x0000u)
        #define LED_yellow_INTR_RISING    (uint16)(0x0001u)
        #define LED_yellow_INTR_FALLING   (uint16)(0x0002u)
        #define LED_yellow_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LED_yellow_INTR_MASK      (0x01u) 
#endif /* (LED_yellow__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LED_yellow_PS                     (* (reg8 *) LED_yellow__PS)
/* Data Register */
#define LED_yellow_DR                     (* (reg8 *) LED_yellow__DR)
/* Port Number */
#define LED_yellow_PRT_NUM                (* (reg8 *) LED_yellow__PRT) 
/* Connect to Analog Globals */                                                  
#define LED_yellow_AG                     (* (reg8 *) LED_yellow__AG)                       
/* Analog MUX bux enable */
#define LED_yellow_AMUX                   (* (reg8 *) LED_yellow__AMUX) 
/* Bidirectional Enable */                                                        
#define LED_yellow_BIE                    (* (reg8 *) LED_yellow__BIE)
/* Bit-mask for Aliased Register Access */
#define LED_yellow_BIT_MASK               (* (reg8 *) LED_yellow__BIT_MASK)
/* Bypass Enable */
#define LED_yellow_BYP                    (* (reg8 *) LED_yellow__BYP)
/* Port wide control signals */                                                   
#define LED_yellow_CTL                    (* (reg8 *) LED_yellow__CTL)
/* Drive Modes */
#define LED_yellow_DM0                    (* (reg8 *) LED_yellow__DM0) 
#define LED_yellow_DM1                    (* (reg8 *) LED_yellow__DM1)
#define LED_yellow_DM2                    (* (reg8 *) LED_yellow__DM2) 
/* Input Buffer Disable Override */
#define LED_yellow_INP_DIS                (* (reg8 *) LED_yellow__INP_DIS)
/* LCD Common or Segment Drive */
#define LED_yellow_LCD_COM_SEG            (* (reg8 *) LED_yellow__LCD_COM_SEG)
/* Enable Segment LCD */
#define LED_yellow_LCD_EN                 (* (reg8 *) LED_yellow__LCD_EN)
/* Slew Rate Control */
#define LED_yellow_SLW                    (* (reg8 *) LED_yellow__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LED_yellow_PRTDSI__CAPS_SEL       (* (reg8 *) LED_yellow__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LED_yellow_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LED_yellow__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LED_yellow_PRTDSI__OE_SEL0        (* (reg8 *) LED_yellow__PRTDSI__OE_SEL0) 
#define LED_yellow_PRTDSI__OE_SEL1        (* (reg8 *) LED_yellow__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LED_yellow_PRTDSI__OUT_SEL0       (* (reg8 *) LED_yellow__PRTDSI__OUT_SEL0) 
#define LED_yellow_PRTDSI__OUT_SEL1       (* (reg8 *) LED_yellow__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LED_yellow_PRTDSI__SYNC_OUT       (* (reg8 *) LED_yellow__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LED_yellow__SIO_CFG)
    #define LED_yellow_SIO_HYST_EN        (* (reg8 *) LED_yellow__SIO_HYST_EN)
    #define LED_yellow_SIO_REG_HIFREQ     (* (reg8 *) LED_yellow__SIO_REG_HIFREQ)
    #define LED_yellow_SIO_CFG            (* (reg8 *) LED_yellow__SIO_CFG)
    #define LED_yellow_SIO_DIFF           (* (reg8 *) LED_yellow__SIO_DIFF)
#endif /* (LED_yellow__SIO_CFG) */

/* Interrupt Registers */
#if defined(LED_yellow__INTSTAT)
    #define LED_yellow_INTSTAT            (* (reg8 *) LED_yellow__INTSTAT)
    #define LED_yellow_SNAP               (* (reg8 *) LED_yellow__SNAP)
    
	#define LED_yellow_0_INTTYPE_REG 		(* (reg8 *) LED_yellow__0__INTTYPE)
#endif /* (LED_yellow__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LED_yellow_H */


/* [] END OF FILE */
