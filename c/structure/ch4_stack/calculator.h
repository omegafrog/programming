#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "stack.h"

int prec(char op);
void changexp(char input[MAX_STACK_SIZE], char exp[MAX_STACK_SIZE]);
element evil(char exp[]);

#endif
