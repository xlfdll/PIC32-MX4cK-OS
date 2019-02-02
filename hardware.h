#ifndef HARDWARE_H    /* Guard against multiple inclusion */
#define HARDWARE_H

/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif

#include <peripheral/ports.h>   // Port and interrput setup functions

    void InitializeOnboardLEDs(void);

    void SetOnboardLEDs(unsigned char value);

    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* HARDWARE_H */