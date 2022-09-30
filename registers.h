#ifndef REGISTERS
#define REGISTERS

typedef enum {
    A,
    B,
    C,
    D,
    E,
    F,
    IP,
    SP,
    NUM_OF_REGISTERS
}
Registers;

int registers[NUM_OF_REGISTERS];

#endif
