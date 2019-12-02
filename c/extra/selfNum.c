#include<stdio.h>
#include<malloc.h>

int dfunc(int num);

int main(){
	int num=0;
	int *p;

	p = (int*)malloc(sizeof(int)*10000);
	
	register int i = 0;
	while(i<10000){
		num = dfunc(i);		
		if(num >10000)
			break;
