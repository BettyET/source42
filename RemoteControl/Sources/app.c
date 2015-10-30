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
#include "KeyDebounce.h"
#include "RTOS.h"
#include "PDC1.h"
#include "snake.h"

void myEvents(EVNT_Handle event);
void myHeartbeatTrigger(TRG_CallBackDataPtr data);

void APP_Init(void)
{
	Led_Init(all);
	EVNT_Init();
	CLS1_Init();
	myHeartbeatTrigger(NULL);
	SNAKE_Init();
	RTOS_Run();
}

