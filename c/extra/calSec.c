#include<stdio.h>

int main(){
	int hour;
	int min;
	int sec;
	
	printf("현재 시간을 입력하세요\n");

	scanf("%d%d%d",&hour,&min,&sec);

	min+=hour*60;
	sec+=min*60;

	printf("오늘 당신이 허비한 시간은 %d초 입니다.\n",sec);
}

