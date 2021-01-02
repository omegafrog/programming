#ifndef RAM_H
#define RAM_H

#include "baseMemory.hpp"
#include <iostream>
using namespace std;

class RAM : public BaseMemory {
private:
  int size;

public:
  RAM(int capacity);
  ~RAM() {}

  void write(int index, char ch);
  char read(int index);
};

#endif /* RAM_H */
