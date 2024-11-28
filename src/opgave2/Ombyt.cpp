#include "Ombyt.h"

void ombyt(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}