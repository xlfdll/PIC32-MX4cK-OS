#ifndef ASSERT_H
#define ASSERT_H


/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif
    
#include "FreeRTOSConfig.h"
#include "FreeRTOS.h"
#include "task.h"

    void vApplicationStackOverflowHook(TaskHandle_t xTask, signed char *pcTaskName);
    void vApplicationMallocFailedHook(void);

    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
