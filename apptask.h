#ifndef APPTASK_H    /* Guard against multiple inclusion */
#define APPTASK_H

/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif

    /* Hardware */
#include "hardware.h"

    /* FreeRTOS - Include more header files when needed*/
#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"

    void InitializeHardware(void);
    void InitializeFreeRTOS(void);

    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* APPTASK_H */