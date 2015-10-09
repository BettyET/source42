/*
 * Timer.c
 *
 *  Created on: 09.10.2015
 *      Author: Mikey
 */

#include "Timer.h"
#include "Event.h"

void TMR_OnInterrupt(void) {
  /* this one gets called from an interrupt!!!! */
  /*! \todo Add code for a blinking LED here */

	EVNT_SetEvent(EVENT_LED_HEARTBEAT);

}

void TMR_Init(void) {
  /* nothing needed right now */
}

void TMR_Deinit(void) {
  /* nothing needed right now */
}


