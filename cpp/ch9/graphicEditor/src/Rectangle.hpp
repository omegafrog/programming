#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.hpp"

class Rectangle  :public Shape{
private:

public:
  Rectangle() : Shape(){}
  ~Rectangle(){}

  void Draw() const override;
  const string ToString()const  override;
};


#endif /* RECTANGLE_H */
