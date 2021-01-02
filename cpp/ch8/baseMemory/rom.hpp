#ifndef ROM_H
#define ROM_H

#include "baseMemory.hpp"
#include <iostream>
using namespace std;

class ROM : public BaseMemory {
private:
  int size;

public:
  ROM(int capacity, char *arr, int size);
  ~ROM() {}

  // read only memory...
  char read(int index);
};

#endif /* ROM_H */
