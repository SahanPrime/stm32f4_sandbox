# 3. Linker and Startup Code

This project covers one of the most important but often overlooked parts of embedded firmware: how the program is placed in memory and how execution begins when the MCU resets.

## Why startup and linker code matters

When an MCU powers on or resets, it does not magically jump into `main()`. Instead, the processor begins execution at a reset vector, which points to a startup routine. That startup routine configures the stack, initializes data sections, and then transfers control to the user application.

The linker script defines where code, data, stack, and other memory regions live in flash and RAM. Without the correct linker layout, the program may fail to run or behave unpredictably.

## Main ideas in this project

This folder contains the building blocks necessary to understand:

- the reset handler and vector table
- stack initialization
- `.data` and `.bss` section setup
- startup assembly or C startup logic
- custom memory layout defined in the linker script

## Typical contents

This project generally contains:

- `main.c` — the application entry point
- `stm32_f_startup.c` — custom startup implementation and vector table
- `stm32_f4.ld` — the linker script defining memory regions and section placement
- compiled output files such as `.elf`, `.o`, and `.map`

## Why this is valuable

A program can only run correctly if:

- the stack pointer is valid
- the vector table is correctly mapped
- flash and RAM regions are properly allocated
- the reset and interrupt handlers are defined correctly

This project is the foundation for understanding how embedded firmware is loaded and launched on an STM32 chip.

## Learning outcomes

After working with this lesson, the reader should understand:

- how the microcontroller starts execution after reset
- how the linker decides where code and variables live in memory
- how the startup code prepares the environment before `main()`
- why memory layout is critical for correct firmware operation

## Relationship to the rest of the repository

This folder is essential before moving into practical peripheral tasks like GPIO, SysTick, timers, and UART. It explains the lower-level execution environment that all of those projects rely on.

---

This is the point where the learner transitions from writing simple C code to understanding the complete startup and memory model of an embedded system.
