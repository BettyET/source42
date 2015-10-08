/*
 * app.c
 *
 *  Created on: 25.09.2015
 *      Author: studer.yves
 */

#include "app.h"
#include "LedDriver.h"
#include "Wait1.h"
#include "Event.h"


void myEvents(EVNT_Handle event);
void APP_run(void)
{
	Led_Init(led1);
	while(1)
	{
		EVNT_HandleEvent(myEvents);
		EVNT_SetEvent(EVENT_LED_HEARTBEAT_ON);
		EVNT_HandleEvent(myEvents);
		WAIT1_Waitms(700);
		EVNT_SetEvent(EVENT_LED_HEARTBEAT_OFF);
		EVNT_HandleEvent(myEvents);
		WAIT1_Waitms(700);
	}
}

void myEvents(EVNT_Handle event)
{
	switch(event)
	{
	case EVENT_LED_HEARTBEAT_ON:
		Led_On(led1);
		break;
	case EVENT_LED_HEARTBEAT_OFF:
		Led_Off(led1);
		break;
	}
}


