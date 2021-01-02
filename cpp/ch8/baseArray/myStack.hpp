#ifndef MYSTACK_H
#define MYSTACK_H

#include "baseArray.hpp"
#include <iostream>
using namespace std;

class MyStack : public BaseArray {
private:
  int top;
  int size;

public:
  MyStack(int capacity);
  ~MyStack(){};

  void push(int n);
  int pop();

  int capacity();
  int length();
};

#endif /* MYSTACK_H */
