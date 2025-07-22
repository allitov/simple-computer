#include <stdio.h>
#include "../include/mySimpleComputer.h"
#include "../include/myTerm.h"
#include "../mySimpleComputer/sc_constants.h"
#include "../mySimpleComputer/sc_variables.h"
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

    printf("\n!== Register funcs check ==!\n");
    int a = sc_regInit();
    printf("\n=== initializing register ===\n");
    printf("func returns: %d; 'flags' variable value: %d\n", a, flags);
    printFlags();

    printf("\n=== setting registerflags with 0 ===\n");
    a = sc_regSet(FLAG_OPERATION_OVERFLOW, 0);
    sc_regSet(FLAG_DIVISION_BY_ZERO, 0);
    sc_regSet(FLAG_MEMORY_OVERFLOW, 0);
    sc_regSet(FLAG_IGNORE_CLOCK, 0);
    sc_regSet(FLAG_INVALID_COMMAND, 0);
    printf("func returns: %d\n", a);
    printFlags();

    printf("\n=== setting registerFlags with 1 ===\n");
    sc_regSet(FLAG_OPERATION_OVERFLOW, 1);
    sc_regSet(FLAG_DIVISION_BY_ZERO, 1);
    sc_regSet(FLAG_MEMORY_OVERFLOW, 1);
    sc_regSet(FLAG_INVALID_COMMAND, 1);
    a = sc_regSet(FLAG_IGNORE_CLOCK, 1);
    printf("func returns: %d\n", a);
    printFlags();

    printf("\n=== setting with invalid flags ===\n");
    sc_regSet(0x10, 1);
    sc_regSet(0x6, 1);
    sc_regSet(17, 1);
    sc_regSet(0x8, 1);
    a = sc_regSet(150, 1);
    printf("func returns: %d\n", a);
    printFlags();

    printf("\n=== getting flags values ===\n");
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

    printf("\n!=== Accumulator funcs check ===!\n");
    printf("\n=== initializing accumulator ===\n");
    sc_accumulatorInit();
    printf("Accumulator: %X\n", accumulator);

    printf("\n=== setting accumulator ===\n");
    printf("\n=== setting accumulator with positive value ===\n");
    a = sc_accumulatorSet(0x3fff);
    printf("func returns: %d\n", a);
    printAccumulator();
    a = sc_accumulatorSet(0x1d3);
    printf("func returns: %d\n", a);
    printAccumulator();
    printf("\n=== setting accumulator with negative value ===\n");
    a = sc_accumulatorSet(0x403d);
    printf("func returns: %d\n", a);
    printAccumulator();
    a = sc_accumulatorSet(0x7fff);
    printf("func returns: %d\n", a);
    printAccumulator();
    printf("\n=== setting accumulator with invalid value ===\n");
    a = sc_accumulatorSet(0x8000);
    printf("func returns: %d\n", a);
    printAccumulator();

    printf("\n=== getting accumulator value ===\n");
    a = sc_accumulatorGet(&value);
    printf("func returns: %d\nvalue(dec): %d\n", a, value);
    printAccumulator();
    printf("\n=== getting accumulator value with NULL ptr ===\n");
    a = sc_accumulatorGet(NULL);
    printf("func returns: %d\nvalue(dec): %d\n", a, value);
    printAccumulator();

    printf("\n=== ICounter funcs check ===\n");
    printf("\n=== initializing icounter ===\n");
    sc_icounterInit();
    printf("Icounter: %X\n", icounter);

    printf("\n=== setting icounter ===\n");
    printf("\n=== setting icounter with positive value ===\n");
    a = sc_icounterSet(0x3fff);
    printf("func returns: %d\n", a);
    printCounters();
    a = sc_icounterSet(0x1d3);
    printf("func returns: %d\n", a);
    printCounters();
    printf("\n=== setting icounter with negative value ===\n");
    a = sc_icounterSet(0x403d);
    printf("func returns: %d\n", a);
    printCounters();
    a = sc_icounterSet(0x7fff);
    printf("func returns: %d\n", a);
    printCounters();
    printf("\n=== setting icounter with invalid value ===\n");
    a = sc_icounterSet(0x8000);
    printf("func returns: %d\n", a);
    printCounters();

    printf("\n=== getting icounter value ===\n");
    a = sc_icounterGet(&value);
    printf("func returns: %d\nvalue(dec): %d\n", a, value);
    printCounters();
    printf("\n=== getting icounter value with NULL ptr ===\n");
    a = sc_icounterGet(NULL);
    printf("func returns: %d\nvalue(dec): %d\n", a, value);
    printCounters();

    // Example usage:

    // Clear the screen (optional, but good for starting fresh)
    // printf("\033[2J"); // ANSI escape code to clear screen
    mt_clrscr();
    printf("\033[H");  // ANSI escape code to move cursor to home position (1,1)
    fflush(stdout);

    mt_gotoXY(2, 1); // Move cursor to row 5, column 10
    printf("Hello from (5,10)!");

    mt_gotoXY(10, 5); // Move cursor to row 10, column 5
    printf("Another message at (10,5).");

    mt_gotoXY(1, 1); // Move cursor back to the top-left for a clean exit
    printf("Press Enter to exit...");
    getchar(); // Wait for user input

    return 0;
}
