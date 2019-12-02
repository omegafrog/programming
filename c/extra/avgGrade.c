#include<stdio.h>

int main(){
	int korean,literature,programming;
	int sum=0;

	printf("korean,literature,programming점수를 입력하세요:");

	scanf("%d%d%d",&korean,&literature,&programming);

	sum = korean+literature+programming;

	printf("평균은 %lf입니다.\n총점은 %d입니다.\n",sum/3.0,sum);
}
