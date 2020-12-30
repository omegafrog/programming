#include "sortedArray.hpp"

SortedArray::SortedArray(){
  size = 0;
  p = nullptr;
  
}

SortedArray::SortedArray(SortedArray& src){
  this->size = src.size;
  this->p = new int[size];
  for (int i=0; i < size; i++) {
	this->p[i]=src.p[i];
  }
}

SortedArray::SortedArray(int p[],int size){
  this->size = size;
  this->p = new int [size];
  for (int i=0; i < size; i++) {
    this->p[i]=p[i];
  }
  
}

SortedArray::~SortedArray(){
  delete [] p;
}

SortedArray SortedArray::operator+(SortedArray &op2)
{
  int* tmp = new int [size+op2.size];
  for (int i=0; i < size+op2.size; i++) {
    if(i<size){
	  tmp[i]=p[i];
	}	else{
	  tmp[i]=op2.p[i];
	}
  }
  SortedArray sa1(tmp, size+op2.size);
  return sa1;
}

SortedArray& SortedArray::operator=(const SortedArray& op2)
{
  delete [] p;
  p = new int[op2.size];
  for (int i=0; i < size; i++) {
    p[i]=op2.p[i];
  }

  return *this;
}

