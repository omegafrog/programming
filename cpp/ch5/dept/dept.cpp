#include "dept.hpp"

Dept::Dept(const Dept& dept){
	this->size=dept.size;
	this->score = new int[size];
	for(int i=0;i<this->size;i++){
		this->score[i]=dept.score[i];
	}
}

Dept::~Dept(){
	delete [] score;
}

void Dept::read(){
	for(int i=0;i<size;i++){
		cin >> score[i];
	}
	
}

bool Dept::isOver60(int index){
	if(score[index]>=60) 
		return 1;
	else return 0;
}