#include <iostream>
#include "Bog.h"

int main(int argc, char** argv) {

  Bog().print();
  Bog("Martin Andersen Nexø", "Ditte Menneskebarn", "9788702287660", 728).print();

  Bog books[] = { Bog("1", "1", "1", 1), Bog("2", "2", "2", 2), Bog("3", "3", "3", 3), Bog("4", "4", "4", 4) };
  for(int i = 0; i < sizeof(books)/sizeof(Bog); i++) {
    books[i].print();
  }
  return 0;
}