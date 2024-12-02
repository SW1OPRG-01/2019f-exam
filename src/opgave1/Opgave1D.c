#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Kort.h"

int main(int argc, char ** argv) {
  
  srand(time(NULL));
  
  int result = 0;
  int pull = -1;

  do {
    if(pull == 0) {
      break; 
    }
    int card = traekEtKort();
    printf("Du trak %d\n", card);
    result += card;
    printf("Din værdi %d\n", result);
    if(result <= 21) {
      printf("Vil du trække et kort? ");
    } else {
      printf("Du har tabt!");
    }
  } while(result <= 21 && scanf("%d", &pull));

  return 0;
}