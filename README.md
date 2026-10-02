# STM32F4 Sandbox

This repository is a hands-on learning sandbox for STM32F4 bare-metal firmware development, register-level programming, startup code, linker scripts, GPIO control, timers, and UART communication.

The projects are organized as progressive experiments. Each folder focuses on a single concept so the reader can move from low-level MCU fundamentals to more complete firmware patterns.

## Repository overview

The repository is structured as follows:

- [1_RegisterManipulation/README.md](./1_RegisterManipulation/README.md) — direct register manipulation and low-level MCU control
- [2_RegisterManipulation/README.md](./2_RegisterManipulation/README.md) — STM32CubeIDE-generated project for a structured firmware setup
- [3_LinkerandStartupcode/README.md](./3_LinkerandStartupcode/README.md) — custom linker script, reset handler, and startup flow
- [4_Makefile/README.md](./4_Makefile/README.md) — bare-metal build using a Makefile and GCC
- [5_GPIOInputOutput/README.md](./5_GPIOInputOutput/README.md) — GPIO input/output experiments and LED control
- [6_SysTick timer/README.md](./6_SysTick%20timer/README.md) — SysTick delay generation and timing concepts
- [7_GTIM/README.md](./7_GTIM/README.md) — general-purpose timer configuration and interrupt-ready patterns
- [8_UART/README.md](./8_UART/README.md) — UART initialization and serial debugging output

## What this repository teaches

The learning path is designed to help a developer understand:

- how STM32 peripheral registers are mapped in memory
- how startup code and linker scripts control program layout
- how to build firmware outside an IDE with Makefiles
- how GPIO pins are configured for input and output
- how timers generate precise delays and events
- how UART provides debug output and communication

## Hardware assumptions

Most examples target the STM32F401RCTx family and assume a development board with:

- an LED connected to GPIO pin 13
- a 3.3V power rail and ground
- optional UART output over PA2
- a default clock setup compatible with the examples

## Documentation and references

The repository includes:

- `en.dm00096844.pdf` — STM32F4 reference manual
- `STM32F401XB.PDF` — MCU-specific reference document

## Recommended learning order

1. Start with `1_RegisterManipulation` to understand direct register access.
2. Move to `3_LinkerandStartupcode` to understand memory layout and startup.
3. Learn make-based builds in `4_Makefile`.
4. Explore `5_GPIOInputOutput`, `6_SysTick timer`, `7_GTIM`, and `8_UART`.
5. Use the CubeIDE-based `2_RegisterManipulation` project to compare generated code with bare-metal code.

## Notes

This repo is primarily educational, not a commercial firmware framework. It emphasizes clarity over abstraction, so each example is designed to be easy to read, trace, and modify.

---

For detailed project explanations, follow the links above to the README in each lesson folder.
