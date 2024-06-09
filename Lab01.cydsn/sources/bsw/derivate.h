/**
 * \file	derivate.h
 * \author	Thomas Barth 	Hochschule Darmstadt - thomas.barth@h-da.de
 * \author	Prof. Fromm		Hochschule Darmstadt - peter.fromm@h-da.de
 * \date 	12.01.2017
 * \version	0.3
 *
 * \brief Target Information
 *
 * This file provides information about the target, such as the architecture or the derivate.\n
 * The goal is to provide the same environment on different platforms, where the target specific information only needs to be changed
 * in this file.
 *
 *	Changelog:
 *  - 0.3 12.01.17  Barth
 *      - Added Espressif ESP32
 *      - changed TARGET to ARCHITECTURE
 *	- 0.2 02.07.16	Barth
 *		- Introduced the concept of #TARGET_ID to allow a flexible and easy configuration-set selection.
 *		- Added AURIX frequency definitions and timing constraints from the TC29xB Data Sheet V 1.1
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

#ifndef DERIVATE_H_
#define DERIVATE_H_

// -- [ Architectures ]
#define ARCH_PSOC			        1		/**< \brief Target is a Cypress PSoC */
#define ARCH_AURIX_1G				2		/**< \brief Target is a Infineon AURIX Gernation 1 */
#define ARCH_ESP32			        3		/**< \brief Target is a Espressif ESP32 */
    
//***********************************************************************************//
//****************** Definition of supported derivates ******************************//
//***********************************************************************************//

// ------ [ PSoC ]
#define TARGET_PSOC5LP			    25		/**< \brief PSoC 5 LP Identifier */

// ------ [ AURIX ]
/*
 * as the preprocessor cannot compare strings, we have to give integers for the the AURIX derivates:
 * Format: Derivate, Architecture, Step.
 */
#define TARGET_AURIX_TC27xA		    1271	/**< \brief AURIX 1G TC27x A-Step Identifier */
#define TARGET_AURIX_TC27xB		    1272	/**< \brief AURIX 1G TC27x B-Step Identifier */
#define TARGET_AURIX_TC27xC		    1273	/**< \brief AURIX 1G TC27x C-Step Identifier */
#define TARGET_AURIX_TC27xD		    1274	/**< \brief AURIX 1G TC27x D-Step Identifier */

#define TARGET_AURIX_TC29xA		    1291	/**< \brief AURIX 1G TC29x A-Step Identifier */
#define TARGET_AURIX_TC29xB		    1292	/**< \brief AURIX 1G TC29x B-Step Identifier */
#define TARGET_AURIX_TC29xC		    1293	/**< \brief AURIX 1G TC29x C-Step Identifier */

// ------ [ others ]
#define TARGET_ESP32				30		 /**< \brief Target is a Espressif ESP32*/
    
//***********************************************************************************//
//****************** Target Selection ***********************************************//
//***********************************************************************************//

/** \brief Target selection by Identifier */
#define TARGET_ID   			    TARGET_PSOC5LP

//***********************************************************************************//
//****************** global defines selection based on derivate *********************//
//***********************************************************************************//
   
// ------ [ PSoC ]
#if (TARGET_ID==TARGET_PSOC5LP)
	#define ARCHITECTURE			ARCH_PSOC
	#define DERIVATE_NAME   		PSoC5LP
	#define DERIVATE_NUM_CORES		1
// ------ [ AURIX ]
#elif (TARGET_ID==TARGET_AURIX_TC27xA)
	#define ARCHITECTURE			ARCH_AURIX_1G
	#define DERIVATE_NAME   		tc27xa
	#define DERIVATE_NUM_CORES		3
#elif (TARGET_ID==TARGET_AURIX_TC27xB)
	#define ARCHITECTURE			ARCH_AURIX_1G
	#define DERIVATE_NAME   		tc27xb
	#define DERIVATE_NUM_CORES		3
#elif (TARGET_ID==TARGET_AURIX_TC27xC)
	#define ARCHITECTURE			ARCH_AURIX_1G
	#define DERIVATE_NAME   		tc27xc
	#define DERIVATE_NUM_CORES		3
#elif (TARGET_ID==TARGET_AURIX_TC27xD)
	#define ARCHITECTURE			ARCH_AURIX_1G
	#define DERIVATE_NAME   		tc27xd
	#define DERIVATE_NUM_CORES		3

#elif (TARGET_ID==TARGET_AURIX_TC29xA)
	#define ARCHITECTURE			ARCH_AURIX_1G
	#define DERIVATE_NAME   		tc29xa
	#define DERIVATE_NUM_CORES		3
#elif (TARGET_ID==TARGET_AURIX_TC29xB)
	#define ARCHITECTURE			ARCH_AURIX_1G
	#define DERIVATE_NAME   		tc29xb
	#define DERIVATE_NUM_CORES		3
	#define DERIVATE_NUM_CAN_N		4
	#define DERIVATE_NUM_CAN_OBJ	256
	#define DERIVATE_NUM_CAN_LST	16
