
#include <CoRoutine.hpp>

#include <stdio.h>

extern "C" {
void app_main(void);
}

void app_main() {

  printf("Hello coroujtine\n");
  main_cpp();
}