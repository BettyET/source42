/**
 * \file
 * \brief Timer driver
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This module implements the driver for all our timers.
  */

#include "Timer.h"
#include "Event.h"
#include "LED1.h"
#include "CS1.h"
#include "Trigger.h"
#include "Platform.h"

#define BLINKING_DURATION_MS 1000


void TMR_OnInterrupt(void) {
#if HARTBEAT_TRIGGER
	TRG_IncTick();
#endif

#if HARTBEAT_EVENT
	static int i = 0;
	i++;
	if(i==(BLINKING_DURATION_MS/TMR_TICK_MS)){
		i = 0;
		EVNT_SetEvent(EVENT_LED_HEARTBEAT); 	// Event setzen
	}
#endif
}

void TMR_Init(void) {
  /* nothing needed right now */
}

void TMR_Deinit(void) {
  /* nothing needed right now */
}



