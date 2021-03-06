/**
 * \file
 * \brief Shell Message Queue module.
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This module uses queues for message passing to the Shell.
 */

#include "Platform.h"
#if PL_CONFIG_HAS_SHELL_QUEUE
#include "ShellQueue.h"
#include "FRTOS1.h"

static xQueueHandle SQUEUE_Queue;

#define SQUEUE_LENGTH      32 /* items in queue, that's my buffer size */
#define SQUEUE_ITEM_SIZE   sizeof(char_t*)  /* each item is a single character */

void SQUEUE_SendString(const unsigned char *str) {
	//xQueueSendToBack(SQUEUE_Queue,&str,0);
	  unsigned char *ptr;
	  size_t bufSize;

	  bufSize = UTIL1_strlen(str)+1;
	  ptr = FRTOS1_pvPortMalloc(bufSize);
	  UTIL1_strcpy(ptr, bufSize, str);
	  if (FRTOS1_xQueueSendToBack(SQUEUE_Queue, &ptr, 0)!=pdPASS) {
	    for(;;){} /* ups? */
	  }
}

const unsigned char *SQUEUE_ReceiveMessage(void) {
  const unsigned char *ptr;
  portBASE_TYPE res;

  res = FRTOS1_xQueueReceive(SQUEUE_Queue, &ptr, 0);
  if (res==errQUEUE_EMPTY) {
    return NULL;
  } else {
    return ptr;
  }
}

unsigned short SQUEUE_NofElements(void) {
  return (unsigned short)FRTOS1_uxQueueMessagesWaiting(SQUEUE_Queue);
}

void SQUEUE_Deinit(void) {
  FRTOS1_vQueueUnregisterQueue(SQUEUE_Queue);
  FRTOS1_vQueueDelete(SQUEUE_Queue);
  SQUEUE_Queue = NULL;
}

void SQUEUE_Init(void) {
  SQUEUE_Queue = FRTOS1_xQueueCreate(SQUEUE_LENGTH, SQUEUE_ITEM_SIZE);
  if (SQUEUE_Queue==NULL) {
    for(;;){} /* out of memory? */
  }
  FRTOS1_vQueueAddToRegistry(SQUEUE_Queue, "ShellQueue");
}
#endif /* PL_CONFIG_HAS_SHELL_QUEUE */
