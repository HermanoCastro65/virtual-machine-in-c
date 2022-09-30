#ifndef EVAL
#define EVAL

bool running = true;

void eval(int instr) {
    switch (instr) {
    case HLT:
        running = false;
        break;
    }
}

#endif
