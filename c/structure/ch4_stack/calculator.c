#include <stdio.h>
#include <string.h>
#include "calculator.h"
#include "stack.h"
int prec(char op){  //change operator's priority
  switch(op){
  case '(': case ')': return 0; 
  case '+': case '-': return 1;
  case '*': case '/': return 2;
  default: return -1;
  }
}

void changexp(char input[], char exp[]){ //make input[] to postfix
  StackType s; 
  int i=0;
  char ch, top_op;
  init_stack(&s);


  //rule
  //number->push
  //first operator->push
  //next operator->if stack.data[top]'s priority is bigger than one, pop, and push
  //'(' -> push
  //')' -> while pop=='(' pop
  




  //stack->operator push
  int x=0;
  while(input[i]!='\0'){
    ch=input[i];

    switch(ch){
    case '(':
      push(&s,ch);
      break;
    case ')':
      top_op=pop(&s);
      while(top_op!='('){
	exp[x]=top_op;
	x++;
	top_op=pop(&s);
      }
      break;
    case '+': case '-': case '*': case '/':
      while(prec(peek(&s))>=prec(input[i])){
	exp[x]=pop(&s);
	x++;
      }
      push(&s,ch);
      break;
    default:
      exp[x]=ch;
      x++;
      break;
    }
  
    i++;
  }
  while(!is_empty(&s)){
    exp[x]=pop(&s);
     x++;
  }
  exp[x]='\0';
}

// rule
// number-> push
// operator -> operand2=pop, operand1=pop , push(op2 (operator) op1)
// last value in stack is result

element evil(char exp[]){
  int op1, op2, value, i=0;
  int len =strlen(exp);
  char ch;
  StackType s;  // stack for evail
  init_stack(&s);
  for(int i=0;i<len;i++){
    ch=exp[i];
    if(ch!='+'&&ch!='-'&&ch!='*'&&ch!='/'){
      value=ch-'0';
      push(&s,value);
  
  }
    else{
      op2=pop(&s);
      op1=pop(&s);
      switch(ch){
      case'+':
	push(&s, op1+op2); break;
      case'-':
	push(&s, op1-op2); break;
      case'*':
	push(&s, op2*op1); break;
      case'/':
	push(&s, op1/op2); break;
      }
    }
  }
  return pop(&s);
}



