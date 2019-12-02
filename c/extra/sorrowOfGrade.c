#include<stdio.h>
#include<malloc.h>

double calAvgGrade(int count2);
int main(){
	int count;
	int count2;
	double *result;

	scanf("%d",&count);
	result = (double*)malloc(sizeof(double)*count);


	for(int i=0;i<count;i++){
		scanf("%d",&count2);	
		*(result+i) = calAvgGrade(count2);
	}
	for(int i=0;i<count;i++)
		printf("%5.3lf%%\n",*(result+i));
}

double calAvgGrade(int count){
	int *p;
	int sum=0;
	double avg;
	int upAvg=0;
	double result;
	
	p=(int*)malloc(sizeof(int)*count);

	for(int i=0;i<count;i++)
		scanf("%d",p+i);
	for(int i=0;i<count;i++)
		sum+=*(p+i);
	avg = sum/count;

	for(int i=0;i<count;i++){
		if(*(p+i)>avg)
			upAvg++;
	}
	result = (double)upAvg/(double)count*100;

	return result;
}
