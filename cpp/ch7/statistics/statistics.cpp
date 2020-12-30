#include "statistics.hpp"

Statistics::Statistics(){
  buffer = new int[MAX_BUFFER_SIZE];
  size = 0;
}

void Statistics::operator>>(int &avg){
  int sum=0; 
  for (int i=0; i < size; i++) {
    sum+=buffer[i];
  }
  avg = sum/size;
  
}

Statistics& Statistics::operator<<(int newValue){
  buffer[size++] = newValue;

  return *this;
}

bool Statistics::operator!(){
  if(size==0) return true;
  else return false;
}

void Statistics::operator~(){
  for (int i=0; i < size; i++) {
    cout << buffer[i] << " ";
  }
  cout << endl;
}

Statistics::~Statistics(){
  delete [] buffer;
}
