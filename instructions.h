#ifndef INSTRUCTIONS
#define INSTRUCTIONS

typedef enum {
    PSH,
    ADD,
    POP,
    HLT
}
InstructionsSet;

const int program[] = {
    PSH,
    5,
    PSH,
    6,
    ADD,
    POP,
    HLT
};

#endif
