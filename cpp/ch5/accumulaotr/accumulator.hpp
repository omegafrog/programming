#ifndef ___ACCUMULATOR_H__
#define ___ACCUMULATORH__

#include <iostream>
using namespace std;
class Accumulator{
private:
  int value;
protected:
  
public:
  Accumulator(int value); 
  Accumulator& add(int n); // value + n
  int get(); // return val
};
#endif
