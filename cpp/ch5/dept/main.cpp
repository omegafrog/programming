#include <iostream>
#include "dept.hpp"
using namespace std;

int countPass(Dept dept);
int main(){
	Dept com(10);
	com.read();
	int n=countPass(com);cout<<"over 60 is" << n;
}

int countPass(Dept dept){
	int count = 0;
	for(int i=0; i<dept.getSize(); i++){
		if(dept.isOver60(i)) count++;
	}
	return count;
}