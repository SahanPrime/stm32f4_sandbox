//Register Definition//

#define  GPIOC_BASE 0x40020800UL
#define  RCC_BASE 0x40023800UL
#define  AHB1_OFFSET 0x30UL
#define  RCC_AHB1_ENR  (*(volatile unsigned int*)(RCC_BASE + AHB1_OFFSET))
#define  GPIO_MODER_OFFSET  0x00UL
#define  GPIOC_MODER_BASE (*(volatile unsigned int*)(GPIOC_BASE+GPIO_MODER_OFFSET))
#define  GPIO_ODR_OFFSET 0x14UL
#define  GPIOC_ODR_BASE (*(volatile unsigned int*)(GPIOC_BASE+GPIO_ODR_OFFSET))

int main (){

	//RCC and GPIOC Configurations//
	RCC_AHB1_ENR = (RCC_AHB1_ENR|(1<<2));
	GPIOC_MODER_BASE=(GPIOC_MODER_BASE|(10<<26));

	//infinite loop//
	while(1){
		GPIOC_ODR_BASE= (GPIOC_ODR_BASE |(1<<13));

	}


}
