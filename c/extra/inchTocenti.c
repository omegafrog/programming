#include<stdio.h>

double main(){
	double inch;
	double centi;

	printf("���̸� �Է��Ͻÿ�(inch):");

	scanf("%lf",&inch);

	centi = 2.54*inch;

	printf("%lfinch�� %lfcm�Դϴ�.\n",inch,centi);
}
