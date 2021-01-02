#ifndef SEAT_H
#define SEAT_H

#include <iostream>
#include <limits>
using namespace std;

class Seat {
private:
  string name; // user name
  int index;
  bool empty; // seat is empty?
public:
  Seat(int index);
  ~Seat() {}

  void setName();
  void setEmptyState();

  string getName();
  int getIndex();
  bool isEmpty();
};

#endif /* SEAT_H */
