/*
 * LocalEvent.h
 *
 *  Created on: 08.10.2015
 *      Author: User
 */

#ifndef SOURCES_LOCALEVENT_H_
#define SOURCES_LOCALEVENT_H_

typedef enum EVNT_Handle {
  EVNT_STARTUP,            /*!< System startup Event */
  EVENT_LED_HEARTBEAT,     /*!< LED heartbeat */
  EVENT_BUTTON_1_PRESSED,    /*!< Button pressed */
  EVENT_BUTTON_2_PRESSED,
  EVENT_BUTTON_3_PRESSED,
  EVENT_BUTTON_4_PRESSED,
  EVENT_BUTTON_5_PRESSED,
  EVENT_BUTTON_6_PRESSED,
  EVENT_BUTTON_7_PRESSED,
  EVENT_BUTTON_1_LPRESSED,
  EVENT_BUTTON_2_LPRESSED,
  EVENT_BUTTON_3_LPRESSED,
  EVENT_BUTTON_4_LPRESSED,
  EVENT_BUTTON_5_LPRESSED,
  EVENT_BUTTON_6_LPRESSED,
  EVENT_BUTTON_7_LPRESSED,
  EVENT_BUTTON_1_RELEASED,
  EVENT_BUTTON_2_RELEASED,
  EVENT_BUTTON_3_RELEASED,
  EVENT_BUTTON_4_RELEASED,
  EVENT_BUTTON_5_RELEASED,
  EVENT_BUTTON_6_RELEASED,
  EVENT_BUTTON_7_RELEASED,
  EVNT_SNAKE_DOWN,
  EVNT_SNAKE_LEFT,
  EVNT_SNAKE_RIGHT,
  EVNT_SNAKE_UP,
  EVNT_SNAKE_START_PAUSE,
  EVNT_NOF_EVENTS          /*!< Must be last one! */
} EVNT_Handle;



#endif /* SOURCES_LOCALEVENT_H_ */
