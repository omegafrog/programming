#include "inkjetPinter.hpp"

InkJetPrinter::InkJetPrinter(int availableInk)  : Printer()
{
  setModel();
  setManufacturer();
  setAvailableCount();
  this->availableInk = availableInk;
}

void InkJetPrinter::printInkJet(int pages)
{
  if(print(pages))
	availableInk-=pages;
}
