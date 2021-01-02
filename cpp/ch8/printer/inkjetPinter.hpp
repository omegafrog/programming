#ifndef INKJETPINTER_H
#define INKJETPINTER_H

#include "printer.hpp"
#include <iostream>
using namespace std;

class InkJetPrinter : public Printer {
private:
  int availableInk;

public:
  InkJetPrinter(int availableInk);
  ~InkJetPrinter() {}

  void printInkJet(int pages);
  int getAvailableInk(){return availableInk;}
};

#endif /* INKJETPINTER_H */