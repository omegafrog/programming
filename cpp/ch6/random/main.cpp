#include <iostream>
#include "random.hpp"

int main(){
  Random r1;
  r1.seed();
  for(int i=0;i<10;i++){
	cout<<r1.nextInt(1,100)<<" ";
  }
  cout << endl;

  for (int i=0;i<10;i++){
	cout<<r1.nextAlphabet()<<" ";
  }
  cout  << endl;
  cout <<fixed;
  for(int i=0;i<10;i++){
	cout <<r1.nextDouble() << " ";
  }
  cout << endl;
  
}
