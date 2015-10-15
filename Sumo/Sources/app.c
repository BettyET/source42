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
#include "SW1.h"
#include "CLS1.h"

void myEvents(EVNT_Handle event);
void APP_run(void)
{
	Led_Init(led1);
	while(1)
	{
		KEY_Scan();

		EVNT_HandleEvent(myEvents);
	}
}

void myEvents(EVNT_Handle event)
{
	switch(event)
	{
	case EVENT_LED_HEARTBEAT:
		Led_Toggle(led1);
		break;
	case EVENT_BUTTON_1_PRESSED:
		CLS1_SendStr("Huhu! Button pressed!!\r\n", CLS1_GetStdio()->stdOut);
		break;
	}

}


