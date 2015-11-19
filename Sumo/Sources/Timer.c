/*
 * Timer.c
 *
 *  Created on: 09.10.2015
 *      Author: Mikey
 */

#include "Timer.h"
#include "Event.h"
#include "Trigger.h"
#include "Tacho.h"

void TMR_OnInterrupt(void)
{
	TRG_IncTick();
	TACHO_Sample();
}

void TMR_Init(void) {

  /* nothing needed right now */
}

void TMR_Deinit(void) {
  /* nothing needed right now */

}


