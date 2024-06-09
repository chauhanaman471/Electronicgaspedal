/*******************************************************************************
* File Name: LED_red.h  
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

#if !defined(CY_PINS_LED_red_H) /* Pins LED_red_H */
#define CY_PINS_LED_red_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LED_red_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LED_red__PORT == 15 && ((LED_red__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LED_red_Write(uint8 value);
void    LED_red_SetDriveMode(uint8 mode);
uint8   LED_red_ReadDataReg(void);
uint8   LED_red_Read(void);
void    LED_red_SetInterruptMode(uint16 position, uint16 mode);
uint8   LED_red_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LED_red_SetDriveMode() function.
     *  @{
     */
        #define LED_red_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LED_red_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LED_red_DM_RES_UP          PIN_DM_RES_UP
        #define LED_red_DM_RES_DWN         PIN_DM_RES_DWN
        #define LED_red_DM_OD_LO           PIN_DM_OD_LO
        #define LED_red_DM_OD_HI           PIN_DM_OD_HI
        #define LED_red_DM_STRONG          PIN_DM_STRONG
        #define LED_red_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LED_red_MASK               LED_red__MASK
#define LED_red_SHIFT              LED_red__SHIFT
#define LED_red_WIDTH              1u

/* Interrupt constants */
#if defined(LED_red__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LED_red_SetInterruptMode() function.
     *  @{
     */
        #define LED_red_INTR_NONE      (uint16)(0x0000u)
        #define LED_red_INTR_RISING    (uint16)(0x0001u)
        #define LED_red_INTR_FALLING   (uint16)(0x0002u)
        #define LED_red_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LED_red_INTR_MASK      (0x01u) 
#endif /* (LED_red__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LED_red_PS                     (* (reg8 *) LED_red__PS)
/* Data Register */
#define LED_red_DR                     (* (reg8 *) LED_red__DR)
/* Port Number */
#define LED_red_PRT_NUM                (* (reg8 *) LED_red__PRT) 
/* Connect to Analog Globals */                                                  
#define LED_red_AG                     (* (reg8 *) LED_red__AG)                       
/* Analog MUX bux enable */
#define LED_red_AMUX                   (* (reg8 *) LED_red__AMUX) 
/* Bidirectional Enable */                                                        
#define LED_red_BIE                    (* (reg8 *) LED_red__BIE)
/* Bit-mask for Aliased Register Access */
#define LED_red_BIT_MASK               (* (reg8 *) LED_red__BIT_MASK)
/* Bypass Enable */
#define LED_red_BYP                    (* (reg8 *) LED_red__BYP)
/* Port wide control signals */                                                   
#define LED_red_CTL                    (* (reg8 *) LED_red__CTL)
/* Drive Modes */
#define LED_red_DM0                    (* (reg8 *) LED_red__DM0) 
#define LED_red_DM1                    (* (reg8 *) LED_red__DM1)
#define LED_red_DM2                    (* (reg8 *) LED_red__DM2) 
/* Input Buffer Disable Override */
#define LED_red_INP_DIS                (* (reg8 *) LED_red__INP_DIS)
/* LCD Common or Segment Drive */
#define LED_red_LCD_COM_SEG            (* (reg8 *) LED_red__LCD_COM_SEG)
/* Enable Segment LCD */
#define LED_red_LCD_EN                 (* (reg8 *) LED_red__LCD_EN)
/* Slew Rate Control */
#define LED_red_SLW                    (* (reg8 *) LED_red__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LED_red_PRTDSI__CAPS_SEL       (* (reg8 *) LED_red__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LED_red_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LED_red__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LED_red_PRTDSI__OE_SEL0        (* (reg8 *) LED_red__PRTDSI__OE_SEL0) 
#define LED_red_PRTDSI__OE_SEL1        (* (reg8 *) LED_red__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LED_red_PRTDSI__OUT_SEL0       (* (reg8 *) LED_red__PRTDSI__OUT_SEL0) 
#define LED_red_PRTDSI__OUT_SEL1       (* (reg8 *) LED_red__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LED_red_PRTDSI__SYNC_OUT       (* (reg8 *) LED_red__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LED_red__SIO_CFG)
    #define LED_red_SIO_HYST_EN        (* (reg8 *) LED_red__SIO_HYST_EN)
    #define LED_red_SIO_REG_HIFREQ     (* (reg8 *) LED_red__SIO_REG_HIFREQ)
    #define LED_red_SIO_CFG            (* (reg8 *) LED_red__SIO_CFG)
    #define LED_red_SIO_DIFF           (* (reg8 *) LED_red__SIO_DIFF)
#endif /* (LED_red__SIO_CFG) */

/* Interrupt Registers */
#if defined(LED_red__INTSTAT)
    #define LED_red_INTSTAT            (* (reg8 *) LED_red__INTSTAT)
    #define LED_red_SNAP               (* (reg8 *) LED_red__SNAP)
    
	#define LED_red_0_INTTYPE_REG 		(* (reg8 *) LED_red__0__INTTYPE)
#endif /* (LED_red__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LED_red_H */


/* [] END OF FILE */
