/*
 * app.h
 *
 *  Created on: 25.09.2015
 *      Author: studer.yves
 */

#ifndef SOURCES_APP_H_
#define SOURCES_APP_H_
#include "CLS1.h"

void APP_run(void);

void App_init(void);
uint8_t APP_ParseCommand(const uint8_t *cmd, bool *handled, CLS1_ConstStdIOType *io);


#endif /* SOURCES_APP_H_ */
