# 7_GTIM

This folder contains the general-purpose timer example for the STM32F4 sandbox. It demonstrates timer-based periodic updates and uses a TIM2 configuration for a simple LED toggle workflow.

## What is inside

- `Core/` — source files for GPIO, timer configuration, and the main loop
- `Drivers/` — HAL and CMSIS driver code
- `.settings/` — IDE-specific configuration
- `Debug/` — build output, object files, linker map, and ELF image
- `Core/Inc/tim.h` — timer initialization declarations
- `Core/Src/tim.c` — timer configuration implementation
- `7_GTIM.ioc` — STM32CubeMX project configuration

## Purpose

This project is intended to teach:

- how to configure a general-purpose timer (TIM2)
- how to use timer update events and flags
- how to create periodic delays or state changes without blocking loops
- how timer peripherals integrate with GPIO-based outputs

This example is a good bridge between simple delay code and more complex timer-driven firmware.
