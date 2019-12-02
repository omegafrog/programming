//a.b.c 세수를 입력받고 가장 큰 수를 출력하는 프로그램
#include<stdio.h>

int main(){
	int a,b,c;
	int result;

	scanf("%d%d%d",&a,&b,&c);
	
	//a와 b중에 큰 값을 result에 대입
	result = (a>b)?a:b;
	//result와 c중에서 큰 값을 result에 대입
	result = (result>c)?result:c;

	printf("%d\n",result);
}
