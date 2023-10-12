#include <rn.h>
#include <stdio.h>
#include <string.h>

struct init {
  static void wn_init() {
    RN_INIT
  }
}

int main(int argc, char* argv[]) {
  init run;
  run.wn_init();
}
