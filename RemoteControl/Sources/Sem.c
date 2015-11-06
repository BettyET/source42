/**
 * \file
 * \brief Semaphore usage
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * Module using semaphores.
 */

#include "Platform.h" /* interface to the platform */
#if PL_HAS_CONFIG_SEMAPHORE
#include "FRTOS1.h"
#include "Sem.h"
#include "LedDriver.h"

static void vSlaveTask(void* pvParameters) {
  /*! \todo Implement functionality */
}

static void vMasterTask(void* pvParameters) {
  /*! \todo Implement functionality */
}

void SEM_Deinit(void) {
  /* nothing */
}

/*! \brief Initializes module */
void SEM_Init(void) {
  /*! \todo Implement functionality */
#if 0
  if (FRTOS1_xTaskCreate(vMasterTask, "Master", configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY, NULL) != pdPASS) {
    for(;;){} /* error */
  }
#endif
}
#endif /* PL_HAS_CONFIG_SEMAPHORE */
