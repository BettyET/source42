/*
 * LocalRTOS.c
 *
 *  Created on: 29.10.2015
 *      Author: Mikey
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
#include "FRTOS1.h"
#include "Reflectance.h"

void heartBeat(TRG_CallBackDataPtr data);
void myEvents(EVNT_Handle event);

void MainTask(void *pvParameters){

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
	case EVNT_REF_START_STOP_CALIBRATION:
		REF_CalibrateStartStop();
		break;
	}

}

void heartBeat(TRG_CallBackDataPtr data)
{
	TRG_SetTrigger(TRG_HEARTBEAT, 500, &heartBeat, NULL);
	Led_Toggle(led1);
	Led_Toggle(led2);
}


