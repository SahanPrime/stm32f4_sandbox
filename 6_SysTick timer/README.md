# 6. SysTick Timer

This project focuses on the Cortex-M SysTick timer, which is a simple but highly useful hardware timer used for delays and periodic scheduling.

## Why SysTick is important

The SysTick timer is one of the easiest ways to create time-based behavior in embedded firmware. It is commonly used for:

- millisecond delays
- basic scheduler ticks
- periodic tasks
- time tracking in bare-metal systems

Because it is built into the Cortex-M core, it is available on many STM32 devices without needing extra peripheral setup beyond configuration.

## What this project demonstrates

This lesson covers:

- SysTick initialization
- configuring the reload value
- measuring time intervals in milliseconds or ticks
- toggling an LED with software delay logic
- using the timer as a reliable time base for simple control loops

## Typical files

The folder usually contains:

- `Core/Inc/systick.h` — declarations for SysTick functions
- `Core/Src/systick.c` — timer configuration and delay logic
- `Core/Src/main.c` — application that uses the delay routine
- `Core/Inc/gpio.h` and `Core/Src/gpio.c` — GPIO configuration for the LED
- generated MCU project support files

## Learning outcomes

After studying this project, the reader should understand:

- how software timing is generated from a hardware timer
- how SysTick reload values relate to time intervals
- what a basic delay loop looks like in bare-metal firmware
- how time-based actions can be built without external timers

## Typical real-world use

A SysTick timer is an excellent building block for:

- periodic status updates
- LED blink timing
- state-machine scheduling
- simple RTOS-style tick generation

## Recommended next step

The next level is learning general-purpose timers such as TIM2, which provide more features such as input capture, output compare, PWM, and interrupt-driven timing.

---

SysTick is a simple, powerful way to bring time into embedded firmware and is one of the first timing tools every MCU learner should understand.
