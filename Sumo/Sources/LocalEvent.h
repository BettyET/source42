/*
 * LocalEvent.h
 *
 *  Created on: 08.10.2015
 *      Author: Mikey
 */

#ifndef SOURCES_LOCALEVENT_H_
#define SOURCES_LOCALEVENT_H_


typedef enum EVNT_Handle {
  EVNT_STARTUP,            /*!< System startup Event */
  EVENT_LED_HEARTBEAT_ON,     /*!< LED heartbeat */
  EVENT_LED_HEARTBEAT_OFF,     /*!< LED heartbeat */
  /*!< \todo Your events here */
  EVNT_NOF_EVENTS       /*!< Must be last one! */
} EVNT_Handle;


#endif /* SOURCES_LOCALEVENT_H_ */
