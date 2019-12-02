#include<stdio.h>

int main(){
	int grade;

	scanf("%d",&grade);

	if(grade>89)
		printf("A");
	else if(grade>79)
		printf("B");
	else if(grade>69)
		printf("C");
	else if(grade>59)
		printf("D");
	else
		printf("F");

}
