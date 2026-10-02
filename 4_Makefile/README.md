# 4. Makefile Project

This project demonstrates how to build an STM32 firmware project using a Makefile instead of relying on an IDE. It is a useful lesson for understanding the command-line build flow and the underlying GCC toolchain.

## Why build with Make?

Many embedded developers work on command-line builds at some point because they need:

- reproducible build scripts
- CI/CD automation
- easier cross-platform builds
- a clearer understanding of compiler and linker steps

This project shows a practical example of a direct, transparent build pipeline for an STM32 target.

## What this project demonstrates

The folder contains:

- `main.c` — application code
- `stm32_f_startup.c` — reset and startup implementation
- `stm32_f4.ld` — linker script
- `Makefile` — build instructions used by `make`
- generated build outputs such as `.elf`, `.map`, `.o`, and binary artifacts

The build process compiles the firmware, links it with the custom linker script, and produces the final binary image for the target.

## Typical build flow

The project is built using GCC-based commands similar to:

- `arm-none-eabi-gcc`
- `arm-none-eabi-objdump` or equivalent
- linker steps that generate the firmware image

This lesson helps the learner understand how an IDE usually hides the command-line steps, and how the same operations are performed manually.

## Important concepts covered

- compile and link stages
- object files and intermediate artifacts
- linker script integration
- startup and reset symbols
- firmware image generation
- cleanup and rebuild commands

## Why it is useful in a learning repository

This project makes the build process visible. It allows the learner to see how code, startup routines, and memory layout come together into a final executable.

## Learning outcomes

After studying this project, the reader should be able to:

- write or read a simple Makefile for embedded builds
- understand what the compiler and linker each do
- produce firmware binaries from source code
- work with bare-metal projects outside a graphical IDE

## Recommended next step

Once the build flow is clear, move to GPIO projects and then to timer/UART applications to see how firmware logic interacts with hardware peripherals.

---

This folder is a practical introduction to the embedded command-line build process.
