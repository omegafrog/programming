#include<stdio.h>
void OddCheck(int *arr) {
	int OddArr[10] ;
	int count = 0;
	for (int i = 0; i < 10; i++) {
		if (*(arr + i) % 2 != 0) {
			*(OddArr + count) = *(arr + i);
			count++;
		}
	}
		for (int x = count; x <10;x++) {
			*(OddArr + x) = '\0';
		}
	printf("È¦¼ö: ");
	for (int i = 0; i < 10; i++) {
		if (*(OddArr + i) == '\0')
			break;
		printf("%d ", *(OddArr + i));
	}
	printf("\n");
}