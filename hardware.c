#include "hardware.h"

void InitializeOnboardLEDs(void)
{
    PORTSetPinsDigitalOut(IOPORT_B, BIT_10 | BIT_11 | BIT_12 | BIT_13);
    PORTClearBits(IOPORT_B, BIT_10 | BIT_11 | BIT_12 | BIT_13);
}

void SetOnboardLEDs(unsigned char value)
{
    value &= 0x0000000F;

    if (value >= 0 && value <= 15)
    {
        PORTWrite(IOPORT_B, (BIT_10 | BIT_11 | BIT_12 | BIT_13) & (value << 10));
    }
}