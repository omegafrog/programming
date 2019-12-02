#include<stdio.h>

typedef struct Person {
	char name[9];
	unsigned short int age;
	double height;
	double weight;
}Person;

int main() {
	Person data;

	printf("대상자의 정보를 입력하세요.\n");
	printf("이름 : ");
	scanf("%s", &data.name);
	printf("나이 : ");
	scanf("%u", &data.age);
	printf("키 : ");
	scanf("%lf", &data.height);
	printf("몸무게 : ");
	scanf("%lf", &data.weight);

	printf("\n입력한 정보는 다음과 같습니다.\n");
	printf("%s : %u세, %5.1fcm, %4.1fKg", data.name, data.age, data.height, data.weight);
}
