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
#include "CLS1.h"
#include "Shell.h"
#include "UTIL1.h"

void myEvents(EVNT_Handle event);
void myHeartbeatTrigger(TRG_CallBackDataPtr data);
static uint8_t APP_PrintHelp(const CLS1_StdIOType *io);
static uint8_t APP_PrintStatus(const CLS1_StdIOType *io);

void APP_Init(void) {
	Led_Init(all);
	EVNT_Init();
	CLS1_Init();
	myHeartbeatTrigger(NULL);
#if PL_CONFIG_HAS_SNAKE
	SNAKE_Init(); // Kreiert Snake- Task
#endif
	SHELL_Init(); // Kreiert Shell- Task
	RTOS_Run();
}

uint8_t APP_ParseCommand(const unsigned char *cmd, bool *handled,
		const CLS1_StdIOType *io) {
	uint32_t val;
	const unsigned char *p;
	if (UTIL1_strcmp((char*)cmd, CLS1_CMD_HELP) == 0 || UTIL1_strcmp((char*)cmd,
			"App help") == 0) {
		*handled = TRUE;
		return APP_PrintHelp(io);
	} else if (UTIL1_strcmp((char*)cmd, CLS1_CMD_STATUS) == 0
			|| UTIL1_strcmp((char*)cmd, "App status") == 0) {
		*handled = TRUE;
		return APP_PrintStatus(io);
	}
	return ERR_OK;
}

static uint8_t APP_PrintHelp(const CLS1_StdIOType *io) {
	CLS1_SendHelpStr("App", "App commands\r\n", io->stdOut);
	CLS1_SendHelpStr(" help|status", "Print help or statusinformation\r\n",
			io->stdOut);
	return ERR_OK;
}
static uint8_t APP_PrintStatus(const CLS1_StdIOType *io) {
	CLS1_SendStatusStr("App", "42\r\n", io->stdOut);
	return ERR_OK;
}
