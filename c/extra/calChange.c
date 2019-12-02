#include<stdio.h>

int main(){
	int input;
	int charge;
	int w50000,w10000,w5000,w1000,w500,w100;

	printf("돈을 넣으세요:");

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

	printf("잔돈은 50000원권 %d장, 10000원 권 %d장, 5000원 권 %d장, 1000원 권 %d장, 500원 권 %d 개, 100원 권 %d개 입니다.\n",w50000,w10000,w5000,w1000,w500,w100);
}

