#ifndef FOOD_H
#define FOOD_H

#include "gameObject.hpp"
#include <iostream>
using namespace std;

class Food : public GameObject {
private:
public:
  Food(int x, int y) : GameObject(x, y, 0) {}
  virtual ~Food() {}

  void move(){};
  char getShape() { return 'F'; }
};

#endif /* FOOD_H */
