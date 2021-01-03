#include "seat.hpp"

Seat::Seat(int index) {
  name = "";
  this->index = index;
  empty = 1;
}

void Seat::setName(string name) {
  // cout << "client name:"; while (!(cin >> name)) { cout << "wrong
  // value. try again.>>"; cin.clear();
  // cin.ignore(numeric_limits<streamsize>::max(), '\n'); }
  this->name = name;
}

void Seat::setEmptyState(bool state) {
  empty = state;
}

string Seat::getName() { return name; }

int Seat::getIndex() { return index; }

bool Seat::isEmpty() { return (empty == 1); }
