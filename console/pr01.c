#include <stdio.h>

#include "../include/mySimpleComputer.h"
#include "../mySimpleComputer/sc_commands.h"
#include "./console.h"

int main(void)
{
    int value = 0;
    int result = 0;

    printf("=== command encode positive case ===\n");
    result = sc_commandEncode(0, NOP, 0x7F, &value);
    printf("result = %d\n", result);
    printDecodedCommand(value);
    printf("\n");

    printf("=== negative case sign -1 ===\n");
    result = sc_commandEncode(1, NOP, 0x7F, &value);
    printf("result = %d\n\n", result);

    printf("=== negative case command illegal ===\n");
    result = sc_commandEncode(0, 0x7FFF, 0x7F, &value);
    printf("result = %d\n\n", result);

    printf("=== negative case operand illegal ===\n");
    result = sc_commandEncode(0, NOP, 0x7FFF, &value);
    printf("result = %d\n\n", result);

    return 0;
}
