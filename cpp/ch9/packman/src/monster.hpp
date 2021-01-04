#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "gameObject.hpp"
using namespace std;

class Monster:public GameObject{
	public:
	Monster(int x, int y) : GameObject(x, y, 2) {}
	virtual ~Monster() {};
	
	void move();
	char getShape(){ return 'M'; }
	
}

#endif