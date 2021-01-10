#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>
#include <limits>
using namespace std;

class QuizManager;
class Console {
private:
  
public:
  Console();
  ~Console(){}
  
  static int GetMenuIndex();
  static string GetInputNationName();
  static string GetInputCapitalName();

  
};


#endif /* CONSOLE_H */
