#include "inkjetPrinter.hpp"

InkjetPrinter::InkjetPrinter(string modelName, string manufacturer, int availableCount ,int availableInk)  : Printer(modelName, manufacturer, availableCount)
{
  this->availableInk = availableInk;
}

void InkjetPrinter::print(int pages)
{
  Printer::print(pages);
  if (availableCount >= pages || availableInk >= pages) {
    availableCount -= pages;
    availableInk -= pages;
  } else
	return;
}

void InkjetPrinter::show()
{
  cout << modelName << ", " << manufacturer << ", " << availableCount << ", " << availableInk << endl;
}

