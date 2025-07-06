#ifndef MYSIMPLECOMPUTER_H
#define MYSIMPLECOMPUTER_H

int sc_commandDecode(int value, int* sign, int* command, int* operand);
int sc_commandEncode(int sign, int command, int operand, int* value);
int sc_commandValidate(int command);

#endif // MYSIMPLECOMPUTER_H
