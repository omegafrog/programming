#ifndef BASEMEMORY_H
#define BASEMEMORY_H

#include <iostream>
using namespace std;

class BaseMemory {
private:
  char *mem;

public:
  BaseMemory(int size) { mem = new char[size]; }
  ~BaseMemory() { delete[] mem; }

  void put(char c, int index) { mem[index] = c; }
  char get(int index) { return mem[index]; }
};

#endif /* BASEMEMORY_H */
