#include "gpio.h"

#define GPIOCENR  (1u<<2) // GPIOC clock enable
#define LED13_BSR  (1u<<13) // GPIOC pin 13 bit set
#define LED13_BSS (1u<<29) // GPIOC pin 13 bit reset
#define LED_PIN (1U<<13)

void led_init(void)
{
    // Enable GPIOC clock
    RCC->AHB1ENR |= GPIOCENR;

    // Set GPIOC pin 13 as output
    GPIOC->MODER &= ~(3u << (13 * 2)); // Clear mode bits for pin 13
    GPIOC->MODER |= (1u << (13 * 2));  // Set mode to output
}

void led_on(void)
{
    // Set GPIOC pin 13 high
    GPIOC->BSRR = LED13_BSR;
}
void led_off(void)
{
    // Set GPIOC pin 13 low
    GPIOC->BSRR = LED13_BSS;
}

void led_toggle(void)
{
	/*Toggle PC13*/
	GPIOC -> ODR ^= LED_PIN;
}

