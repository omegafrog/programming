#ifndef PRINTER_H
#define PRINTER_H

#include <iostream>
#include <limits>
using namespace std;

class Printer {
private:
  string model;
  string manufacturer;
  int printedCount;
  int availableCount;

public:
  Printer() { printedCount = 0; }
  ~Printer() {}

  bool print(int pages) {
    if (availableCount >= pages) {
	  cout << "print complete."<<endl;
      printedCount += pages;
      availableCount -= pages;
	  return 1;
    }
	else{
	  cout << "printer doesn't have enough papers."<<endl;
	  return 0;
	}
  }

  void setModel() {
    cout << "model>>";
    cin >> model;
    cin.ignore();
  }
  void setManufacturer() {
    cout << "manufacturer>>";
    cin >> manufacturer;
    cin.ignore();
  }
  void setAvailableCount() {
    cout << "available pages>>";
    while (!(cin >> availableCount)) {
      cout << "wrong input. try again>>";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }
  string getModel() { return model; }
  string getManufacturer() { return manufacturer; }
  int getPrintedCount() { return printedCount; }
  int getAvailableCount() { return availableCount; }
};

#endif /* PRINTER_H */
