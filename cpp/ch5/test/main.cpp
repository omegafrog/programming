#include <iostream>
using namespace std;

int foo1(int &n);
int foo2(int n);
int main(){
  int n1,n2;
  cout << foo1(n1)<<n1 << foo2(n2)<<endl;
  
}

int foo1(int &n){
  n=3;
  return 1;
}

int foo2(int n){
  return 2;

}