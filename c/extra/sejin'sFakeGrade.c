#include<stdio.h>
#include<malloc.h>

int main(){
	int count;
	double *p;
	double temp;
	double biggest=0;//M
	double sum=0;

	scanf("%d",&count);

	p=(double*)malloc(sizeof(double)*count);

	for(int i = 0;i<count;i++)
		scanf("%lf",p+i);
	
	for(int x = 0;x<count;x++){
		if(*(p+x)>biggest)
			biggest = *(p+x);
	}
	for(int i=0;i<count;i++)
		*(p+i)=*(p+i)/biggest*100;	
	for(int i=0;i<count;i++)
		sum+=*(p+i);
	printf("%lf",sum/(double)count);
}
