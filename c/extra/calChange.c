#include<stdio.h>

int main(){
	int input;
	int charge;
	int w50000,w10000,w5000,w1000,w500,w100;

	printf("���� ��������:");

	scanf("%d",&input);

	charge = input-150;

	w50000=charge/50000;
	charge-=w50000*50000;

	w10000=charge/10000;
	charge-=w10000*10000;

	w5000=charge/5000;
	charge-=w5000*5000;

	w1000=charge/1000;
	charge-=w1000*1000;

	w500=charge/500;
	charge-=w500*500;
	
	w100=charge/100;
	charge-=w100*100;

	printf("�ܵ��� 50000���� %d��, 10000�� �� %d��, 5000�� �� %d��, 1000�� �� %d��, 500�� �� %d ��, 100�� �� %d�� �Դϴ�.\n",w50000,w10000,w5000,w1000,w500,w100);
}

