#include <stdio.h>
#include <string.h>
#include "stack.h"
#include "checkparency.h"



int checkparency(char input[]){
  StackType s;  // stack for bracket(,{,[ ...
  init_stack(&s); //init stack
  
  int len; //input[]'s length
  char ch; // input[i]
  char temp; // when ch==),},] and stack is not empty, compare temp with ch.
  len =strlen(input); 

  for(int i=0;i<len;i++){
    ch=input[i];  //put input[i] to ch
    switch(ch){ 
    case '(': case '{': case '[': push(&s,ch);break;  // if ch ==(,{,[ , then push ch to the stack.
    case ')': case '}': case ']': //
      if(is_empty(&s)) return 0;  // when parency is true, if ch == ), } ,] then (,{,[ is in the stack. 
      else{ //ch == ),},] && stack is not empty
	temp=pop(&s);   
	if((temp=='('&&ch!=')')||              // ex) '(' <-> '}'
	   (temp=='{'&&ch!='}')||              //
	   (temp=='['&&ch!='}')) return 0;     //
      }
      break;
    default: continue; // ch !=(,),{,},[,] pass
    }
  }
  if((!is_empty(&s))) return 0; // roop is over, but bracket is left yet. it means odd-bracket ( ex)3+(4+5)} ) 

  return 1; //parency is true, return 1
}

int calccheck(char input[]){ //evaluate only '(', ')'
  int i=0;
  while(input[i]!='\0'){
    if(input[i]=='{'||input[i]=='}'||
       input[i]=='['||input[i]==']') return 0; 
    i++;
  }
  return 1;
}

  
      
      
      
      
    
  
