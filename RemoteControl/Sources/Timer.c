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

int i = 0;
void myEvents(EVNT_Handle event);

void TMR_OnInterrupt(void) {
	i++;
	if(i==(1000/TMR_TICK_MS)){
		i = 0;
		EVNT_SetEvent(EVENT_LED_HEARTBEAT); 	// Event setzen
		EVNT_HandleEvent(myEvents);
	}

}

void TMR_Init(void) {
  /* nothing needed right now */
}

void TMR_Deinit(void) {
  /* nothing needed right now */
}

void myEvents(EVNT_Handle event)
{
	switch(event)
	{
	case EVENT_LED_HEARTBEAT:
		LED1_Neg();
		break;
	}
}

