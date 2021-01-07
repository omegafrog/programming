#include "printer.hpp"

Printer::Printer(string modelName, string manufacturer, int availableCount) 
{
  this->modelName = modelName;
  this->manufacturer = manufacturer;
  printedCount = 0;
  this->availableCount = availableCount;
}

void Printer::print(int pages)
{
  if(availableCount>=pages)
	cout << "printing..."<<endl;
  else
	cout << "lack of page!"<<endl;
}





