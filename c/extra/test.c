#include<stdio.h>

typedef struct Person {
	char name[12];
	int age;
}Person;
int main() {
	Person data[5];
	Person* p;
	p = &data;
	data[0].age = 12;
	data[1].age = 24;
	scanf("%d", (*(p + 1)).age);
	printf("%d", (*(p + 1)).age);
}
