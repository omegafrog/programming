#include<stdio.h>

typedef struct Person {
	char name[9];
	unsigned short int age;
	double height;
	double weight;
}Person;

int main() {
	Person data;

	printf("������� ������ �Է��ϼ���.\n");
	printf("�̸� : ");
	scanf("%s", &data.name);
	printf("���� : ");
	scanf("%u", &data.age);
	printf("Ű : ");
	scanf("%lf", &data.height);
	printf("������ : ");
	scanf("%lf", &data.weight);

	printf("\n�Է��� ������ ������ �����ϴ�.\n");
	printf("%s : %u��, %5.1fcm, %4.1fKg", data.name, data.age, data.height, data.weight);
}
