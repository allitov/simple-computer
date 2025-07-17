#ifndef MYSIMPLECOMPUTER_H
#define MYSIMPLECOMPUTER_H

// Commands
int sc_commandDecode(int value, int* sign, int* command, int* operand);
int sc_commandEncode(int sign, int command, int operand, int* value);
int sc_commandValidate(int command);

// RAM
void sc_memoryInit();
int sc_memorySet(int address, int value);
int sc_memoryGet(int address, int* value);
int sc_memorySave(char* filename);
int sc_memoryLoad(char* filename);
void printCell(int address);

// Registers
int sc_regInit(void);
int sc_regSet(int register, int value);
int sc_regGet(int registerFlag, int* value);

// Accumulator
int sc_accumulatorInit(void);
int sc_accumulatorGet(int* value);
int sc_accumulatorSet(int value);

// icounter
int sc_icounterInit(void);
int sc_icounterSet(int value);
int sc_icounterGet(int* value);


#endif // MYSIMPLECOMPUTER_H
