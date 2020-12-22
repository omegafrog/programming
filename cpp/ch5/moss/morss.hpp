#ifndef __MORSS_H__
#define __MORSS_H__

#include <iostream>
#include <string>
using namespace std;

class morss {
  string alphabet[26];
  string digit[10];
  string slash, question, comma, period, plus, equal;

public:
  morss(); // initialize alphabet, digit, slash, etc

  void text2Morss(string text); // get input text, print morss
  void morss2Text(string morss);
};

#endif
