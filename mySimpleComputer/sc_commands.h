#ifndef COMMANDS_H
#define COMMANDS_H

// in-out
#define NOP     0x00
#define CPUINFO 0x01
#define READ    0x0A
#define WRITE   0x0B

// load-store
#define LOAD    0x14
#define STORE   0x15

// arithmetic
#define ADD     0x1E
#define SUB     0x1F
#define DIVIDE  0x20
#define MUL     0x21

// control transfer
#define JUMP    0x28
#define JNEG    0x29
#define JZ      0x2A
#define HALT    0x2B

#endif // COMMANDS_H
