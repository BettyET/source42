/**
 * \file
 * \brief Key/Switch driver implementation.
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This module implements a generic keyboard driver for up to 7 Keys.
 * It is using macros for maximum flexibility with minimal code overhead.
 */

 #include "Keys.h"
 #include "Event.h"

void KEY_Scan(void) {
  /*! \todo check handling all keys */
	if ( KEY1_Get() )
		EVNT_SetEvent(EVENT_BUTTON_1_PRESSED);
#if PL_COFIG_REMOTE
	if ( KEY2_Get() )
		EVNT_SetEvent(EVENT_BUTTON_2_PRESSED);
	if ( KEY3_Get() )
		EVNT_SetEvent(EVENT_BUTTON_3_PRESSED);
	if ( KEY4_Get() )
		EVNT_SetEvent(EVENT_BUTTON_4_PRESSED);
	if ( KEY5_Get() )
		EVNT_SetEvent(EVENT_BUTTON_5_PRESSED);
	if ( KEY6_Get() )
		EVNT_SetEvent(EVENT_BUTTON_6_PRESSED);
	if ( KEY7_Get() )
		EVNT_SetEvent(EVENT_BUTTON_7_PRESSED);
#endif
}

/*! \brief Key driver initialization */
void KEY_Init(void) {
  /* nothing needed for now */
}

/*! \brief Key driver de-initialization */
void KEY_Deinit(void) {
  /* nothing needed for now */
}
