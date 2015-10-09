/*
 * LedDriver.h
 *
 *  Created on: 25.09.2015
 *      Author: studer.yves
 */

#ifndef SOURCES_LEDDRIVER_H_
#define SOURCES_LEDDRIVER_H_
typedef enum Leds_e{
	led1,
	led2,
	led3,
	all
}Leds;

void Led_Init(const Leds led);
void Led_On(const Leds led);
void Led_Off(const Leds led);
void Led_Toggle(const Leds led);




#endif /* SOURCES_SOURCES_LEDDRIVER_H_ */
