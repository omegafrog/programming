#ifndef __MYINTSTACK_H__
#define __MYINTSTACK_H__

#include <iostream>
using namespace std;

class MyIntStack{
  int p[10];
  int tos;
public:
  MyIntStack();
  bool push(int n);
  bool pop(int &n);
};
#endif
