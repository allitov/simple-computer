#ifndef SC_CONSTANTS_H
#define SC_CONSTANTS_H

// result codes
#define OK 0
#define ERROR -1
#define SUCCESS 0

// operand
#define OPERAND_MIN 0x0
#define OPERAND_MAX 0x7F
#define OPERAND_POS 0

// command
#define COMMAND_MIN 0x0
#define COMMAND_MAX 0x7F
#define COMMAND_POS 8

// sign
#define PLUS 0x0
#define MINUS 0x1
#define SIGN_POS 14

// RAM
#define RAM_SIZE 128
#define RAM_MAX_ADDRESS 0x007F
#define RAM_MIN_ADDRESS 0x0000
#define RAM_MAX_VALUE 0x7FFF
#define RAM_MIN_VALUE 0x0000

// Flags
#define FLAG_OPERATION_OVERFLOW (1 << 0)
#define FLAG_DIVISION_BY_ZERO (1 << 1)
#define FLAG_MEMORY_OVERFLOW (1 << 2)
#define FLAG_INVALID_COMMAND (1 << 3)
#define FLAG_IGNORE_CLOCK (1 << 4)

#endif // SC_CONSTANTS_H
