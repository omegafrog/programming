#include<stdio.h>

double main(){
	double inch;
	double centi;

	printf("길이를 입력하시오(inch):");

	scanf("%lf",&inch);

	centi = 2.54*inch;

	printf("%lfinch는 %lfcm입니다.\n",inch,centi);
}
