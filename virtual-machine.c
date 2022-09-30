#include <stdbool.h>
#include "instructions.h"
#include "fetch.h"

bool running = true;

int main() {
  while (running) {
    int x = fetch();
    if (x == HLT) running = false;
    ip++;
  }
  return 0;
}
