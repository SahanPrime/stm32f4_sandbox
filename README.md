# STM32F4 Sandbox

This repository is a hands-on STM32F4 learning sandbox for bare-metal development on the STM32F401RCTx family. It focuses on direct register access, startup and linker configuration, Makefile-based builds, GPIO control, SysTick timing, general-purpose timers, and UART communication.

## Overall repo structure and content

- [1_RegisterManipulation](./1_RegisterManipulation/README.md) — first direct register manipulation project and early STM32CubeIDE workspace.
- [2_RegisterManipulation](./2_RegisterManipulation/README.md) — second register-level project with generated STM32CubeIDE source structure and HAL support files.
- [3_LinkerandStartupcode](./3_LinkerandStartupcode/README.md) — custom startup code and linker script experiment for a minimal bare-metal setup.
- [4_Makefile](./4_Makefile/README.md) — GNU Make-based build flow for a Cortex-M4 firmware image using custom startup and linker scripts.
- [5_GPIOInputOutput](./5_GPIOInputOutput/README.md) — GPIO input/output examples for LED toggling and signal control.
- [6_SysTick timer](./6_SysTick%20timer/README.md) — SysTick-based delay and timing experiment.
- [7_GTIM](./7_GTIM/README.md) — general-purpose timer example using TIM2 for periodic updates.
- [8_UART](./8_UART/README.md) — UART serial communication example for debugging and terminal output.

## Reference material

- [STM32F401XB.PDF](./STM32F401XB.PDF) — STM32F401xB reference document.
- [en.dm00096844.pdf](./en.dm00096844.pdf) — STM32F4 reference manual and peripheral documentation.

## Common hardware assumptions

- LED connected to GPIO pin 13
- RC circuit / external peripheral signal on PA2 for UART output
- SysTick and timer examples designed for the STM32F4 development board
- Core startup and linker configuration tuned for the STM32F401RCTx MCU family

## Learning goals

- Understand the Cortex-M4 startup sequence and vector table
- Work with GPIO, SysTick, TIM, and UART peripherals at the register level
- Build firmware using a custom Makefile and linker script
- Compare direct register control with generated STM32CubeIDE project structure

This repository is intended as a learning sandbox, so several examples intentionally use direct register access and minimal abstractions to make the flow easier to follow.
