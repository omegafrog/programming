#include <iostream>
#include "myIntStack.hpp"
using namespace std;

int main(){
  MyIntStack s1;
  cout << s1.push(3)<<endl;
  cout << s1.push(4)<<endl;
  
  int n;
  cout << s1.pop(n) << " " << n<<endl;
  cout << s1.pop(n) << " " << n<<endl;
}
