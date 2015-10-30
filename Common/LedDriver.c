/*
 * LedDriver.c
 *
 *  Created on: 25.09.2015
 *      Author: studer.yves
 */

#include "LedDriver.h"
#include "LED1.h"
#include "LED2.h"
#ifdef PL_CONFIG_REMOTE
//#include "LED3.h"
#endif

void Led_Init(const Leds l)
{
	switch(l)
	{
	case led1:
		LED1_Init();
		break;
	case led2:
		LED2_Init();
		break;
#ifdef PL_CONFIG_REMOTE
	case led3:
		//LED3_Init();
		break;
#endif
	case all:
		LED1_Init();
		LED2_Init();
#ifdef 	PL_CONFIG_REMOTE
		//LED3_Init();
#endif
		break;
	}
}

void Led_On(const Leds l)
{
	switch(l)
	{
	case led1:
		LED1_On();
		break;
	case led2:
		LED2_On();
		break;
#ifdef PL_COFIG_REMOTE
	case led3:
		LED3_On();
		break;
#endif
	case all:
		LED1_On();
		LED2_On();
#ifdef 	PL_COFIG_REMOTE
		LED3_On();
#endif
		break;
	}
}

void Led_Off(const Leds l)
{
	switch(l)
	{
	case led1:
		LED1_Off();
		break;
	case led2:
		LED2_Off();
		break;
#ifdef PL_COFIG_REMOTE
	case led3:
		LED3_Off();
		break;
#endif
	case all:
		LED1_Off();
		LED2_Off();
#ifdef 	PL_COFIG_REMOTE
		LED3_Off();
#endif
		break;
	}
}

void Led_Toggle(const Leds l)
{
	switch(l)
	{
	case led1:
		LED1_Neg();
		break;
	case led2:
		LED2_Neg();
		break;
#ifdef PL_COFIG_REMOTE
	case led3:
		LED3_Neg();
		break;
#endif
	case all:
		LED1_Neg();
		LED2_Neg();
#ifdef 	PL_COFIG_REMOTE
		LED3_Neg();
#endif
		break;
	}

}



