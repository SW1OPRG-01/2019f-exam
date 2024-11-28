#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Kort.h"

int main(int argc, char** argv) {
  
  srand(time(NULL));

  for(int i = 0; i < 10; i++) {
    printf("%d\n", traekEtKort());
  }

  return 0;
}