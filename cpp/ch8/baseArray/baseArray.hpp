#ifndef BASEARRAY_H
#define BASEARRAY_H

#include <iostream>
using namespace std;

class BaseArray {
private:
  int capacity; // size of array
  int *mem;     // pointer for integer array
protected:
  BaseArray(int capacity = 100) {
    this->capacity = capacity;
    mem = new int[capacity];
  }
  ~BaseArray() { delete[] mem; }
  void put(int index, int val) { mem[index] = val; }
  int get(int index) { return mem[index]; }
  int getCapacity() { return capacity; }
};

#endif /* BASEARRAY_H */
