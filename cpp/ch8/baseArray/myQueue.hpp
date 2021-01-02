#ifndef MYQUEUE_H
#define MYQUEUE_H

#include "baseArray.hpp"
#include <iostream>
using namespace std;

class MyQueue : public BaseArray {
private:
  int front, rear;
  int size; // number of element
public:
  MyQueue(int capacity);
  ~MyQueue(){}

  void enqueue(int n);
  int capacity(); // get element
  int length();   // get size.
  int dequeue();
};

#endif /* MYQUEUE_H */
