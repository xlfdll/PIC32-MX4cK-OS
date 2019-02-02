#include "apptask.h"

static char value = 0;
static void LEDBlinkTask(void *pvParameters);
static void LEDTimerCallback(TimerHandle_t xTimer);

void InitializeHardware(void)
{
    InitializeOnboardLEDs();
}

void InitializeFreeRTOS(void)
{
    TimerHandle_t xTimer;

    xTaskCreate(LEDBlinkTask, "LEDBlink", configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY + 1, NULL);

    xTimer = xTimerCreate("LEDTimer", /* A text name, purely to help debugging. */
                          (1000 / portTICK_PERIOD_MS), /* The timer period. */
                          pdTRUE, /* This is an auto-reload timer, so xAutoReload is set to pdTRUE. */
                          (void *) 0, /* The ID is not used, so can be set to anything. */
                          LEDTimerCallback /* The callback function that inspects the status of all the other tasks. */
                          );

    if (xTimer != NULL)
    {
        xTimerStart(xTimer, 0);
    }
}

static void LEDBlinkTask(void *pvParameters)
{
    while (1)
    {
        value++;

        if (value > 15)
        {
            value = 0;
        }
    }
}

static void LEDTimerCallback(TimerHandle_t xTimer)
{
    SetOnboardLEDs(value);
}