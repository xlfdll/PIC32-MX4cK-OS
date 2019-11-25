#ifndef CONFIG_BITS_H    /* Guard against multiple inclusion */
#define CONFIG_BITS_H

/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif

    /* ------------------------------------------------------------ */
    /* PIC32 Configuration Settings */
    /* ------------------------------------------------------------ */

    /* Oscillator Settings
     */
#pragma config FNOSC = PRIPLL // Oscillator selection
#pragma config POSCMOD = EC // Primary oscillator mode
#pragma config FPLLIDIV = DIV_2 // PLL input divider
#pragma config FPLLMUL = MUL_20 // PLL multiplier
#pragma config FPLLODIV = DIV_1 // PLL output divider
#pragma config FPBDIV = DIV_8 // Peripheral bus clock divider
#pragma config FSOSCEN = OFF // Secondary oscillator enable

    /* Clock control settings
     */
#pragma config IESO = OFF // Internal/external clock switchover
#pragma config FCKSM = CSDCMD // Clock switching (CSx)/Clock monitor (CMx)
#pragma config OSCIOFNC = OFF // Clock output on OSCO pin enable

    /* USB Settings
     */
#pragma config UPLLEN = ON // USB PLL enable
#pragma config UPLLIDIV = DIV_2 // USB PLL input divider

    /* Other Peripheral Device settings
     */
#pragma config FWDTEN = OFF // Watchdog timer enable
#pragma config WDTPS = PS1024 // Watchdog timer post-scaler

    /* Code Protection settings
     */
#pragma config CP = OFF // Code protection
#pragma config BWP = OFF // Boot flash write protect
#pragma config PWP = OFF // Program flash write protect

    /* Debug settings
     */
    //#pragma config ICESEL = ICS_PGx2 // ICE pin selection

    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* CONFIG_BITS_H */