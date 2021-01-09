#ifndef LINE_H
#define LINE_H

#include "Shape.hpp"

class Line  : public Shape{
private:
public:
  Line():Shape(){};
  ~Line(){}
  
   void Draw() const override ;
  const string ToString() const override;

};


#endif /* LINE_H */
