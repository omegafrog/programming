#ifndef __OVAL_H__
#define __OVAL_H__

#include <iostream>
using namespace std;


class Oval{
  int width;
  int height;

 public:
  Oval();
  Oval(int w, int h);
  ~Oval();
  
  double getWidth();
  double getHeight();
  void set(int w, int h);
  void show();
};

#endif
