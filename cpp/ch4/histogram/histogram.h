#ifndef __HISTOGRAM_H__
#define __HISTOGRAM_H__

#include <iostream>
using namespace std;

class Histogram{
 private:
  string exp;
  int charNum;
  int numOfAlphabet[26];
  char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

  void setAlphabetNum();
  void setCharNum();
  void toLower();
  void printStar();
 protected:
  
 public:
  Histogram(string exp);
  
  void put(string exp);
  void putc(char ch);
  void print();
};


#endif
