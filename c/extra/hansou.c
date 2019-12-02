#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int hanFunc(int num);

int main(){
	int num;
	int count = 0;

	scanf("%d",&num);

	int i =1;
	while(i<=num){
		if(hanFunc(i)==1)
			count++;
		i++;
	}
	printf("%d",count);
}

int hanFunc(int num){
	int number[4];

	int result=0;//각 자리수의 차가 같다면 1,다르면 0이 대입됨.

	if(num>=1000){
		for(int i =0;i<4;i++){
			int power = pow(10.0,(double)i);
			number[i]=(num/power)%10;
		}
		int a = number[0]-number[1];
		int b = number[1]-number[2];
		int c = number[2]-number[3];

		if((a==b)&&(b==c)&&(c==a))
			result =1;
		else
			result = 0;
	}
	else if(num>=100){
		for(int i =0;i<4;i++){
			int power = pow(10.0,(double)i);
			number[i]=(num/power)%10;
		}
		int a = number[0]-number[1];
		int b = number[1]-number[2];
		int c = number[2]-number[3];

		if(a==b)
			result =1;
		else
			result=0;
	}
	else if(num>10)
		result = 1;
	else
		result = 1;

	if(result == 1)
		return 1;
	else
		return 0;
}
