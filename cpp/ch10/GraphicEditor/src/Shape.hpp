#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

#define SHAPE_NUM 3
using namespace std;

class Shape {
private:
protected:
public:
  Shape(){}
  virtual ~Shape(){}

  virtual void Draw()const=0;
  virtual const string ToString()const=0;

  const static string aShapeArray[SHAPE_NUM];


};


#endif /* SHAPE_H */
