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
#include "Keys.h"
#include "Trigger.h"

void myEvents(EVNT_Handle event);
void myHeartbeatTrigger(TRG_CallBackDataPtr data);

void APP_run(void)
{
	Led_Init(all);
	EVNT_Init();
	CLS1_Init();
	myHeartbeatTrigger(NULL);
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
		CLS1_SendStr("Button 1 pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_2_PRESSED:
		CLS1_SendStr("Button 2 pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_3_PRESSED:
		CLS1_SendStr("Button 3 pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_4_PRESSED:
		CLS1_SendStr("Button 4 pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_5_PRESSED:
		CLS1_SendStr("Button 5 pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_6_PRESSED:
		CLS1_SendStr("Button 6 pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_7_PRESSED:
		CLS1_SendStr("Button 7 pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	}
}
void myHeartbeatTrigger(TRG_CallBackDataPtr data){
	Led_Toggle(led1);
	TRG_SetTrigger(TRG_HEARTBEAT, 50, myHeartbeatTrigger, NULL);
}
