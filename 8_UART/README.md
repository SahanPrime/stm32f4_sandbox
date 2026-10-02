# 8_UART

This folder contains the UART communication example for the STM32F4 sandbox. It demonstrates how to initialize the serial peripheral and send text output to a terminal.

## What is inside

- `Core/` — application code, UART initialization, GPIO setup, and main loop
- `Drivers/` — CMSIS/HAL integration files
- `Debug/` — compiled object files and ELF output
- `.settings/` — IDE workspace configuration
- `Core/Inc/uart.h` — UART declarations
- `Core/Src/uart.c` — UART peripheral initialization and send logic
- `8_UART.ioc` — STM32CubeMX project configuration

## Purpose

This project focuses on:

- USART/UART configuration on STM32F4
- serial output to a PC console or debugging terminal
- using `printf`-style output over a UART peripheral
- debugging and validating firmware behavior from a serial monitor

This example is useful for learning how embedded software communicates with external devices and debugging tools.
