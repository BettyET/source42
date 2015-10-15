/*
 * app.c
 *
 *  Created on: 25.09.2015
 *      Author: User
 */
#include "app.h"
#include "LedDriver.h"
#include "Wait1.h"
#include "CS1.c"
#include "Event.h"
#include "LED1.h"
#include "CLS1.h"
#include "AS1.h"

void myEvents(EVNT_Handle event);

void APP_run(void)
{
	Led_Init(all);
	EVNT_Init();
	CLS1_Init();
	while(1)
	{
		CLS1_SendStr("Hello!\r\n", CLS1_GetStdio()->stdOut);
		EVNT_HandleEvent(myEvents);
		WAIT1_Waitms(500);
	}
}

void myEvents(EVNT_Handle event)
{
	switch(event)
	{
	case EVENT_LED_HEARTBEAT:
		Led_Toggle(led1);
		break;
	}
}
