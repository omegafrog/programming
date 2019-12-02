#include<stdio.h>
#include<string.h>
int Reverse() {
	char array1[20];
	int arraylen = 0;
	fgets(array1, 30, stdin);
	arraylen = strlen(array1);
	for (int i = 0; i < (arraylen - 1) / 2; i++) {
		char temp;
		temp = array1[i];
		array1[i] = array1[arraylen - 1 - i];
		array1[arraylen - i - 1] = temp;
	}
	printf("%s", array1);
}

		

