#include<stdio.h>

int main(){
	int num;
	int sum=0;
	printf("1부터 몇까지 더하시겠습니까?:");

	scanf("%d",&num);

	int i = 0;
	while(i<=num){
		sum+=i;
		i++;
	}
// for(int i  = 0;i<=num;i++){
// 	sum+=i;
// 	}
	printf("합은 %d입니다\n",sum);
}

