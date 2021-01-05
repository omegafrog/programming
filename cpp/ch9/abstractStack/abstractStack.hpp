#ifndef ABSTRACTSTACK_H
#define ABSTRACTSTACK_H

#include <iostream>
using namespace std;

class AbstractStack {
public:
  virtual bool push(int n) = 0;
  virtual bool pop(int &n) = 0;

  virtual int size() = 0;
};

#endif /* ABSTRACTSTACK_H */
