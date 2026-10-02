# 5. GPIO Input/Output

This project introduces the most common and foundational peripheral in embedded programming: the GPIO (General Purpose Input/Output) controller.

## Main idea

GPIO pins are used for connection to LEDs, buttons, sensors, external logic, and many other physical signals. The MCU configures each pin as either an input or an output, and then software reads or drives the pin state.

## Why this project matters

GPIO is one of the first peripherals learners work with because it provides visible, immediate results. Blinking an LED, reading a button, or toggling a signal is an easy way to validate that the hardware and software are communicating correctly.

## What the folder contains

This project typically includes:

- `Core/Inc/gpio.h` — GPIO configuration definitions
- `Core/Src/gpio.c` — GPIO initialization and configuration logic
- `Core/Src/main.c` — application logic controlling the LED or reading inputs
- `.ioc` project file used by CubeMX or STM32CubeIDE
- generated HAL and startup support files
- build artifacts in `Debug/`

## Typical behavior

A common example for STM32 boards is:

- configure a pin as output
- toggle it on and off with a delay
- optionally read an external input pin and change behavior based on that state

This allows the learner to see the direct relationship between software configuration and hardware behavior.

## Learning outcomes

This lesson teaches the reader how to:

- configure GPIO modes and settings
- set pins high or low
- read digital inputs from external hardware
- validate board operation with visible LED behavior
- understand how pin configuration affects function and hardware interfacing

## Hardware context

The examples in this repository typically assume an LED connected to GPIO pin 13 and a board with standard STM32F4 peripheral pin mappings. In many STM32 development boards, LED blinking is the first board bring-up exercise.

## Recommended progression

After understanding GPIO, the next natural lessons are:

- SysTick timing
- timer-based control
- UART output and debugging

---

GPIO is the starting point for most embedded firmware projects because it turns software into visible hardware activity.
