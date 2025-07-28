#ifndef CONSOLE_H
#define CONSOLE_H

// command printing
void printCommand(void);
void printDecodedCommand(int value);
void printDec(int value);
void printBin(int value);
void printOct(int value);
void printHex(int value);

// registers printing
void printFlags(void);
void printAccumulator(void);
void printCounters(void);
void printCell(int address, enum colors fg, enum colors bg);
#endif // CONSOLE_H
