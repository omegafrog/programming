#include<stdio.h>

int main(){
	int hour;
	int min;
	int sec;
	
	printf("���� �ð��� �Է��ϼ���\n");

	scanf("%d%d%d",&hour,&min,&sec);

	min+=hour*60;
	sec+=min*60;

	printf("���� ����� ����� �ð��� %d�� �Դϴ�.\n",sec);
}

