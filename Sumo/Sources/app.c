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
#include "CLS1.h"
#include "UTIL1.h"
#include "USB1.h"
#include "ShellQueue.h"

void heartBeat(TRG_CallBackDataPtr data);
void myEvents(EVNT_Handle event);

void App_init(void){

	Led_Init(all);
	TRG_Init();
	EVNT_Init();
	heartBeat(NULL);
	BUZ_Init();
	SQUEUE_Init();
	SHELL_Init();
	/* RTOS darf erst am schluss angelassen werden */
	RTOS_Run();
}
/* App-Spezifische Konsole */


uint8_t APP_PrintHelp(CLS1_ConstStdIOType *io)
{
	SHELL_SendString("\r\n");
//	SHELL_SendString("--------------------------------------------------------------");
//	SHELL_SendString("\r\n");
//	SHELL_SendString("Application s42");
//	SHELL_SendString("\r\n");
//	SHELL_SendString("--------------------------------------------------------------");
//	SHELL_SendString("\r\n");
//	SHELL_SendString("APP; Group of APP commands\r\n");
	SHELL_SendString("  help|status; Print help or status information\r\n");
    return ERR_OK;
}

uint8_t APP_PrintStatus(CLS1_ConstStdIOType *io)
{
	SHELL_SendString((unsigned char*)"\r\n");
	SHELL_SendString((unsigned char*)"--------------------------------------------------------------");
	SHELL_SendString((unsigned char*)"\r\n");
	SHELL_SendString((unsigned char*)"Application s42 Status");
	SHELL_SendString((unsigned char*)"\r\n");
	SHELL_SendString((unsigned char*)"--------------------------------------------------------------");
	SHELL_SendString((unsigned char*)"\r\n");
    SHELL_SendString((unsigned char*)"Alle Systeme nominal und laufen\r\n");
    return ERR_OK;
}

uint8_t APP_ParseCommand(const uint8_t *cmd, bool *handled, CLS1_ConstStdIOType *io)
{
  if (UTIL1_strcmp((char*)cmd, CLS1_CMD_HELP)==0 || UTIL1_strcmp((char*)cmd, "APP help")==0)
  {
	*handled = TRUE;
	return APP_PrintHelp(io);
  }
  else if ((UTIL1_strcmp((char*)cmd, CLS1_CMD_STATUS)==0) || (UTIL1_strcmp((char*)cmd, "APP status")==0))
  {
    *handled = TRUE;
    return APP_PrintStatus(io);
  }
  else if ((UTIL1_strcmp((char*)cmd, CLS1_CMD_STATUS)==0) || (UTIL1_strcmp((char*)cmd, "Gugus")==0))
  {
	  SHELL_SendString((unsigned char*)"HiHi \r\n");
    *handled = TRUE;
    return ERR_OK;
  }
  return ERR_OK; /* no error */
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


