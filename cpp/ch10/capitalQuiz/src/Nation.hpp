#ifndef NATION_H
#define NATION_H

#include <iostream>
using namespace std;

class Nation {
private:
  string mNationName;
  string mCapitalName;
public:
  Nation(string nationName, string capitalName);
  ~Nation(){}

  void SetNationName(string nationName);
  void SetCapitalName(string capitalName);

  const string GetNationName();
  const string GetCapitalName();
  bool IsCorrect(string nationName);
};


#endif /* NATION_H */
