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



void APP_run(void)
{
	Led_Init(all);
	EVNT_Init();

	while(1)
	{
	}
}

