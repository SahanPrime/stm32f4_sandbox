/* Specifying the firmware entry point */
ENTRY(Reset_Handler)

/* Detailing the available memory */
MEMORY
{
	FLASH (rx) : ORIGIN = 0x08000000 , LENGTH = 256K
	SRAM (rwx) : ORIGIN = 0X20000000 , LENGTH = 64K
}

_estack = ORIGIN(SRAM) + LENGTH(SRAM);
/*Specifying the necessary heap and stack sizes*/

_max_heap_size = 0x200;
_max_stack_size = 0x400;

/* Definig output sections*/
SECTIONS
{
	.text :
	{
	. = ALIGN(4);
	*(.isr_vector_tbl)
	*(.text)
	*(.rodata)
	. = ALIGN(4);
	_etext = .;
	}>FLASH
	.data :
	{
	. = ALIGN(4);
	_sdata = .;
	*(.data)
	. = ALIGN(4);
	_edata = .;
	} > SRAM AT> FLASH 
	.bss :
	{
	. = ALIGN(4);
	_sbss = .;
	*(.bss)
	. = ALIGN(4);
	_ebss = .;
	}> SRAM
	}