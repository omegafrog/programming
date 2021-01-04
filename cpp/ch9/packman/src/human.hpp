#ifndef HUMAN_H
#define HUMAN_H

#include "GameObject.hpp"
#include <iostream>
using namespace std;

class Human : public GameObject{
	public:
	Human(int x, int y) : GameObject(x, y, 1) {}
	virtual ~Human() {}
	
	void move();
	char getShape() { return 'H'; }
	
}