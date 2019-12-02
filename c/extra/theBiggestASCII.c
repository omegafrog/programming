#include<stdio.h>
#include<string.h>
int main() {
	char array1[30];
	char biggest=0;
	fgets(array1, 30, stdin);
	int arraylen = strlen(array1) - 1;
	for (int i = 0; i <= arraylen; i++) {
		if (biggest<array1[i]) {
			 biggest=array1[i];
		}
	}
	printf("%c", biggest);
}