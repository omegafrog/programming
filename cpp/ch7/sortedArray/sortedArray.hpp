#ifndef SORTEDARRAY_H
#define SORTEDARRAY_H

#include <iostream>
using namespace std;

class SortedArray{
private:
  int size; // array's size
  int *p; //array for integer array
  void sort(); // sort ascending array pointer
public:
  SortedArray();
  SortedArray(SortedArray& src);
  SortedArray(int p[], int size);
  ~SortedArray();
  SortedArray operator + (SortedArray& op2);
  SortedArray& operator = (const SortedArray& op2);
  void show();
};


#endif /* SORTEDARRAY_H */
