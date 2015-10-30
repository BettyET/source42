/*
 * app.c
 *
 *  Created on: 25.09.2015
 *      Author: studer.yves
 */

#include "app.h"
#include "Platform.h"
#include "LedDriver.h"
#include "Wait1.h"
#include "Event.h"
#include "SW1.h"
#include "KeyDebounce.h"
#include "Trigger.h"
#include "Buzzer.h"
#include "Debug.h"
#include <stddef.h> /* for NULL */
#include "RTOS.h"
#include "Shell.h"


void heartBeat(TRG_CallBackDataPtr data);
void myEvents(EVNT_Handle event);

void App_init(void){

	Led_Init(led1);
	TRG_Init();
	EVNT_Init();
	heartBeat(NULL);
	BUZ_Init();
	SHELL_Init();

	/* RTOS darf erst am schluss angelassen werden */
	RTOS_Run();
}

/**
 *  Benutzen wenn kein RTOS aktiv
 */
//void APP_run(void)
//{
//	Led_Init(led1);
//	TRG_Init();
//	EVNT_Init();
//	heartBeat(NULL);
//	BUZ_Init();
//	RTOS_Run();
//
//	while(1)
//	{
//		KEYDBNC_Process();
//		EVNT_HandleEvent(myEvents);
//	}
//}


/* neu in LocalRTOS */
//void myEvents(EVNT_Handle event)
//{
//	switch(event)
//	{
//	case EVENT_BUTTON_1_PRESSED:
//		sendDebugMessage("Huhu! Button pressed!!\r\n");
//		BUZ_Beep(500,1000);
//		break;
//	}
//
//}
//
/* neu in LocalRTOS */
//void heartBeat(TRG_CallBackDataPtr data)
//{
//	TRG_SetTrigger(TRG_HEARTBEAT, 500, &heartBeat, NULL);
//	Led_Toggle(led1);
//}


