#include "systick.h"

#define CTRL_ENABLE (1U<<0)
#define CTRL_CLKSRC (1U<<2)
#define CTRL_COUNTFLAG (1U<<16)

/*by default, the frequency of the MCU is 16Mhz*/
#define ONE_MSEC_LOAD 1600

void systick_msec_delay(uint32_t delay)
{
	/*load number of clock cycles per milliseconds*/
	SysTick -> LOAD = ONE_MSEC_LOAD -1;
	
	/*Clear systick current value registers*/
	SysTick->VAL =0;
	
	/*select internal clock source*/
	SysTick -> CTRL |= CTRL_ENABLE
	
	for(int i=0;i<delay;i++)
	{
		while((SysTick->CTRL & CTRL_COUNTFLAG) == 0 ){}
	}
	
	/* Disable systick */
	SysTick->CTRL =0;
}

	
	
