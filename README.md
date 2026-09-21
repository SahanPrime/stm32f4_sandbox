# STM32F4 Sandbox

A hands-on STM32F4 self-learning repository focused on bare-metal ARM Cortex-M4 development, register-level programming, startup code, linker scripts, GPIO, SysTick, and general-purpose timers.

The examples target the STM32F401RCTx family and are suitable for experimenting with an STM32F4 development board such as the STM32 Nucleo-F401RE.

## Learning Progression

The projects are organized as a progressive learning journey:

1. Direct register manipulation
2. STM32CubeIDE-generated project structure
3. Custom startup code and linker scripts
4. Building firmware with a Makefile
5. GPIO input/output using STM32 registers
6. SysTick-based delays
7. General-purpose timer configuration

## Repository Structure

```text
.
├── RegisterManipulation/
│   └── RegisterManipulation/
│       ├── Core/                  STM32CubeIDE project source
│       ├── Drivers/               STM32 device and HAL headers
│       ├── RegisterManipulation.ioc
│       └── STM32F401RCTX_FLASH.ld
│
├── RegisterManipulation_2/
│   ├── Core/                      Register-level STM32 application
│   ├── Drivers/                   STM32 device and HAL headers
│   ├── RegisterManipulation_2.ioc
│   └── STM32F401RCTX_FLASH.ld
│
├── 3_LinkerandStartupcode/
│   ├── main.c                     Bare-metal GPIO register example
│   ├── stm32_f_startup.c          Custom reset handler and vector table
│   ├── stm32_f4.ld                Custom linker script
│   └── 3_LinkerandStartup.elf    Built firmware image
│
├── 4_Makefile/
│   ├── main.c                     Bare-metal application
│   ├── stm32_f_startup.c          Custom startup code
│   ├── stm32_f4.ld                Linker script
│   ├── Makefile                   ARM GCC build and OpenOCD commands
│   └── 4_makefile_project.elf    Built firmware image
│
├── 5_GPIOInputOutput/
│   ├── Core/
│   │   ├── Inc/                   Application headers
│   │   ├── Src/                   GPIO application and HAL support
│   │   └── Startup/               STM32F401 startup assembly
│   ├── Drivers/
│   └── 5_GPIOInputOutput.ioc
│
├── 6_SysTick timer/
│   ├── Core/
│   │   ├── Inc/                   Application headers
│   │   ├── Src/                   SysTick and GPIO implementation
│   │   └── Startup/               STM32F401 startup assembly
│   ├── Drivers/
│   └── 6_SysTicktimer.ioc
│
├── 7_GTIM/
│   ├── Core/
│   │   ├── Inc/                   Application headers
│   │   ├── Src/                   GPIO and TIM2 implementation
│   │   └── Startup/               STM32F401 startup assembly
│   ├── Drivers/
│   └── 7_GTIM.ioc
│
├── en.dm00096844.pdf              STM32F4 reference documentation
└── .gitignore
```

## Hardware

The examples use the following STM32F4 peripherals:

- **GPIOC pin 13** for the onboard LED
- **RCC AHB1 peripheral clock** for enabling GPIOC
- **SysTick** for millisecond delays
- **TIM2** for general-purpose timer operation
- **Cortex-M4 startup and reset handling**

The register-level examples assume that the LED is connected to GPIOC pin 13, as found on many STM32 Nucleo boards.

## Tools

Install the following tools before building or flashing the firmware:

- ARM GNU Embedded Toolchain
- `make`
- OpenOCD
- STM32CubeIDE or another Eclipse-based STM32 development environment
- An ST-LINK-compatible STM32F4 development board

The Makefile uses:

```text
arm-none-eabi-gcc
openocd
```

## Building the Bare-Metal Makefile Project

Go to the Makefile project directory:

```bash
cd 4_Makefile
```

Build the firmware:

```bash
make
```

This produces `4_makefile_project.elf`, `4_makefile_project.map`, and intermediate object files.

