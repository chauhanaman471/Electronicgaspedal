/*******************************************************************************
* File Name: WD_Button.h  
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

#if !defined(CY_PINS_WD_Button_H) /* Pins WD_Button_H */
#define CY_PINS_WD_Button_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "WD_Button_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 WD_Button__PORT == 15 && ((WD_Button__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    WD_Button_Write(uint8 value);
void    WD_Button_SetDriveMode(uint8 mode);
uint8   WD_Button_ReadDataReg(void);
uint8   WD_Button_Read(void);
void    WD_Button_SetInterruptMode(uint16 position, uint16 mode);
uint8   WD_Button_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the WD_Button_SetDriveMode() function.
     *  @{
     */
        #define WD_Button_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define WD_Button_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define WD_Button_DM_RES_UP          PIN_DM_RES_UP
        #define WD_Button_DM_RES_DWN         PIN_DM_RES_DWN
        #define WD_Button_DM_OD_LO           PIN_DM_OD_LO
        #define WD_Button_DM_OD_HI           PIN_DM_OD_HI
        #define WD_Button_DM_STRONG          PIN_DM_STRONG
        #define WD_Button_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define WD_Button_MASK               WD_Button__MASK
#define WD_Button_SHIFT              WD_Button__SHIFT
#define WD_Button_WIDTH              1u

/* Interrupt constants */
#if defined(WD_Button__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in WD_Button_SetInterruptMode() function.
     *  @{
     */
        #define WD_Button_INTR_NONE      (uint16)(0x0000u)
        #define WD_Button_INTR_RISING    (uint16)(0x0001u)
        #define WD_Button_INTR_FALLING   (uint16)(0x0002u)
        #define WD_Button_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define WD_Button_INTR_MASK      (0x01u) 
#endif /* (WD_Button__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define WD_Button_PS                     (* (reg8 *) WD_Button__PS)
/* Data Register */
#define WD_Button_DR                     (* (reg8 *) WD_Button__DR)
/* Port Number */
#define WD_Button_PRT_NUM                (* (reg8 *) WD_Button__PRT) 
/* Connect to Analog Globals */                                                  
#define WD_Button_AG                     (* (reg8 *) WD_Button__AG)                       
/* Analog MUX bux enable */
#define WD_Button_AMUX                   (* (reg8 *) WD_Button__AMUX) 
/* Bidirectional Enable */                                                        
#define WD_Button_BIE                    (* (reg8 *) WD_Button__BIE)
/* Bit-mask for Aliased Register Access */
#define WD_Button_BIT_MASK               (* (reg8 *) WD_Button__BIT_MASK)
/* Bypass Enable */
#define WD_Button_BYP                    (* (reg8 *) WD_Button__BYP)
/* Port wide control signals */                                                   
#define WD_Button_CTL                    (* (reg8 *) WD_Button__CTL)
/* Drive Modes */
#define WD_Button_DM0                    (* (reg8 *) WD_Button__DM0) 
#define WD_Button_DM1                    (* (reg8 *) WD_Button__DM1)
#define WD_Button_DM2                    (* (reg8 *) WD_Button__DM2) 
/* Input Buffer Disable Override */
#define WD_Button_INP_DIS                (* (reg8 *) WD_Button__INP_DIS)
/* LCD Common or Segment Drive */
#define WD_Button_LCD_COM_SEG            (* (reg8 *) WD_Button__LCD_COM_SEG)
/* Enable Segment LCD */
#define WD_Button_LCD_EN                 (* (reg8 *) WD_Button__LCD_EN)
/* Slew Rate Control */
#define WD_Button_SLW                    (* (reg8 *) WD_Button__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define WD_Button_PRTDSI__CAPS_SEL       (* (reg8 *) WD_Button__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define WD_Button_PRTDSI__DBL_SYNC_IN    (* (reg8 *) WD_Button__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define WD_Button_PRTDSI__OE_SEL0        (* (reg8 *) WD_Button__PRTDSI__OE_SEL0) 
#define WD_Button_PRTDSI__OE_SEL1        (* (reg8 *) WD_Button__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define WD_Button_PRTDSI__OUT_SEL0       (* (reg8 *) WD_Button__PRTDSI__OUT_SEL0) 
#define WD_Button_PRTDSI__OUT_SEL1       (* (reg8 *) WD_Button__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define WD_Button_PRTDSI__SYNC_OUT       (* (reg8 *) WD_Button__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(WD_Button__SIO_CFG)
    #define WD_Button_SIO_HYST_EN        (* (reg8 *) WD_Button__SIO_HYST_EN)
    #define WD_Button_SIO_REG_HIFREQ     (* (reg8 *) WD_Button__SIO_REG_HIFREQ)
    #define WD_Button_SIO_CFG            (* (reg8 *) WD_Button__SIO_CFG)
    #define WD_Button_SIO_DIFF           (* (reg8 *) WD_Button__SIO_DIFF)
#endif /* (WD_Button__SIO_CFG) */

/* Interrupt Registers */
#if defined(WD_Button__INTSTAT)
    #define WD_Button_INTSTAT            (* (reg8 *) WD_Button__INTSTAT)
    #define WD_Button_SNAP               (* (reg8 *) WD_Button__SNAP)
    
	#define WD_Button_0_INTTYPE_REG 		(* (reg8 *) WD_Button__0__INTTYPE)
#endif /* (WD_Button__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_WD_Button_H */


/* [] END OF FILE */
