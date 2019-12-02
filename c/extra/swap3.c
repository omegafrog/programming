#include<stdio.h>
void Swap3(int *num1, int *num2, int *num3) {
	int temp1, temp2;
	temp1 = *num1;
	temp2 = *num2;
	*num1 = *num3;
	*num2 = temp1;
	*num3 = temp2;
}
