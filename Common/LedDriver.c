/*
 * LedDriver.c
 *
 *  Created on: 25.09.2015
 *      Author: studer.yves
 */

#include "LedDriver.h"
#include "LED1.h"
#include "LED2.h"
#ifdef PL_COFIG_REMOTE
#include "LED3.h"
#endif

void Led_Init(const Leds l)
{
	switch(l)
	{
	case 1:
		LED1_Init();
		break;
	case 2:
		LED2_Init();
		break;
#ifdef PL_COFIG_REMOTE
	case 3:
		LED3_Init();
		break;
#endif
	}
}

void Led_On(const Leds l)
{
	switch(l)
	{
	case 1:
		LED1_On();
		break;
	case 2:
		LED2_On();
		break;
#ifdef PL_COFIG_REMOTE
	case 3:
		LED3_On();
		break;
#endif
	}
}

void Led_Off(const Leds l)
{
	switch(l)
	{
	case 1:
		LED1_Off();
		break;
	case 2:
		LED2_Off();
		break;
#ifdef PL_COFIG_REMOTE
	case 3:
		LED3_Off();
		break;
#endif
	}
}



