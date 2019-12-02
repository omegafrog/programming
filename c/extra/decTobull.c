#include<stdio.h>

int main(){
	int dec=0;
	int bull;
	char num1,num2,num3,num4;

	scanf("%d",&bull);

	num1 = (bull/1000)%10;
	num2 = (bull/100)%10;
	num3 = (bull/10)%10;
	num4 = (bull)%10;

	dec+=num4+num3*2+num2*4+num1*8;

	printf("%d",dec);
}	
