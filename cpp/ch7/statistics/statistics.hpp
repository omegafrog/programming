#ifndef STATISTICS_H
#define STATISTICS_H

#include <iostream>
using namespace std;

#define MAX_BUFFER_SIZE 10

class Statistics{
private:
  int* buffer; // array pointer
  int size; // number of values.
public:
  Statistics();

  
  void operator>>(int& avg); // calculate average and set to avg.
  Statistics& operator<<(int newValue); // append new value in to buffer.
  bool operator!(); // values is empty, return 1. isEmpty()
  void operator~(); // print statistic data

  ~Statistics();
};



#endif /* STATISTICS_H */
