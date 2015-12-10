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
#include "Remote.h"


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


void myHeartbeatTrigger(TRG_CallBackDataPtr data){
	Led_Toggle(led1);
	TRG_SetTrigger(TRG_HEARTBEAT, 50, myHeartbeatTrigger, NULL);
}



