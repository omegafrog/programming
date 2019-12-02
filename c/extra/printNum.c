#include<stdio.h>

int main(){
	int num;

	printf("정수값을 입력하여라: ");
	scanf("%d",&num);
	
	printf("\n");
	printf("10진수 %d는\n8진수로 %#o이고,\n16진수로 %#x이다.\n\n",num,num,num);//0x,0붙일라면 #이용
}
