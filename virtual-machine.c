#include <stdbool.h>
#include "instructions.h"
#include "fetch.h"
#include "eval.h"

int main() {
    while (running) {
        eval(fetch());
        ip++; // increment the ip every iteration
    }
    return 0;
}
