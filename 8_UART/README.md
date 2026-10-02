# 8. UART

This project introduces UART communication, which is one of the most common serial interfaces in embedded systems. UART allows the MCU to communicate with a PC, sensors, modules, or debugging tools over a simple serial protocol.

## Purpose of the project

The goal of this example is to initialize the UART peripheral and send text output to a serial terminal. This is extremely useful during debugging because it gives the developer a real-time way to monitor program state, print values, and verify device behavior.

## Why UART is important

Serial communication is essential in firmware development for:

- debugging and logging
- sensor data transmission
- control commands from a host system
- communication with wireless or external modules

In practice, UART is often the easiest and most reliable method of sending debug output from an MCU to a computer.

## Project concept

The firmware configures the serial controller for a defined baud rate and sends output over the TX pin, usually using USART2 on the STM32F4 board. A serial terminal such as Tera Term, PuTTY, or a debugger console can receive the messages.

## Typical files

This folder usually contains:

- MCU project files and generated source tree
- UART configuration files and peripheral setup
- GPIO configuration for serial pins
- `main.c` or equivalent application code that prints strings
- build output files and project metadata

## Learning outcomes

This project shows how to:

- configure a UART peripheral for a given baud rate
- map UART pins to the correct GPIO pins
- send strings and debug messages from firmware to a terminal
- validate hardware communication using a serial monitor

## Expected behavior

Once flashed to the board, the device sends text messages over UART. A user can observe those messages in a terminal and confirm that the MCU is alive and processing correctly.

## Key takeaway

UART is not only a communication standard; it is also a debugging tool. Learning this module is a major step toward practical firmware development and board bring-up.

---

This lesson connects low-level MCU work to the real-world practice of debugging and communication between a board and a host computer.
