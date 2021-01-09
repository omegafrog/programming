#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

#define SHAPE_NUM 3
using namespace std;

class Shape {
private:
protected:
  static string aShapeArray[SHAPE_NUM];
  Shape *apNextObject;
public:
  Shape();
  virtual ~Shape(){delete apNextObject;}

  virtual void Draw()=0;
  virtual string ToString()=0;
  Shape* GetApNextObject(){return apNextObject;}
};


#endif /* SHAPE_H */
