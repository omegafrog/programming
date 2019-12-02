#include<stdio.h>
#define PI 3.141592

int main(){
  int rad;
  char input;
  
  while(1){
    printf("mode(A=area,C=Circumference,Q=Quit):");
    scanf("%c",&input);

    if(input=='A'){
      printf("radius:");
      scanf("%d",&rad);
      
      printf("The circle of area is %lf.\n",PI*rad*rad);
      getchar();
    }
    else if(input=='C'){
      printf("radius:");
      scanf("%d",&rad);

      printf("The circle of circumference is %lf.\n",2*PI*rad);
      getchar();
    }
    else if(input=='Q')
      return 0;
  }
}
