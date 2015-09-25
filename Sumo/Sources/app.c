/*
 * app.c
 *
 *  Created on: 25.09.2015
 *      Author: studer.yves
 */

#include "app.h"
#include "LedDriver.h"

void APP_run(void)
{
	while(1)
	{
		Led_On(led1);
	}
}


