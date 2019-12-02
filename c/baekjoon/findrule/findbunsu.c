#include<stdio.h>

int summation(int, int);

int main(){
  int num;
  scanf("%d",&num);
  
  int i=2;
  int a,b;
  
  for(;;){
    a=summation(2,i);
    b=summation(3,i+1);

    if((num>=a)&&(num<=b))
      break;
    i++;
  }
  if(i%2==0)
    printf("%d/%d",1+num-a,i-(num-a));
  else if(i%2!=0)
    printf("%d/%d",i-(num-a),1+num-a);
}

int summation(int start, int end){
  int sum=start;
  for(start;start<end;start++){
    sum+=start;
  }
  return sum;
}
