# 1. Register Manipulation

This project is the first and most fundamental lesson in the repository. It introduces the idea that STM32 peripherals are controlled by memory-mapped registers, and that a program can directly manipulate these registers to change hardware behavior.

## What this project teaches

The central concept is simple but powerful: on STM32 microcontrollers, the CPU interacts with peripherals by writing to and reading from specific memory addresses. These addresses correspond to hardware registers that control clocks, pins, timers, communication blocks, and more.

Instead of using a high-level abstraction library, the code in this folder demonstrates manual register programming. This is useful because it teaches the exact hardware mechanism behind each function.

## Why this matters

Understanding register-level programming is essential for embedded engineers because it helps with:

- low-level debugging
- understanding HAL and driver-generated code
- porting code between MCUs
- reducing dependence on black-box abstractions
- confirming how hardware features are actually enabled and configured

## Example purpose

The project in this folder is designed to demonstrate direct access to the MCU's peripheral configuration and state registers. It acts as a baseline from which more advanced examples can be built.

## Typical contents in the folder

This folder contains:

- project configuration files used by STM32CubeIDE
- generated firmware skeleton files under `Core/`
- driver headers and source files under `Drivers/`
- linker and startup-related files for the MCU
- `.ioc` configuration files describing board setup in the graphical pin-tool editor

## Project structure

Typical content includes:

- `Core/Inc/` — application and peripheral header files
- `Core/Src/` — source files for application logic and initialization
- `Drivers/` — CMSIS and HAL driver files for the STM32F4 family
- `.project`, `.cproject`, `.mxproject` — IDE metadata and generated project files
- `STM32F401RCTX_FLASH.ld` — memory linker script

## Learning outcome

After studying this project, the reader should be able to:

- identify the role of the memory map in STM32 devices
- read hardware documentation and map it to register addresses
- understand how control bits are set in peripheral registers
- recognize the relationship between software and hardware configuration

## Recommended next step

Once this project is understood, continue to the startup and linker lesson in `../3_LinkerandStartupcode` and then to GPIO and timer projects.

---

This is the foundational exploration of STM32 bare-metal programming in this repository.
