#include <iostream>
#include "Ombyt.h"

int main(int argc, char** argv) {
  int a = 5;
  int b = 6;

  std::cout << a << " " << " " << b << std::endl;
  ombyt(&a, &b);
  std::cout << a << " " << " " << b << std::endl;
  
  return 0;
}