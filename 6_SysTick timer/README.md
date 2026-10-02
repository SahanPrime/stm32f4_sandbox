# 6_SysTick timer

This folder contains the SysTick timing experiment for the STM32F4 sandbox. It demonstrates a millisecond-delay implementation using the Cortex-M system timer.

## What is inside

- `Core/` — main application, GPIO config, and SysTick driver files
- `Drivers/` — HAL and CMSIS support headers and sources
- `.settings/` — IDE project settings
- `Debug/` — compiler-generated output and build artifacts
- `Core/Src/systick.c` — SysTick configuration and delay functions
- `Core/Inc/systick.h` — SysTick declarations
- `6_SysTicktimer.ioc` — STM32CubeMX configuration file

## Purpose

This tutorial focuses on:

- configuring the SysTick peripheral
- generating millisecond delays without external timers
- toggling an LED in a software-timed loop
- integrating the timing logic into a simple embedded application

This is a foundational example for understanding timing and scheduling basics on ARM Cortex-M devices.
