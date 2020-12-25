#ifndef __DEPT_H__
#define __DEPT_H__

#include <iostream>
using namespace std;
class Dept{
	int size;
	int* score;
	
	public:
	Dept(int size){
		this->size=size;
		score= new int[size];
	}
	
	Dept(const Dept& dept);
	~Dept();
	int getSize(){ return size;}
	void read();
	bool isOver60(int index);
};	

#endif