#include<stdio.h>
#include<math.h>

int main(){
	int rad;
	int velocity;
	double track;
	double time;


	printf("트랙의 반지름과 차의 속력을 입력하세요.\n");

	scanf("%d%d",&rad,&velocity);

	track = rad*2*M_PI;
	
	time = track/velocity;
	
	printf("걸린 시간은 %.3f분입니다.\n",time*60);
}	
