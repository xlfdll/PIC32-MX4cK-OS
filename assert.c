#include "assert.h"

void vApplicationStackOverflowHook(TaskHandle_t xTask, signed char *pcTaskName)
{
    // TODO: Handle stack overflow
    
    taskDISABLE_INTERRUPTS();
    for( ;; );
}

void vApplicationMallocFailedHook(void)
{
    // TODO: Handle malloc failure
    
    taskDISABLE_INTERRUPTS();
    for( ;; );
}

void vAssertCalled(const char *pcFileName, unsigned long ulLine)
{
    // TODO: Show assert failed message
    
    taskDISABLE_INTERRUPTS();
    for( ;; );
}