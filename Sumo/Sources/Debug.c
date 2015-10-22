/*
 * Debug.c
 *
 *  Created on: 22.10.2015
 *      Author: studer.yves
 */
#include "Debug.h"
#include "Platform.h"
#include "CLS1.h"

void sendDebugMessage(const char *str)
{
#if PL_GET_DEBUG_INFOS
		CLS1_SendStr(str, CLS1_GetStdio()->stdOut);
#endif
}

void sendErrorMessage(const char *str)
{
	CLS1_SendStr(str, CLS1_GetStdio()->stdErr);
}

