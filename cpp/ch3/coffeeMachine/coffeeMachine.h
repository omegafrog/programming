#ifndef COFFE_H
#define COFFE_H

class java{
 public:
  int coffee;
  int water;
  int sugar;
  java(int coffee, int water, int sugar);
  
  void get_espresso();
  void get_americano();
  void get_sugarcoffee();
  void fill_machine();
  void show();
};
#endif  
