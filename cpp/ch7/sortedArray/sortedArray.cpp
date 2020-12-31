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
	sort();
}

SortedArray::SortedArray(int p[],int size){
  this->size = size;
  this->p = new int [size];
  for (int i=0; i < size; i++) {
    this->p[i]=p[i];
  }
  sort();
}

SortedArray::~SortedArray(){
  delete [] p;
}

SortedArray SortedArray::operator+(SortedArray &op2)
{
  int* tmp = new int [size+op2.size];
  for (int i=0; i < size+op2.size; i++) {
	  // if i < size, copy this->p[]. 
	if(i<size){
	  tmp[i]=p[i];
		// i>=size, copy op2.p[]
	}	else{
	  tmp[i]=op2.p[i-size];
	}
  }
  SortedArray sa1(tmp, size+op2.size);
	sa1.sort();
  return sa1;
}

SortedArray& SortedArray::operator=(const SortedArray& op2)
{
  delete [] p;
  p = new int[op2.size];
  size = op2.size;
  for (int i=0; i < size; i++) {
    p[i]=op2.p[i];
  }
	

  return *this;
}

void SortedArray::show()
{
	cout << "print array's element : ";
	for(int i=0;i<size;i++){
		cout <<p[i]<<" ";
	}
	cout <<endl;
}

void SortedArray::sort()
{
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(p[i]>p[j]){
				int tmp = p[j];
				p[j] = p[i];
				p[i] = tmp;
			}
		}
	}
}