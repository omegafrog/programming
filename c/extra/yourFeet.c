#include<stdio.h>

int main(){
	int height;
	double feet;
	double inch;

	printf("Ű�� �Է��ϼ���(cm):");

	scanf("%d",&height);

	feet = height/30.48;
	inch = height/2.54;

	printf("���� Ű�� %3.2ffeet�̰� %3.2finch�̴� .\n",feet,inch);
}

