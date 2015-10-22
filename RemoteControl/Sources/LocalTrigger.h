/*
 * LocalTrigger.h
 *
 *  Created on: 22.10.2015
 *      Author: User
 */

#ifndef LOCALTRIGGER_H_
#define LOCALTRIGGER_H_

/*! \brief Triggers which can be used from the application */
typedef enum {
  /*! \todo Extend the list of triggers as needed */
  TRG_KEYPRESS,    /*!< key debounce */
  TRG_HEARTBEAT,   /*!< Heartbeat */
  TRG_NOF_TRIGGERS /*!< Must be last! */
} TRG_TriggerKind;




#endif /* LOCALTRIGGER_H_ */
