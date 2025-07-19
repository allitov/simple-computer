#include <stdio.h>
#include "./console.h"

void printDec(const int value)
{
    const int result = (value & 0x1 << 14) == 0 ? value : -((value ^ 0x7FFF) + 0x1);
    printf("dec: %05d", result);
}
