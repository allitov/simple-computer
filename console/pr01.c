#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "../mySimpleComputer/sc_constants.h"
#include "./console.h"
#include "../mySimpleComputer/sc_variables.h"

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

    printf("!== Register funcs check ==!\n");
    int a = sc_regInit();
    printf("=== initializing register ===\n");
    printf("func returns: %d; 'flags' variable value: %d\n", a, flags);
    printFlags();

    printf("=== setting registerflags with 0 ===\n");
    a = sc_regSet(FLAG_OPERATION_OVERFLOW, 0);
    sc_regSet(FLAG_DIVISION_BY_ZERO, 0);
    sc_regSet(FLAG_MEMORY_OVERFLOW, 0);
    sc_regSet(FLAG_IGNORE_CLOCK, 0);
    sc_regSet(FLAG_INVALID_COMMAND, 0);
    printf("func returns: %d\n", a);
    printFlags();

    printf("=== setting registerFlags with 1 ===\n");
    sc_regSet(FLAG_OPERATION_OVERFLOW, 1);
    sc_regSet(FLAG_DIVISION_BY_ZERO, 1);
    sc_regSet(FLAG_MEMORY_OVERFLOW, 1);
    sc_regSet(FLAG_INVALID_COMMAND, 1);
    a = sc_regSet(FLAG_IGNORE_CLOCK, 1);
    printf("func returns: %d\n", a);
    printFlags();

    printf("=== setting with invalid flags ===\n");
    sc_regSet(0x10, 1);
    sc_regSet(0x6, 1);
    sc_regSet(17, 1);
    sc_regSet(0x8, 1);
    a = sc_regSet(150, 1);
    printf("func returns: %d\n", a);
    printFlags();

    printf("=== getting flags values ===\n");
    sc_regGet(FLAG_OPERATION_OVERFLOW, &value);
    printf("%d\n", value);
    sc_regGet(FLAG_DIVISION_BY_ZERO, &value);
    printf("%d\n", value);
    sc_regGet(FLAG_MEMORY_OVERFLOW, &value);
    printf("%d\n", value);
    sc_regGet(FLAG_INVALID_COMMAND, &value);
    printf("%d\n", value);
    a = sc_regGet(FLAG_IGNORE_CLOCK, &value);
    printf("%d\n", value);
    printf("func returns: %d\n", a);
    printFlags();

    return 0;
}
