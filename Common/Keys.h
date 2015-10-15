/**
 * \file
 * \brief Key/switch driver interface.
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This module implements a generic keyboard driver for up to 4 Keys.
 * It is using macros for maximum flexibility with minimal code overhead.
 */

#ifndef KEYS_H_
#define KEYS_H_

void KEY_Scan(void);

//typedef enum {
//  KEY_BTN1, /*!< button 1 */
//#if PL_COFIG_REMOTE
//  KEY_BTN2, /*!< button 2 */
//  KEY_BTN3, /*!< button 3 */
//  KEY_BTN4, /*!< button 4 */
//  KEY_BTN5, /*!< button 5 */
//  KEY_BTN6, /*!< button 6 */
//  KEY_BTN7, /*!< button 7 */
//#endif
//  KEY_BTN_LAST /*!< must be last */
//} KEY_Buttons;


  #include "SW1.h"
  #define KEY1_Get()  (!(SW1_GetVal()))
    /*!< Macro which returns TRUE if key is pressed */

#ifdef PL_CONFIG_REMOTE
	#include "SW2.h"
	#include "SW3.h"
	#include "SW4.h"
	#include "SW5.h"
	#include "SW6.h"
	#include "SW7.h"

	#define KEY2_Get()  (!(SW2_GetVal()))
	#define KEY3_Get()  (!(SW3_GetVal()))
	#define KEY4_Get()  (!(SW4_GetVal()))
	#define KEY5_Get()  (!(SW5_GetVal()))
	#define KEY6_Get()  (!(SW6_GetVal()))
	#define KEY7_Get()  (!(SW7_GetVal()))
/*!< Macro which returns TRUE if key is pressed */

#endif
#endif /* KEYS_H_ */
