#ifndef INKJETPRINTER_H
#define INKJETPRINTER_H

#include "printer.hpp"
#include <iostream>
using namespace std;

class InkjetPrinter  :public Printer{
private:
  int availableInk;
public:
  InkjetPrinter(string modelName, string manufacturer, int availableCount, int availableInk);
  virtual ~InkjetPrinter(){}

  void print(int pages);
  void show();
  
};


#endif /* INKJETPRINTER_H */
