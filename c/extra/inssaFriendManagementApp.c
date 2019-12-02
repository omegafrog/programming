#include<stdio.h>
#define MAX_COUNT	5


typedef struct Person {
	char name[14];
	unsigned short int age;
	double height;
	double weight;
}Person;


int AddFriend(Person* data,int count);
void ShowFriendList(Person* data,int count);


int main() {
	int count = 0;
	int select;

	Person data[MAX_COUNT];
	Person *p;
	p= &data;

	while (1) {

		printf("    	       [ �޴� ]	            \n====================================\n1. ģ�� �߰�\n2. ģ�� ��� ����\n3. ����\n====================================\n��ȣ ���� : ");

		scanf("%d", &select);

		switch (select) {
		case 1:
			if (1 == AddFriend(p, count))count++;
			break;
		case 2:
			ShowFriendList(p,count);
			break;
		case 3:
			return 0;
		default:
			printf("1,2,3�� �ϳ��� ���� �Է��ϼ���.\n\n");
		}
	}
}
int AddFriend(Person*data,int count) {
	if (count < MAX_COUNT) {
		printf("���ο� ģ�� ������ �Է��ϼ���.\n");
		printf("1.�̸� : ");
		scanf("%s", (data + count)->name);//data+count�� �ּҷ� ���� name�̶�� ��ҿ� �����ض�->�ٵ� name�� �迭�̶� ù��° �ּҰ��� ��ȯ��->&�ʿ����
		printf("2.���� : ");
		scanf("%hu", &((data + count)->age));
		printf("3.Ű : ");
		scanf("%lf", &((data + count)->height));
		printf("4.������ : ");
		scanf("%lf", &((data + count)->weight));
		printf("�Է��� �Ϸ��߽��ϴ�.\n");
		return 1;
	}
	else {
		printf("�ִ� �ο��� �ʰ��Ͽ� �Է��� �� �� �����ϴ�.\n");
		printf("�ִ� %d������� ���� �����մϴ�.\n", MAX_COUNT);
		return 0;
	}
	
}
void ShowFriendList(Person*data,int count) {
	if (count > 0) {

		for (int i = 0; i < count; i++) {
			printf("��ϵ� ģ�� ���\n");
			printf("====================================\n");
			printf("%-14s,%3d,%6.2f,%5.2f\n", (data+i)->name,(data+i)->age,(data+i)->height,(data+i)->weight);
			printf("====================================\n");
		}
	}
	else {
		printf("��ϵ� ģ���� �����ϴ�.\n");
	}
}

		