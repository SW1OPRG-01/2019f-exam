#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Kort.h"

int main(int argc, char** argv) {
  
  srand(time(NULL));

  int result = 0;
  int pull = 0;

  while(result <= 21 && scanf("%d", &pull)) {
    if(pull == 0) {
      break;
    }
    int next = traekEtKort();
    printf("Du trak %d\n", next);
    result += next;
    printf("Din værdi %d\n", result);
    if(result > 21) {
      printf("Du har tabt!\n");
    }
  }
  return 0;
}