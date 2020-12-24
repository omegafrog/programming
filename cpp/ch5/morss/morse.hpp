#ifndef __MORSE_H__
#define __MORSE_H__

#include <iostream>
#include <string>
using namespace std;

class morse {
  string alphabet[26];
  string digit[10];
  string slash, question, comma, period, plus, equal;
	string text;
	string morseWord;

public:
  morse(); // initialize alphabet, digit, slash, etc

  string& text2morse(string text); // get input text, print morse
  void morse2Text(string& morse,string text);
};

#endif
