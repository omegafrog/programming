//a.b.c ������ �Է¹ް� ���� ū ���� ����ϴ� ���α׷�
#include<stdio.h>

int main(){
	int a,b,c;
	int result;

	scanf("%d%d%d",&a,&b,&c);
	
	//a�� b�߿� ū ���� result�� ����
	result = (a>b)?a:b;
	//result�� c�߿��� ū ���� result�� ����
	result = (result>c)?result:c;

	printf("%d\n",result);
}
