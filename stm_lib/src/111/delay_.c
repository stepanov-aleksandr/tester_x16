#include "delay_.h"

void SysTick_Handler(void) { delay_value++; }

void delay_us(uint32_t delay_us) {
  SysTick->VAL = 0;
  delay_value = 0;
  while (delay_value < (delay_us - 10))
    ;
}
