#include "MX4cK.h"

/* Hardware specific functions */
#include "ConfigPerformance.h"

/* FreeRTOS */
#include "FreeRTOS.h"
#include "task.h"

/* Application-specific functions */
#include "apptask.h"

static void SetupMCU(void);

int main(void)
{
    SetupMCU();
    
    SetupHardware();
    SetupFreeRTOS();
    
    vTaskStartScheduler();

    return 0;
}

static void SetupMCU(void)
{
    /* Configure the hardware for maximum performance. */
    vHardwareConfigurePerformance();

    /* Setup to use the external interrupt controller. */
    vHardwareUseMultiVectoredInterrupts();

    portDISABLE_INTERRUPTS();
}