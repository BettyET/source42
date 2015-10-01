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


void APP_run(void)
{
	Led_Init(all);
	while(1)
	{
		CS1_CriticalVariable();
		CS1_EnterCritical();
		Led_On(all);
		WAIT1_Waitms(700);
		Led_Off(all);
		WAIT1_Waitms(700);
		CS1_ExitCritical();
	}
}
