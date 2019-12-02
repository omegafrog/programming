#include<stdio.h>

int main(){
  int num;

  printf("put your level:");
  scanf("%d",&num);

  switch (num){
      case 1:
	printf("first grade.\n");
	break;
      case 2:
	printf("second grade.\n");
	break;
      case 3:
	printf("third grade.\n");
	break;
      case 4:
	printf("fourth grade.\n");
	break;
    }
}
