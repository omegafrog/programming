#include <iostream>
#include <limits>
#include "myQueue.hpp"
#include "myStack.hpp"

using namespace std;

int main() {
  MyQueue mQ(100);
  int n;
  cout << "enter five integers enqueue to mQ>> ";
  for (int i = 0; i < 5; i++) {
    while (!(cin >> n)) {
      cout << "wrong input. try again>>";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    mQ.enqueue(n);
  }
  cout << "capacity of queue:" << mQ.capacity()
       << ", size of queue:" << mQ.length() << endl;
  cout << "print queue's element dequeueing in sequence.>>";
  while (mQ.length() != 0) {
    cout << mQ.dequeue() << ' ';
  }
  cout << endl << "current size of queue: " << mQ.length() << endl;
  
  MyStack mS(100);
  int s;
  cout << "enter five integers push to mS>> ";
  for (int i = 0; i < 5; i++) {
    while (!(cin >> s)) {
      cout << "wrong input. try again>>";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    mS.push(s);
  }
  cout << "capacity of stack:" << mS.capacity()
       << ", size of stack:" << mS.length() << endl;
  cout << "print queue's element popping in sequence.>>";
  while (mS.length() != 0) {
    cout << mS.pop() << ' ';
  }
  cout << endl << "current size of stack: " << mS.length() << endl;
}
