#include "board.hpp"

string* Board::strp=new string [MAX_BOARD_POST];
int Board::index = 0;

void Board::add(string post)
{
  strp[index]=post;
  index++;
}

void Board::print()
{
  cout << "*************** BOARD ***************"<<endl;
  for (int i=0; i < index; i++) {
    cout << i << ": " << strp[i] << endl;
  }

}

