#include<iostream>
#include "myIntStack.hpp"
using namespace std;

int main(){
  MyIntStack a(10);
  a.push(10);
  a.push(20);
  MyIntStack b=a;
  b.push(30);

  int n;
  a.pop(n);
  cout << "popped from stack a" << n << endl;
  b.pop(n);
  cout<<"popped from stack b" << n <<endl;
}
