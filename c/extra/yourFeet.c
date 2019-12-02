#include<stdio.h>

int main(){
	int height;
	double feet;
	double inch;

	printf("키를 입력하세요(cm):");

	scanf("%d",&height);

	feet = height/30.48;
	inch = height/2.54;

	printf("너의 키는 %3.2ffeet이고 %3.2finch이다 .\n",feet,inch);
}

