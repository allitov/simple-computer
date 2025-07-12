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

#endif // MYSIMPLECOMPUTER_H
