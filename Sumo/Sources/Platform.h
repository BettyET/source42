/*
 * Platform.h
 *
 *  Created on: 22.10.2015
 *      Author: studer.yves
 */

#ifndef SOURCES_PLATFORM_H_
#define SOURCES_PLATFORM_H_

#include "PE_Types.h"


#define PL_GET_DEBUG_INFOS 1
#define PL_CONFIG_HAS_KBI 0

/* RTOS */
#define PL_CONFIG_HAS_RTOS 1
#define PL_CONFIG_HAS_BLUETOOTH 1

/* Shell Queue availability */
#define PL_CONFIG_HAS_SHELL_QUEUE 1
#define PL_CONFIG_HAS_SHELL 1

/* nRF module availability */
#define PL_CONFIG_HAS_RADIO 1
#define PL_CONFIG_HAS_REMOTE 1

#define PL_CONFIG_BOARD_IS_ROBO 1

/* Timer-Einstellung */
#define TMR_TICK_MS  1

/* Line Follow*/
#define PL_CONFIG_HAS_LINE_FOLLOW 1

/* Flash Speicher */
#define PL_CONFIG_HAS_CONFIG_NVM 1

#define PL_CONFIG_HAS_LINE_MAZE 1



#define PL_CONFIG_HAS_PID 1
#define PL_CONFIG_HAS_MOTOR 1
#define PL_CONFIG_HAS_DRIVE 1
#define PL_CONFIG_HAS_LED 1
#define PL_CONFIG_HAS_BUZZER 1

#define PL_CONFIG_HAS_USB_CDC 1

#endif /* SOURCES_PLATFORM_H_ */
