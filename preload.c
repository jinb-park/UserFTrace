#define _GNU_SOURCE
#include <stdio.h>

static void __init(void) {
   return;
}

void __gnu_mcount_nc(void) {
   __asm("mov r1, lr");
   __asm("ldr r2, [sp, #4]");
   __asm("ldr r3, [sp, #8]");
   printf("lr:%08x, pre-lr in stack:%08x, pre-fp in stack:%08x\n");
   return;
}