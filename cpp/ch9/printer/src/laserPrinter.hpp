#ifndef LASERPRINTER_H
#define LASERPRINTER_H

#include "printer.hpp"
#include <iostream>
using namespace std;

class LaserPrinter : public Printer {
private:
  int availableToner;

public:
  LaserPrinter(string modelName, string manufacturer, int availableCount, int availableToner);
  ~LaserPrinter() {}

  void print(int pages);
  void show();
};

#endif /* LASERPRINTER_H */