#elif (TARGET_ID==TARGET_AURIX_TC29xC)
	#define ARCHITECTURE			ARCH_AURIX_1G
	#define DERIVATE_NAME   		tc29xc
	#define DERIVATE_NUM_CORES		3
// ------ [ others ]
#elif (TARGET_ID==TARGET_ESP32)
    #define ARCHITECTURE			ARCH_ESP32
	#define DERIVATE_NAME   		ESP32
	#define DERIVATE_NUM_CORES		2
#endif

//***********************************************************************************//
//****************** derivate specific constraints **********************************//
//***********************************************************************************//

#if(TARGET_ID==TARGET_AURIX_TC29xB)
    
	#define CLK_fBASE   			(150000000ul)				/**< \brief PLL base frequency 				(~150Mhz) 	for [TC29xB] */
	#define CLK_fBACK   			(100000000ul) 				/**< \brief Backup Clock frequency 			(100MHz) 	for [TC29xB] */

	#define CLK_fPLL_MIN			(20000000)					/**< \brief Minimum PLL-Frequency 			(20MHz) 	for [TC29xB] */
	#define CLK_fPLL_MAX			(300000000)					/**< \brief Maximum PLL-Frequency 			(300MHz) 	for [TC29xB] */
	#define CLK_fPLLERAY_MIN		(20000000)					/**< \brief Minimum PLLERAY-Frequency 		(20MHz) 	for [TC29xB] */
	#define CLK_fPLLERAY_MAX		(400000000)					/**< \brief Maximum PLLERAY-Frequency 		(300MHz) 	for [TC29xB] */

	#define CLK_fBAUD1_MAX			(100000000)					/**< \brief Maximum BAUD1-Frequency 		(100MHz) 	for [TC29xB] */
	#define CLK_fBAUD2_MAX			(300000000)					/**< \brief Maximum BAUD2-Frequency 		(300MHz) 	for [TC29xB] */
	#define CLK_fSRI_MAX			(300000000)					/**< \brief Maximum SRI-Frequency 			(300MHz) 	for [TC29xB] */
	#define CLK_fSPB_MAX			(100000000)					/**< \brief Maximum SPB-Frequency 			(100MHz) 	for [TC29xB] */
	#define CLK_fFSI2_MAX			(300000000)					/**< \brief Maximum FSI2-Frequency 			(300MHz) 	for [TC29xB] */
	#define CLK_fFSI_MAX			(100000000)					/**< \brief Maximum FSI-Frequency 			(100MHz) 	for [TC29xB] */
	#define CLK_fCAN_MAX			(100000000)					/**< \brief Maximum CAN-Frequency 			(100MHz) 	for [TC29xB] */
	#define CLK_fERAY_MAX			(80000000)					/**< \brief Maximum ERAY-Frequency 			(100MHz) 	for [TC29xB] */
	#define CLK_fSTM_MAX			(100000000)					/**< \brief Maximum STM-Frequency 			(100MHz) 	for [TC29xB] */
	#define CLK_fGTM_MAX			(100000000)					/**< \brief Maximum GTM-Frequency 			(100MHz) 	for [TC29xB] */
	#define CLK_fASCLINF_MAX		(300000000)					/**< \brief Maximum ASCLIN Fast-Frequency 	(100MHz) 	for [TC29xB] */
	#define CLK_fASCLINS_MAX		(100000000)					/**< \brief Maximum ASCLIN Slow-Frequency 	(100MHz) 	for [TC29xB] */
	#define CLK_fMAX_MAX			(300000000)					/**< \brief Maximum System-Frequency 		(300MHz) 	for [TC29xB] */
	#define CLK_fEBU_MAX			(200000000)					/**< \brief Maximum EBU-Frequency 			(100MHz) 	for [TC29xB] */
	#define CLK_fBBB_MAX			(150000000)					/**< \brief Maximum BBB-Frequency 			(100MHz) 	for [TC29xB] */
	#define CLK_fCPU0_MAX			(300000000)					/**< \brief Maximum Frequency for CPU0 		(300MHz) 	for [TC29xB] */
	#define CLK_fCPU1_MAX			(300000000)					/**< \brief Maximum Frequency for CPU1 		(300MHz) 	for [TC29xB] */
	#define CLK_fCPU2_MAX			(300000000)					/**< \brief Maximum Frequency for CPU2 		(300MHz)	for [TC29xB] */

	#define CLK_tPF					(30)						/**< \brief Program Flash access delay 		(30ns)		for [TC29xB] */
	#define CLK_tPFECC				(10)						/**< \brief Program Flash ECC delay 		(10ns) 		for [TC29xB] */
    
#elif(TARGET_ID==TARGET_ESP32)
    
    #define PIN_DEVICE_MAX          64
    #define EXTI_DEVICE_MAX         32
    #define SPI_DEVICE_MAX          2
    #define UART_DEVICE_MAX         4
    #define CAN_DEVICE_MAX          4
    #define PWM_DEVICE_MAX          4
    #define ADC_DEVICE_MAX          4
    #define FLASH_DEVICE_MAX        4
    #define DAC_DEVICE_MAX          1
    
#endif

#endif /* DERIVATE_H_ */