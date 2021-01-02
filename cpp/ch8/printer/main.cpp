#include "inkjetPinter.hpp"
#include "laserPrinter.hpp"
#include <iostream>
#include <limits>

using namespace std;

int main() {
  LaserPrinter *L1 = new LaserPrinter(20);
  InkJetPrinter *I1 = new InkJetPrinter(10);

  char answer;
  int printerChoice;
  int pages;
  do
  {
    cout << "choose printer(1:inkjet, 2:laser) and pages>>";
    while (!(cin >> printerChoice >> pages) ||
           (0 > printerChoice || printerChoice > 2)) {
      cout << "wrong value. try again.";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (printerChoice == 1) {
      L1->printLaser(pages);
    } else {
      I1->printInkJet(pages);
    }
    cout << I1->getModel() << ", " << I1->getManufacturer() << ", "
         << "left paper:" << I1->getAvailableCount() << ", "
         << "left ink:" << I1->getAvailableInk() << endl;
    cout << L1->getModel() << ", " << L1->getManufacturer() << ", "
         << "left paper:" << L1->getAvailableCount() << ", "
         << "left ink:" << L1->getAvailableToner() << endl;

    cout << "print more?(y/n)>>";
    while (!(cin >> answer)) {
      cout << "please 'y' or 'n' ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  } while (answer == 'y');
}
