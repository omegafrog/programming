#include "seat.hpp"

Seat::Seat(int index) {
  name = "";
  this->index = index;
  empty = 1;
}

void Seat::setName() {
  cout << "client name:";
  while (!(cin >> name)) {
    cout << "wrong value. try again.>>";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
}

void Seat::setEmptyState() {
  if (empty)
    empty = false;
  else
    empty = true;
}

string Seat::getName() { return name; }

int Seat::getIndex() { return index; }

bool Seat::isEmpty() { return (empty == 1); }
