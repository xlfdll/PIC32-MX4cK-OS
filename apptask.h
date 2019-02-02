#ifndef APPTASK_H    /* Guard against multiple inclusion */
#define APPTASK_H

/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif
    
/* FreeRTOS - Include more header files when needed*/
#include "FreeRTOS.h"
#include "task.h"
    
    void SetupHardware(void);
    void SetupFreeRTOS(void);

    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* APPTASK_H */