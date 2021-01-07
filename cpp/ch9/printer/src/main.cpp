#include "inkjetPrinter.hpp"
#include "laserPrinter.hpp"
#include "printer.hpp"
#include <limits>
int main() {
  Printer *ip = new InkjetPrinter("OfficejetV40", "HP", 5, 10);
  Printer *lp = new LaserPrinter("SCX-6x45", "samsung", 3, 20);

  int printerChoice;
  int pages;
  char continueChoice;
  

  while (1) {
	  cout << "printer(1:inkjet, 2:lasor) and pages>>";
    while (!(cin >> printerChoice >> pages)) {
      if( printerChoice == 1 || printerChoice == 2)
        break;
      else
      {cout << "wrong value. try again." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');}
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
	default:{
		cout << "no selected printer."<<endl;
		continue;
	}
    }
    while(1)
	  {cout << "keep going?(y/n)";
	while(!(cin >> continueChoice) ) {
      cout << "wrong value. try again." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  if(continueChoice == 'n')
    return 0;
	  else if(continueChoice == 'y')
		  break;
	  else
		  cout << "Y or N"<<endl;
		  }
  }
}
