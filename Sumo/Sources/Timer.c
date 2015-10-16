/*
 * Timer.c
 *
 *  Created on: 09.10.2015
 *      Author: Mikey
 */

#include "Timer.h"
#include "Event.h"
#include "Trigger.h"

#define BLINKING_DURATION_MS 10

void TMR_OnInterrupt(void) {

	static int count = 0;

	count++;
	if(count==(BLINKING_DURATION_MS/TMR_TICK_MS)){
		count = 0;
		TRG_IncTick();
	}
}

void TMR_Init(void) {

  /* nothing needed right now */
}

void TMR_Deinit(void) {
  /* nothing needed right now */

}


