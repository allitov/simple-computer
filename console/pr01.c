#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "./console.h"

int main(void)
{
    printf("!== command encode tests ==!\n");
    int value = 0;
    int result = 0;

    printf("=== command encode positive case ===\n");
    result = sc_commandEncode(0, 0x00, 0x7F, &value);
    printf("result = %d\n", result);
    printDecodedCommand(value);
    printf("\n");

    printf("=== negative case sign -1 ===\n");
    result = sc_commandEncode(1, 0x00, 0x7F, &value);
    printf("result = %d\n\n", result);

    printf("=== negative case command illegal ===\n");
    result = sc_commandEncode(0, 0x7FFF, 0x7F, &value);
    printf("result = %d\n\n", result);

    printf("=== negative case operand illegal ===\n");
    result = sc_commandEncode(0, 0x00, 0x7FFF, &value);
    printf("result = %d\n\n", result);

    printf("!== command decode tests ==!\n");
    int sign = 0;
    int command = 0;
    int operand = 0;

    printf("=== command decode positive case ===\n");
    result = sc_commandDecode(0x0A7F, &sign, &command, &operand);
    printf("result = %d; sign = %d; command = %X; operand = %X\n\n", result, sign, command, operand);

    printf("=== negative case invalid command value ===\n");
    result = sc_commandDecode(0x7FFF, &sign, &command, &operand);
    printf("result = %d; sign = %d; command = %X; operand = %X\n\n", result, sign, command, operand);

    printf("=== negative case nonexistent command value ===\n");
    result = sc_commandDecode(0x3FFF, &sign, &command, &operand);
    printf("result = %d; sign = %d; command = %X; operand = %X\n\n", result, sign, command, operand);

    return 0;
}
