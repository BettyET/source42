/*
 * app.h
 *
 *  Created on: 25.09.2015
 *      Author: User
 */

#ifndef SOURCES_APP_H_
#define SOURCES_APP_H_

#include "CLS1.h"


void APP_run(void);
void APP_Init(void);
uint8_t APP_ParseCommand(const unsigned char *cmd, bool *handled, const CLS1_StdIOType *io);

#endif /* SOURCES_APP_H_ */
