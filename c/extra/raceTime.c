#include<stdio.h>
#include<math.h>

int main(){
	int rad;
	int velocity;
	double track;
	double time;


	printf("Ʈ���� �������� ���� �ӷ��� �Է��ϼ���.\n");

	scanf("%d%d",&rad,&velocity);

	track = rad*2*M_PI;
	
	time = track/velocity;
	
	printf("�ɸ� �ð��� %.3f���Դϴ�.\n",time*60);
}	
