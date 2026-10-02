# 4_Makefile

This folder contains a bare-metal STM32F4 project built using a custom GNU Makefile. It demonstrates how to compile and link firmware without relying on an IDE-generated build process.

## What is inside

- `Makefile` — build instructions for compiling and linking the firmware
- `main.c` — application entry point
- `stm32_f_startup.c` — startup code and reset handler
- `stm32_f4.ld` — linker script for memory layout
- `main.o`, `stm32_f_startup.o` — intermediate object files
- `4_makefile_project.elf` — final ELF output
- `4_makefile_project.map` — linker memory map output

## Purpose

This example shows how to:

- build firmware from the command line with `make`
- define a Cortex-M startup sequence manually
- link custom memory sections using a linker script
- generate a binary image suitable for flashing onto an STM32 board

It is useful for learners who want to understand how project automation works outside of STM32CubeIDE.
