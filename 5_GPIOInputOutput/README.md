# 5_GPIOInputOutput

This folder contains the GPIO input/output learning project for the STM32F4 sandbox. It demonstrates how to configure GPIO pins, drive an LED, and read a signal state using the STM32 peripheral registers and generated code.

## What is inside

- `Core/` — application source files, GPIO setup, and device initialization code
- `Drivers/` — HAL and CMSIS support files
- `.settings/` — IDE preferences
- `.cproject`, `.mxproject`, `.project` — project configuration files
- `Debug/` — compiled objects and generated firmware image
- `5_GPIOInputOutput.ioc` — STM32CubeMX configuration file
- `STM32F401RCTX_FLASH.ld` — flash memory linker script

## Purpose

This project is focused on learning:

- GPIO port configuration
- LED toggling logic
- digital input reading and pin control
- basic embedded project structure for a GPIO example

This folder is a good reference for both bare-metal and generated-code GPIO workflows.
