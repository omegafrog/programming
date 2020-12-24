#include "myIntStack.hpp"

MyIntStack::MyIntStack(){
  for(int i=0;i<10;i++){
	p[i]=0;
  }
  tos=-1;
}

bool MyIntStack::push(int n){
  if (tos < 9) {
    p[++tos] = n;
    return 1;
  } else
    return 0;
}

bool MyIntStack::pop(int &n){
  if (tos > -1) {
    n = p[tos--];
    return 1;
  } else
    return 0;
}
