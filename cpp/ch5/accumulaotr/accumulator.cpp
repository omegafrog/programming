#include "accumulator.hpp"

Accumulator::Accumulator(int value){
	this->value = value;
}

Accumulator& Accumulator::add(int n){
	this->value=this->value+n;
	Accumulator& tmp = *this; // this is *ClassName
	return tmp;
}

int Accumulator::get(){
	return this->value;
}