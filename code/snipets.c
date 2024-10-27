#include <stdint.h>
#include "cmsis_gcc.h"

__attribute__((noreturn)) void jump_to_application(uint32_t app_address)
{
  uint32_t msp = *(uint32_t *)(app_address);
  uint32_t reset_vector = *(uint32_t *)(app_address + 4U);
  __set_MSP(msp); // __ASM volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
  asm volatile("bx %0" : : "r"(reset_vector));
  while(1);
}

