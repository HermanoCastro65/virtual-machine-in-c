#ifndef EVAL
#define EVAL

bool running = true;

int sp = -1;
int stack[256];

void eval(int instruction) {
    switch (instruction) {
    case HLT: {
        running = false;
        break;
    }
    case PSH: {
        sp++;
        stack[sp] = program[++ip];
        break;
    }
    case POP: {
        int val_popped = stack[sp--];
        break;
    }
    case ADD: {
        int a = stack[sp--];
        int b = stack[sp--];
        int result = b + a;
        sp++;
        stack[sp] = result;
        break;
    }
    }
}

#endif
