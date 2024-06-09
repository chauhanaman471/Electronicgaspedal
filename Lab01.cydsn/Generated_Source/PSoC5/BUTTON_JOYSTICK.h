/*******************************************************************************
* File Name: BUTTON_JOYSTICK.h  
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

#if !defined(CY_PINS_BUTTON_JOYSTICK_H) /* Pins BUTTON_JOYSTICK_H */
#define CY_PINS_BUTTON_JOYSTICK_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BUTTON_JOYSTICK_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BUTTON_JOYSTICK__PORT == 15 && ((BUTTON_JOYSTICK__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    BUTTON_JOYSTICK_Write(uint8 value);
void    BUTTON_JOYSTICK_SetDriveMode(uint8 mode);
uint8   BUTTON_JOYSTICK_ReadDataReg(void);
uint8   BUTTON_JOYSTICK_Read(void);
void    BUTTON_JOYSTICK_SetInterruptMode(uint16 position, uint16 mode);
uint8   BUTTON_JOYSTICK_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the BUTTON_JOYSTICK_SetDriveMode() function.
     *  @{
     */
        #define BUTTON_JOYSTICK_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define BUTTON_JOYSTICK_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define BUTTON_JOYSTICK_DM_RES_UP          PIN_DM_RES_UP
        #define BUTTON_JOYSTICK_DM_RES_DWN         PIN_DM_RES_DWN
        #define BUTTON_JOYSTICK_DM_OD_LO           PIN_DM_OD_LO
        #define BUTTON_JOYSTICK_DM_OD_HI           PIN_DM_OD_HI
        #define BUTTON_JOYSTICK_DM_STRONG          PIN_DM_STRONG
        #define BUTTON_JOYSTICK_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define BUTTON_JOYSTICK_MASK               BUTTON_JOYSTICK__MASK
#define BUTTON_JOYSTICK_SHIFT              BUTTON_JOYSTICK__SHIFT
#define BUTTON_JOYSTICK_WIDTH              1u

/* Interrupt constants */
#if defined(BUTTON_JOYSTICK__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BUTTON_JOYSTICK_SetInterruptMode() function.
     *  @{
     */
        #define BUTTON_JOYSTICK_INTR_NONE      (uint16)(0x0000u)
        #define BUTTON_JOYSTICK_INTR_RISING    (uint16)(0x0001u)
        #define BUTTON_JOYSTICK_INTR_FALLING   (uint16)(0x0002u)
        #define BUTTON_JOYSTICK_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define BUTTON_JOYSTICK_INTR_MASK      (0x01u) 
#endif /* (BUTTON_JOYSTICK__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BUTTON_JOYSTICK_PS                     (* (reg8 *) BUTTON_JOYSTICK__PS)
/* Data Register */
#define BUTTON_JOYSTICK_DR                     (* (reg8 *) BUTTON_JOYSTICK__DR)
/* Port Number */
#define BUTTON_JOYSTICK_PRT_NUM                (* (reg8 *) BUTTON_JOYSTICK__PRT) 
/* Connect to Analog Globals */                                                  
#define BUTTON_JOYSTICK_AG                     (* (reg8 *) BUTTON_JOYSTICK__AG)                       
/* Analog MUX bux enable */
#define BUTTON_JOYSTICK_AMUX                   (* (reg8 *) BUTTON_JOYSTICK__AMUX) 
/* Bidirectional Enable */                                                        
#define BUTTON_JOYSTICK_BIE                    (* (reg8 *) BUTTON_JOYSTICK__BIE)
/* Bit-mask for Aliased Register Access */
#define BUTTON_JOYSTICK_BIT_MASK               (* (reg8 *) BUTTON_JOYSTICK__BIT_MASK)
/* Bypass Enable */
#define BUTTON_JOYSTICK_BYP                    (* (reg8 *) BUTTON_JOYSTICK__BYP)
/* Port wide control signals */                                                   
#define BUTTON_JOYSTICK_CTL                    (* (reg8 *) BUTTON_JOYSTICK__CTL)
/* Drive Modes */
#define BUTTON_JOYSTICK_DM0                    (* (reg8 *) BUTTON_JOYSTICK__DM0) 
#define BUTTON_JOYSTICK_DM1                    (* (reg8 *) BUTTON_JOYSTICK__DM1)
#define BUTTON_JOYSTICK_DM2                    (* (reg8 *) BUTTON_JOYSTICK__DM2) 
/* Input Buffer Disable Override */
#define BUTTON_JOYSTICK_INP_DIS                (* (reg8 *) BUTTON_JOYSTICK__INP_DIS)
/* LCD Common or Segment Drive */
#define BUTTON_JOYSTICK_LCD_COM_SEG            (* (reg8 *) BUTTON_JOYSTICK__LCD_COM_SEG)
/* Enable Segment LCD */
#define BUTTON_JOYSTICK_LCD_EN                 (* (reg8 *) BUTTON_JOYSTICK__LCD_EN)
/* Slew Rate Control */
#define BUTTON_JOYSTICK_SLW                    (* (reg8 *) BUTTON_JOYSTICK__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BUTTON_JOYSTICK_PRTDSI__CAPS_SEL       (* (reg8 *) BUTTON_JOYSTICK__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BUTTON_JOYSTICK_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BUTTON_JOYSTICK__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BUTTON_JOYSTICK_PRTDSI__OE_SEL0        (* (reg8 *) BUTTON_JOYSTICK__PRTDSI__OE_SEL0) 
#define BUTTON_JOYSTICK_PRTDSI__OE_SEL1        (* (reg8 *) BUTTON_JOYSTICK__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BUTTON_JOYSTICK_PRTDSI__OUT_SEL0       (* (reg8 *) BUTTON_JOYSTICK__PRTDSI__OUT_SEL0) 
#define BUTTON_JOYSTICK_PRTDSI__OUT_SEL1       (* (reg8 *) BUTTON_JOYSTICK__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BUTTON_JOYSTICK_PRTDSI__SYNC_OUT       (* (reg8 *) BUTTON_JOYSTICK__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(BUTTON_JOYSTICK__SIO_CFG)
    #define BUTTON_JOYSTICK_SIO_HYST_EN        (* (reg8 *) BUTTON_JOYSTICK__SIO_HYST_EN)
    #define BUTTON_JOYSTICK_SIO_REG_HIFREQ     (* (reg8 *) BUTTON_JOYSTICK__SIO_REG_HIFREQ)
    #define BUTTON_JOYSTICK_SIO_CFG            (* (reg8 *) BUTTON_JOYSTICK__SIO_CFG)
    #define BUTTON_JOYSTICK_SIO_DIFF           (* (reg8 *) BUTTON_JOYSTICK__SIO_DIFF)
#endif /* (BUTTON_JOYSTICK__SIO_CFG) */

/* Interrupt Registers */
#if defined(BUTTON_JOYSTICK__INTSTAT)
    #define BUTTON_JOYSTICK_INTSTAT            (* (reg8 *) BUTTON_JOYSTICK__INTSTAT)
    #define BUTTON_JOYSTICK_SNAP               (* (reg8 *) BUTTON_JOYSTICK__SNAP)
    
	#define BUTTON_JOYSTICK_0_INTTYPE_REG 		(* (reg8 *) BUTTON_JOYSTICK__0__INTTYPE)
#endif /* (BUTTON_JOYSTICK__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BUTTON_JOYSTICK_H */


/* [] END OF FILE */
