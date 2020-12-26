#ifndef BOARD_H
#define BOARD_H

#define MAX_BOARD_POST 10

#include <iostream>
using namespace std;

class Board{
private:
  static string* strp; // string pointer for array
  static int index; // board post's index.
public:
  static void add(string post);
  static void print();  
};


#endif /* BOARD_H */
