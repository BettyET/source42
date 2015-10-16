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
#include "Keys.h"
#include "Trigger.h"
#include <stddef.h> /* for NULL */

void heartBeat(TRG_CallBackDataPtr data);
void myEvents(EVNT_Handle event);
void APP_run(void)
{
	Led_Init(led1);
	TRG_Init();
	EVNT_Init();
	heartBeat(NULL);

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
	case EVENT_BUTTON_1_PRESSED:
		CLS1_SendStr("Huhu! Button pressed!!\r\n", CLS1_GetStdio()->stdOut);
		break;
	}

}

void heartBeat(TRG_CallBackDataPtr data)
{
	TRG_SetTrigger(TRG_HEARTBEAT, 50, &heartBeat, NULL);
	Led_Toggle(led1);
}


