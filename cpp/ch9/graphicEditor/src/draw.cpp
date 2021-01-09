#include "Circle.hpp"
#include "Line.hpp"
#include "Rectangle.hpp"

void Line::Draw ()const
{
  cout << ToString();
}

const string Line::ToString()const{
  return "Line";
}

void Circle::Draw()const
{
  cout << ToString();
}

const string Circle::ToString()const {
  return "Circle";
}

void Rectangle::Draw()const
{
  cout << ToString();
}

const string Rectangle::ToString()const {
  return "Rectangle";
}
