#include <iostream>
#include "board.hpp"
using namespace std;

int main(){
  Board::add("hello.");
  Board::add("goodBye");
  Board::print();

  Board::add("gogogogogogogo");
  Board::print();
}
