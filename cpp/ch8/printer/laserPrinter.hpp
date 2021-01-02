#ifndef LASERPRINTER_H
#define LASERPRINTER_H

#include "printer.hpp"
#include <iostream>
using namespace std;

class LaserPrinter : public Printer {
private:
  int availableToner;

public:
  LaserPrinter(int availableToner) : Printer() {
    setModel();
    setManufacturer();
    setAvailableCount();
    this->availableToner = availableToner;
  }
  ~LaserPrinter() {}

  void printLaser(int pages) {
	if( print(pages))
	  availableToner -= pages;
  };
  int getAvailableToner() { return availableToner; };
};

#endif /* LASERPRINTER_H */
