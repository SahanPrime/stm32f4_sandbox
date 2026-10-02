# 7. General Purpose Timer (GTIM)

This project introduces the STM32 general-purpose timer peripheral, also commonly referred to as GTIM. It is more advanced than the simple SysTick timer and provides richer timing control for embedded applications.

## Why timers matter

Timers are used to measure elapsed time, trigger periodic events, generate PWM signals, and synchronize hardware operations. Embedded systems almost always need some form of timekeeping and event scheduling.

The general-purpose timer in STM32 devices supports:

- time base generation
- compare events
- pulse width modulation
- update interrupts
- synchronization with other peripherals

## What this project demonstrates

This lesson focuses on configuring a timer for a periodic update event and using it to orchestrate a simple application behavior. The project usually includes:

- `Core/Inc/tim.h` — timer declarations and configuration
- `Core/Src/tim.c` — timer initialization and setup
- `Core/Src/main.c` — application logic reacting to timer events
- GPIO configuration for LED or output pin control
- project files and generated build artifacts

## Typical application flow

A general-purpose timer is configured with a prescaler and auto-reload value, then the application:

- starts the timer
- waits for an update flag or interrupt
- toggles an output or LED
- repeats the process at a defined interval

## Why this is a major learning milestone

The general-purpose timer is one of the most important peripherals in embedded design because it is used in countless applications such as:

- PWM motor control
- digital signal generation
- sensor sampling
- fixed-rate periodic tasks
- hardware timing measurements

## Learning outcomes

After reviewing this project, the reader should understand:

- how prescalers and reload values affect timer periods
- how timers are configured for periodic activity
- how timers interact with GPIO output or interrupts
- the difference between SysTick and a more capable general-purpose timer

## Recommended next step

After learning timer configuration, move to UART communication to learn how the MCU sends data to a terminal and how serial debugging works in practice.

---

GTIM is a key step from basic software delays to a more realistic embedded-system timing model.
