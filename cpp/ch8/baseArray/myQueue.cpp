#include "myQueue.hpp"

MyQueue::MyQueue(int capacity) : BaseArray(capacity) {
  front = -1;
  rear = -1;
  size = 0;
}

void MyQueue::enqueue(int n) {
  put(++rear, n);
  size++;
}

int MyQueue::capacity() { return getCapacity(); }

int MyQueue::length() { return size; }

int MyQueue::dequeue() {
  size--;
  return get(++front);
}
