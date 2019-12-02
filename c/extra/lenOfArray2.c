#include<stdio.h>
int i;
int len2(char array1[]) {
	for ( i = 0;; i++) {
		if (array1[i] == 0) {
			break;
		}
	}
	return (i-1);
}