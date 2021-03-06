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
  EVENT_BUTTON_1_PRESSED,
  EVENT_BUTTON_1_LPRESSED,
  EVENT_BUTTON_1_RELEASED,
  EVNT_REF_START_STOP_CALIBRATION,
  EVNT_NOF_EVENTS       /*!< Must be last one! */
} EVNT_Handle;


#endif /* SOURCES_LOCALEVENT_H_ */
