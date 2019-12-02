#include<stdio.h>
#include<malloc.h>

int main(){
	int count;//N
	int num;//x
	int *p;

	scanf("%d%d",&count,&num);

	p=(int*)malloc(sizeof(int)*count);
	
	for(int i =0;i<count;i++)
		scanf("%d",p+i);
	for(int x = 0;x<count;x++){
		if(*(p+x)<num){
			printf("%d",*(p+x));
			if(x!=count-1)
				printf(" ");
		}	
	}
}
