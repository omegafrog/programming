#include "myStack.hpp"

MyStack::MyStack(int capacity)  : BaseArray(capacity)
{
	top = -1;
	size = 0;
}

void MyStack::push(int n)
{
	put(++top, n);
	size++;
}

int MyStack::pop()
{
	size--;
	return get(top--);
}

int MyStack::capacity()
{
	return getCapacity();
}

int MyStack::length()
{
	return size;
}






