#include "inkjetPrinter.hpp"
#include "laserPrinter.hpp"
#include "printer.hpp"
#include <limits>
int main() {
  Printer *ip = new InkjetPrinter("OfficejetV40", "HP", 5, 10);
  Printer *lp = new LaserPrinter("SCX-6x45", "samsung", 3, 20);

  int printerChoice;
  int pages;

  while (1) {
    while (!(cin >> printerChoice >> pages) || ) {
      cout << "wrong value. try again." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    switch (printerChoice) {
    case 1: {
      ip->print(pages);
      ip->show();
      lp->show();
      break;
    }
    case 2: {
      lp->print(pages);
      ip->show();
      lp->show();
      break;
    }
    }
  }
}
