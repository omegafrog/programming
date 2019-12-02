#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>

void arithmetic();

int main(){
  arithmetic();
  return 0;
}

void arithmetic(){
  char *p, *a, *b, op, *ch;
  int n;
  errno=0;
  double op1,op2;

  errno=0;
  n=scanf("%ms%ms%ms",&a,&p,&b);//allocate memories and give the address of memory to a
  if(n>=1){
    op1=strtod(a,&ch);//strtod:change a string in number, if string has character, it stop and give rest string to argument 2
    strncpy(&op,p,1);//strncpy:copy the parameter 2 in parameter 1 to parameter 3 times
    op2=strtod(b,&ch);
  
  switch(op){
  case '+':
    printf("%lf %c %lf =%lf\n",op1,op,op2,op1+op2);
    break;
  case '-':
    printf("%lf %c %lf = %lf\n",op1,op,op2,op1-op2);
    break;
  case '*':
    printf("%lf %c %lf = %lf\n",op1,op,op2,op1*op2);
    break;
  case '/':
    printf("%lf %c %lf = %lf\n",op1,op,op2,op1/op2);
    break;
  }free(p);free(a);free(b);
  }else{
    fprintf(stderr, "NO matching characters\n");
      }
}