Clean generated build files:

```bash
make clean
```

The Makefile compiles for a Cortex-M4 target using `-mcpu=cortex-m4`, `-mthumb`, and `-std=gnu11`. The final link step uses the custom `stm32_f4.ld` linker script and disables the standard library with `-nostdlib`.

## Loading with OpenOCD

The Makefile includes an OpenOCD target:

```bash
make load
```

This starts OpenOCD using:

```text
board/st_nucleo_f4.cfg
```

Use the generated ELF file with your preferred OpenOCD or STM32CubeIDE workflow to flash and debug the application.

## STM32CubeIDE Projects

The following directories contain STM32CubeIDE-compatible projects:

- `RegisterManipulation/`
- `RegisterManipulation_2/`
- `5_GPIOInputOutput/`
- `6_SysTick timer/`
- `7_GTIM/`

To open a project:

1. Start STM32CubeIDE.
2. Select **File → Import**.
3. Choose **Existing Projects into Workspace**.
4. Select the desired project directory.
5. Build and run using an ST-LINK-connected STM32F4 board.

The `.ioc` files contain STM32CubeMX project configuration, while the `Core/` and `Drivers/` directories contain the generated and application source code.

## Examples

### Direct Register Manipulation

The projects in `3_LinkerandStartupcode/` and `RegisterManipulation_2/` access STM32 peripheral registers directly. The GPIO example enables the GPIOC peripheral clock, configures GPIOC pin 13 as an output, and toggles the output data register in an infinite loop.

### GPIO Output

The `5_GPIOInputOutput` project introduces reusable GPIO functions:

```c
led_init();
led_on();
led_off();
```

The application alternates the LED state using a software delay loop.

### SysTick Timer

The `6_SysTick timer` project uses the Cortex-M4 SysTick peripheral to create a millisecond delay:

```c
led_init();

while (1)
{
    systick_msec_delay(500);
    led_toggle();
}
```

The SysTick implementation assumes a default MCU clock frequency of 16 MHz and configures a 1 ms reload interval.

### General-Purpose Timer

The `7_GTIM` project configures TIM2 for a 1 Hz update event. The application toggles the LED, waits for the TIM2 update flag, and then clears the flag.

TIM2 is configured using:

- Prescaler: `1600 - 1`
- Auto-reload value: `1000 - 1`
- Update flag polling through the status register

## Custom Startup and Linker Code

The custom startup example demonstrates what happens before `main()` executes.

`stm32_f_startup.c` provides:

- The interrupt vector table
- `Reset_Handler`
- Weak interrupt handlers
- `.data` initialization from Flash to SRAM
- `.bss` zero initialization
- Transfer of control to `main()`

The custom linker script defines the STM32F4 memory layout:

```text
FLASH: 256 KB at 0x08000000
SRAM:   64 KB at 0x20000000
```

It places program code and read-only data in Flash, initialized data in SRAM with its load image in Flash, and uninitialized data in SRAM.

## Reference Material

The repository includes `en.dm00096844.pdf`, which provides STM32F4 device and peripheral reference information. Use it when checking peripheral base addresses, register offsets, GPIO configuration bits, RCC clock-enable registers, SysTick behavior, TIM2 configuration, and Flash/SRAM memory layout.

## Notes

This repository is primarily an educational sandbox rather than a production-ready firmware framework. Several examples intentionally use direct register access and simple polling loops to make the underlying hardware behavior easier to study.

Before using an example on different STM32 hardware, verify:

- MCU model and memory size
- GPIO pin assignments
- Clock configuration
- Peripheral register addresses
- Linker script memory regions
- OpenOCD board configuration

## Future Learning Areas

Possible next steps include:

- Interrupt-driven GPIO handling
- SysTick interrupt mode
- Timer interrupts instead of polling
- UART communication
- PWM generation
- ADC sampling
- NVIC configuration
- DMA
- Low-power modes
- Unit testing hardware-independent code
- Automated firmware builds and flashing
