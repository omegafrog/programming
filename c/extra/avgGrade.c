#include<stdio.h>

int main(){
	int korean,literature,programming;
	int sum=0;

	printf("korean,literature,programming������ �Է��ϼ���:");

	scanf("%d%d%d",&korean,&literature,&programming);

	sum = korean+literature+programming;

	printf("����� %lf�Դϴ�.\n������ %d�Դϴ�.\n",sum/3.0,sum);
}
