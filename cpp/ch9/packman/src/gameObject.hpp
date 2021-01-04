#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <iostream>
using namespace std;

class GameObject{
	int x, y;
	int distance; // moving distance
	
public:
	GameObject(int x, int y, int distance){
		this->x = x;
		this->y = y;
		this->distance = distance;
	}
	virtual ~GameObject() {};
	
	virtual void move() =0;
	virtual char getShape()=0;
	
	int getX() { return x; }
	int getY() { return y; }
	
	int getDistance() { return distance; }
	
	bool collide(GameObject o){
		if(this->x == o.getX() && this->y == o.getY()){
			return true;
		}else{
			return false;
		}
	}
};

#endif