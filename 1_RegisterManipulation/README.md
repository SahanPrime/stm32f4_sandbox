# 1_RegisterManipulation

This folder contains the first STM32F4 register-manipulation exercise in the repository. It introduces direct peripheral access and uses a minimal STM32CubeIDE project layout to explore how registers, startup files, and system configuration fit together.

## What is inside

- `RegisterManipulation/` — main project directory containing the generated firmware sources, startup files, linker script, and build artifacts.
- `.metadata/` — Eclipse/STM32CubeIDE workspace metadata used by the IDE.

## Purpose

This project is focused on learning how to:

- configure GPIO and peripheral blocks through memory-mapped registers
- understand the generated STM32 startup sequence
- inspect the `Core/`, `Drivers/`, and linker configuration structure produced by STM32CubeIDE

For the detailed project structure, see the project folder:

- [RegisterManipulation](./RegisterManipulation/README.md)
