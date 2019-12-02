#include<stdio.h>

int main(){
  int num;
  int num1,num2,num3,num4;
  while(1){
    printf("put the num or exit less than 1000:");
    scanf("%d",&num);

    if(num>=1000){
      num1 = num/1000%10;
      num2 = num/100%10;
      num3 = num/10%10;
      num4 = num%10;
      if(num1%2==0)
	printf("%d : even,",num1);
      else
	printf("%d : odd,",num1);
      if(num2%2==0)
	printf("%d : even,",num2);
      else
	printf("%d : odd,",num2);
      if(num3%2==0)
	printf("%d : even,",num3);
      else
	printf("%d : odd,",num3);
      if(num4%2==0)
	printf("%d : even\n",num4);
      else
	printf("%d : odd\n",num4);
    }
    else
      printf("exit\n");
      return 0;
  }
  /////////////////////////////////switch////////////////////////////////
  
}
