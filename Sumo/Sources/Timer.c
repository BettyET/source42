/*
 * Timer.c
 *
 *  Created on: 09.10.2015
 *      Author: Mikey
 */

#include "Timer.h"
#include "Event.h"
#include "Trigger.h"


void TMR_OnInterrupt(void)
{
	TRG_IncTick();
}

void TMR_Init(void) {

  /* nothing needed right now */
}

void TMR_Deinit(void) {
  /* nothing needed right now */

}


