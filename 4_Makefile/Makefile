final : 4_makefile_project.elf

main.o : main.c
	arm-none-eabi-gcc -c -mcpu=cortex-m4 -mthumb -std=gnu11 main.c -o main.o
	
stm32_f_startup.o : stm32_f_startup.c 
	arm-none-eabi-gcc -c -mcpu=cortex-m4 -mthumb -std=gnu11 stm32_f_startup.c -o stm32_f_startup.o
	
4_makefile_project.elf : main.o stm32_f_startup.o
	arm-none-eabi-gcc -nostdlib -T stm32_f4.ld *.o -o 4_makefile_project.elf -Wl,-Map=4_makefile_project.map
	
load:
	openocd -f board/st_nucleo_f4.cfg

clean:
	del   -f *.o *.elf *.map


