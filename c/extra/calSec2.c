#include<stdio.h>

int main(){
	int sec;
	int min;
	int hour;

	scanf("%d",&sec);

	hour = sec/3600;
	sec-=hour*3600;
	
	min = sec/60;
	sec-=min*60;
	
	printf("%d�ð� %d�� %d��\n",hour,min,sec);
}	
