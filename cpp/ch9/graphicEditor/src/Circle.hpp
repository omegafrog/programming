#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.hpp"

class Circle  :public Shape{
private:
public:
  Circle() : Shape(){}
  ~Circle(){}

   void Draw() const override;
   const string ToString()const override;


  
};


#endif /* CIRCLE_H */
