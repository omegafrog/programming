#ifndef UI_H
#define UI_H



#include <iostream>
using namespace std;

class UI {
private:
protected:

public:
  UI();
  ~UI(){}


  static void ShowMenu();
  static int GetMenu();
  static int GetShapeType();
  static int GetObjectIndex();
};


#endif /* UI_H */
