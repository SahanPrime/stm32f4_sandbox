# 2_RegisterManipulation

This folder contains the second STM32 register-level exercise in the repository. It builds on the initial setup and demonstrates a slightly more complete STM32CubeIDE project structure with generated HAL support and application startup files.

## What is inside

- `Core/` — application source code and generated system files
- `Drivers/` — CMSIS and HAL driver headers/source files for the STM32F4 family
- `.settings/` — IDE project preferences
- `.cproject`, `.mxproject`, `.project` — STM32CubeIDE project configuration files
- `Debug/` — compiled object files, ELF output, and linker map
- `STM32F401RCTX_FLASH.ld` — memory layout definition for the flash image
- `RegisterManipulation_2.ioc` — STM32CubeMX project configuration file

## Purpose

This project is designed to help learners study:

- generated STM32CubeIDE project organization
- direct peripheral and system initialization flow
- CMSIS and HAL configuration in a real embedded firmware project

This folder is a strong reference for comparing generated project layouts with the more minimal bare-metal examples elsewhere in the repository.
