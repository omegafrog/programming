#ifndef HISTOGRAM_H
#define HISTOGRAM_H
#include <iostream>
using namespace std;

class Histogram{
private:
  string str; // string for input text. text to be lower character.
  int size; // string size.

  int alphabet[26]; // array for counting alphabet.
public:
  Histogram();
  Histogram(string);

  void toLower(string& str); // change upper char to lower char
  void countAlpha(); // count str's alphabet and update alphabet array.

  string& operator<<(string inputstr); // get inputstr and append to str.
  string& operator<<(char inputchar); // get inputchar and append to str.

  void operator!(); // draw histogram.
};


#endif /* HISTOGRAM_H */
