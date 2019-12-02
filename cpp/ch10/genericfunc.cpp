#include<iostream>
template<class T>
void myswap(T & a, T & b){
  T tmp;
  tmp=a;
  a=b;
  b=tmp;
}

template<class T1,class T2> // use different data type
void myswap(T1 & a, T2 & b){
  
}
