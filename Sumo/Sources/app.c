/*
 * app.c
 *
 *  Created on: 25.09.2015
 *      Author: studer.yves
 */

#include "app.h"
#include "LED1.h"
#include "LED2.h"

void APP_run(void)
{
	LED1_Init();
	LED2_Init();
	while(1)
	{
		LED1_On();
		LED2_On();
	}
}


