@echo off

IF EXIST %1\FreeRTOS (
    pushd FreeRTOS
    xcopy %1\FreeRTOS\Source\*.c . /y
    del croutine.c /q
    
    pushd include
    xcopy %1\FreeRTOS\Source\include\*.* . /y
    del deprecated_definitions.h /q
    del croutine.h /q
    
    pushd portable\PIC32MX
    xcopy %1\FreeRTOS\Source\portable\MPLAB\PIC32MX\*.h . /y
    xcopy %1\FreeRTOS\Demo\PIC32MX_MPLAB\ConfigPerformance.h . /y
    xcopy %1\FreeRTOS\Demo\PIC32MX_MPLAB\FreeRTOSConfig.h . /y
    popd
    
    popd
    
    pushd memory
    xcopy %1\FreeRTOS\Source\portable\MemMang\heap_4.c . /y
    popd
    
    pushd portable\PIC32MX
    xcopy %1\FreeRTOS\Source\portable\MPLAB\PIC32MX\*.c . /y
    xcopy %1\FreeRTOS\Source\portable\MPLAB\PIC32MX\*.S . /y
    xcopy %1\FreeRTOS\Demo\PIC32MX_MPLAB\ConfigPerformance.c . /y
    popd
    
    pushd util
    xcopy %1\FreeRTOS\Demo\PIC32MX_MPLAB\printf-stdarg.c . /y
    popd
    
    popd
)