#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

#define SHAPE_NUM 3
using namespace std;

class Shape {
private:
protected:

  Shape *apNextObject;
public:
  Shape(){apNextObject = 0;}
  virtual ~Shape(){ apNextObject = 0;}

  virtual void Draw()const=0;
  virtual const string ToString()const=0;

  const static string aShapeArray[SHAPE_NUM];
  void SetApNextObject(Shape* nextObject) { this->apNextObject = nextObject;}
  Shape* GetApNextObject(){return apNextObject;}

};


#endif /* SHAPE_H */
