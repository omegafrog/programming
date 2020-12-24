#include "myIntStack.hpp"

MyIntStack::MyIntStack(){

}

MyIntStack::MyIntStack(int size){
  this->size=size;
  p = new int [this->size];
  tos=-1;
}
MyIntStack::MyIntStack(const MyIntStack& s){
  this->size = s.size;
  this->tos = s.tos;

  this->p= new int [size];
  for(int i=0;i<size;i++){
	this->p[i]=s.p[i];
  }
}

MyIntStack::~MyIntStack(){
  delete [] this->p;
}

bool MyIntStack::push(int n){
  if (tos < size) {
    p[++tos] = n;
    return 1;
  }else{
	return 0;
  }
}

bool MyIntStack::pop(int &n){
  if(tos>-1){
	n=p[tos--];
	return 1;
  }else{
	return 0;
  }
}