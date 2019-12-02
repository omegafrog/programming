#include<stdio.h>
#include<malloc.h>
int main() {
	char ***p;
	p = (char ***)malloc(sizeof(char***) * 2);
	for (int x = 0; x < 2; x++) {
		*(p + x) = (char**)malloc(sizeof(char**) * 3);
		for (int i = 0; i < 3; i++)
			*(*(p+x) + i) = (char*)malloc(sizeof(char*) * 4);
	}
	free(**p);
	free(*(*p+1));
	free(*(*p+2));
	free(*p);
	free(**(p + 1));
	free(*(*(p + 1) + 1));
	free(*(*(p + 1) + 2));
	free(*(p + 1));
	free(p);
}

