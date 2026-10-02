# 2. Register Manipulation

This folder contains a second, more structured version of the register manipulation example. Unlike the first project, which focuses on direct and minimal understanding, this project is built in a way that reflects a typical STM32CubeIDE workflow while still emphasizing control of the underlying MCU hardware.

## Project goal

The objective of this project is to show how a developer can begin from generated MCU project files, add peripheral configuration, and then build a small firmware application using the standard STM32 development ecosystem.

## Why this folder is important

This is a bridge between:

- bare-metal experimentation
- generated IDE project structure
- real-world embedded project organization

It helps the reader understand that generated code is not magic—it's simply code that sets up the same low-level registers discussed in the earlier project, but in a more organized and maintainable structure.

## What the project contains

This folder typically includes:

- `Core/Inc/` — project-specific headers like `main.h`, hardware config, and other application-related declarations
- `Core/Src/` — generated initialization files such as `main.c`, HAL setup code, and related MCU startup logic
- `Drivers/` — CMSIS and STM32 HAL low-level driver libraries
- `.ioc` file — the STM32CubeMX configuration that defines clocks, pins, and middleware
- `.project`, `.cproject`, `.mxproject` — project metadata and build environment files
- `Debug/` — compiled object files and output artifacts produced during development
- `STM32F401RCTX_FLASH.ld` — linker script for memory layout

## Typical practical use

This project is useful for learning how the IDE-generated project structure works when using STM32CubeIDE. It allows the user to compare:

- direct register manipulation style
- HAL-generated initialization style
- the final behavior of the same hardware configuration expressed through different coding approaches

## Learning outcomes

After reviewing this project, the reader should understand:

- how Cubemx and CubeIDE generate STM32 project skeletons
- where configuration files and generated code live
- how user code fits into a standard STM32 project tree
- how generated initialization code relates to the register-level knowledge learned earlier

## Recommended workflow

Use this project to:

1. open the `.ioc` file and inspect peripheral settings
2. review the generated `Core/Src` files
3. compare the generated initialization flow to the manual register approach
4. then move on to more application-specific experiments like GPIO, timers, and UART

---

This folder is a practical bridge between theory and the real STM32 development workflow.
