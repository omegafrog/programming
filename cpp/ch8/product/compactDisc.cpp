#include "compactDisc.hpp"

compactDisc::compactDisc(int id)  : Product(id)
{
  setTitle();
  setSinger();
}

void compactDisc::setTitle()
{
  cout << "title>>";
  while(!( cin >> title)){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout <<"wrong input. try again>>";
  }
}

void compactDisc::setSinger()
{
  cout << "singer>>";
  while(!( cin >> singer)){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout <<"wrong input. try again>>";
  }
}

string compactDisc::getTitle()
{
  return title;
}

string compactDisc::getSinger()
{
  return singer;
}

