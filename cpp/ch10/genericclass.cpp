#include<iostream>
using namespace std;

template<class T>
class Mystack{
  int top;
  T data[100];
public:
  Mystack(); //generator
  void push(T element); //push
  T pop();
};

template<class T>
Mystack<T>::Mystack(){ top=-1;}

template<class T>
void Mystack<T>::push(T element){
  if(top==99){
    cout<<"stack is full";
    return ;
  }
  top++;
  data[top]=element;
}

template<class T>
T Mystack<T>::pop(){
  if(top==-1){
    cout<<"stack is empty";
    return 0;
  }
  return data[top--];
}


