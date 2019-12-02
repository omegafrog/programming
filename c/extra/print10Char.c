#include<stdio.h>

int main(){
	char string[101];

	scanf("%s",string);

	for(int i=1;string[i-1]!='\0';i++){
		printf("%c",string[i-1]);
		if(i%10==0)
			printf("\n");
	}
}
