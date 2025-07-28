#include <stdio.h>
#include "./console.h"

void printBin(const int value)
{
    printf("bin: ");
    for (int i = 14; i >= 0; i--)
    {
        const int mask = 0x1 << i;
        if ((value & mask) != 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    fflush(stdout);
}
