/*
 * LocalEvent.h
 *
 *  Created on: 08.10.2015
 *      Author: Mikey
 */

#ifndef SOURCES_LOCATRIGGER_H_
#define SOURCES_LOCATRIGGER_H_


/*! \brief Triggers which can be used from the application */
typedef enum {
  TRG_BUZ_BEEP,    /*!< Buzzer beep */
  TRG_KEYPRESS,    /*!< key debounce */
  TRG_HEARTBEAT,   /*!< Heartbeat */
  TRG_BUZZER,	   /*!< Buzzer sound */
  TRG_NOF_TRIGGERS /*!< Must be last! */
} TRG_TriggerKind;



#endif /* SOURCES_LOCATRIGGER_H_ */
