#include "abstractStack.hpp"
#include <iostream>

#define MAX_STACK_ELEMENT 100
using namespace std;

class IntStack : public AbstractStack {
private:
  int *mem;
  int top;
  int cursize;

public:
  IntStack() {
    mem = new int[MAX_STACK_ELEMENT];
    top = -1;
    cursize = 0;
  }
  virtual ~IntStack() { delete[] mem; }

  bool isEmpty() { return top == -1; }
  bool isFull() { return cursize == MAX_STACK_ELEMENT; }

  bool push(int n) {
    if (!isFull()) {
      mem[++top] = n;
      cursize++;
      return true;
    } else
      return false;
  }
  bool pop(int &n) {
    if (!isEmpty()) {
      n = mem[--top];
      cursize--;
      return true;
    } else
      return false;
  }

  int size() { return cursize; }
};

int main() {
  IntStack s;
  int n = 0;
  cout << s.push(1);
  cout << s.push(2);
  cout << s.push(3);
  cout << s.pop(n);
  cout << n << endl;
}
