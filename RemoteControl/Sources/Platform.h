/*
 * Platform.h
 *
 *  Created on: 22.10.2015
 *      Author: User
 */

#ifndef SOURCES_PLATFORM_H_
#define SOURCES_PLATFORM_H_


#define PL_CONFIG_HAS_KBI 0

/* Generate heartbeat with events or trigger? */
#define HARTBEAT_EVENT 0
#define HARTBEAT_TRIGGER 1

#define PL_CONFIG_HAS_SNAKE 0
#define PL_HAS_CONFIG_SEMAPHORE 1

#define PL_CONFIG_HAS_SHELL_QUEUE 1

#define PL_CONFIG_HAS_JOYSTICK 1
#define PL_CONFIG_HAS_REMOTE 1
#define PL_CONFIG_HAS_SHELL 1
#define PL_CONFIG_CONTROL_SENDER 1
#define PL_CONFIG_HAS_LED 1
#define PL_CONFIG_HAS_KEYS 1
#define PL_CONFIG_HAS_RADIO 1

#define TMR_TICK_MS  1

/* RTOS included? */
#define PL_CONFIG_HAS_RTOS 1

#endif /* SOURCES_PLATFORM_H_ */
