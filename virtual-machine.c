#include <stdbool.h>

#include "registers.h"
#define ip registers[IP]
#define sp registers[SP]

#include "instructions.h"
#include "fetch.h"
#include "eval.h"

int main() {
    while (running) {
        eval(fetch());
        ip++;
    }
    return 0;
}
