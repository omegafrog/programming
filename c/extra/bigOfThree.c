#include<stdio.h>

int main(){
	int num[3];
	int temp;

	scanf("%d%d%d",num,num+1,num+2);

	for(int i = 0;i<2;i++){
		for(int j = 0;j<3-i-1;j++){
			if(num[j]<num[j+1]){
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	printf("%d",num[1]);
}
