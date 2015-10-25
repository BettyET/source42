/* LocalRTOS.c
 *
 *  Created on: 25.10.2015
 *      Author: Rey
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
#include "FRTOS1.h"


void MainTask(void){
		while(1)
	{
		KEYDBNC_Process();
		EVNT_HandleEvent(myEvents);
	}
}