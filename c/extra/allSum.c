#include<stdio.h>

int main(){
	int num;
	int sum=0;
	printf("1���� ����� ���Ͻðڽ��ϱ�?:");

	scanf("%d",&num);

	int i = 0;
	while(i<=num){
		sum+=i;
		i++;
	}
// for(int i  = 0;i<=num;i++){
// 	sum+=i;
// 	}
	printf("���� %d�Դϴ�\n",sum);
}

