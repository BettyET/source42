/*
 * LocalRTOS.c

 *
 *  Created on: 23.10.2015
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
#include "KeyDebounce.h"
#include "FRTOS1.h"

void myEvents(EVNT_Handle event);
void myHeartbeatTrigger(TRG_CallBackDataPtr data);

void MainTask(void *pvParameters)
{
	(void)pvParameters;
	while(1)
	{
		KEYDBNC_Process();
		EVNT_HandleEvent(myEvents);
		FRTOS1_vTaskDelay(50/portTICK_RATE_MS);
	}
}

void myEvents(EVNT_Handle event)
{
	switch(event)
	{
	case EVENT_LED_HEARTBEAT:
		Led_Toggle(led1);
		break;
		/*
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
	case EVENT_BUTTON_1_LPRESSED:
		CLS1_SendStr("Button 1 long pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_2_LPRESSED:
		CLS1_SendStr("Button 2 long pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_3_LPRESSED:
		CLS1_SendStr("Button 3 long pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_4_LPRESSED:
		CLS1_SendStr("Button 4 long pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_5_LPRESSED:
		CLS1_SendStr("Button 5 long pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_6_LPRESSED:
		CLS1_SendStr("Button 6 long pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_BUTTON_7_LPRESSED:
		CLS1_SendStr("Button 7 long pressed!\r\n", CLS1_GetStdio()->stdOut);
		break;
*/
	}
}
void myHeartbeatTrigger(TRG_CallBackDataPtr data){
	Led_Toggle(led1);
	TRG_SetTrigger(TRG_HEARTBEAT, 50, myHeartbeatTrigger, NULL);
}



