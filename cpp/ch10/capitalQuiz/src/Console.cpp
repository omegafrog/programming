#include "Console.hpp"

int Console::GetMenuIndex()
{
  int index=0;
  while(!(cin>>index)||(index<0)||(index>3)){
	cout << "wrong value. try again."<<endl;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
  }
  return index;
}

string Console::GetInputNationName()
{
  string nationName;
  cin >> nationName;
  cin.ignore();
  return nationName;
}

string Console::GetInputCapitalName()
{
  string capitalName;
  cin >> capitalName;;
  cin.ignore();
  return capitalName;
}


