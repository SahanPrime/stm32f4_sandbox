# 3_LinkerandStartupcode

This folder contains the linker and startup code experiment for the STM32F4 sandbox. It focuses on the lowest-level initialization path before `main()` runs.

## What is inside

- `main.c` — simple bare-metal application entry point
- `stm32_f_startup.c` — custom reset handler and vector table setup
- `stm32_f4.ld` — custom linker script defining memory regions and sections
- `main.o`, `stm32_f_startup.o` — compiled object files
- `3_LinkerandStartup.elf` — built firmware image for the demo

## Purpose

This section helps explain:

- how the reset handler is called
- where the vector table lives
- how sections are placed in flash and RAM
- how the linker script controls the memory layout

This is one of the foundational examples for understanding how a Cortex-M program starts and how memory is organized before application code executes.
