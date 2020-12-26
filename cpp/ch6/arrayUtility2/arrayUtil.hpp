#ifndef ARRAYUTIL_H
#define ARRAYUTIL_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class arrayUtility2{
private:
  int* s1; // array pointer
  int* s2; // array pointer
  int size; // size for s1,s2
  int retSize;
  
public:
  arrayUtility2();
  int** setArray();
  
  static int* concat(int s1[], int s2[], int size); // allocate new array concats s1, s2 and return pointer
  static int* remove(int s1[], int s2[], int size, int retSize);
  int getRetSize(int s1[], int s2[], int size);


  
};

#endif /* ARRAYUTIL_H */
