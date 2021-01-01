#ifndef COMPACTDISC_H
#define COMPACTDISC_H

#include <iostream>
#include <limits>
#include "product.hpp"
using namespace std;

class compactDisc : public Product{
private:
  string title;
  string singer;
public:
  compactDisc(int id);

  void setTitle();
  void setSinger();

  string getTitle();
  string getSinger();
};


#endif /* COMPACTDISC_H */
