//�� �������� ���Ե� �ο����� ����-�迭���Ұ�-�����޸��Ҵ��ʿ�//
#include<stdio.h>
#include<malloc.h>
int main() {
	unsigned char limit_age[3];
	unsigned char *p[3];

	int age, temp, member, sum;

	for (age = 0; age < 3; age++) {
		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
		printf("�� ���ɴ�� �� ���Դϱ�? : ");
		scanf("%d", &temp);
		limit_age[age] = (unsigned char)temp;
		p[age] = (unsigned char*)malloc(sizeof(unsigned char)*limit_age[age]);

		for (member = 0; member < limit_age[age]; member++) {
			printf("%dth : ", member + 1);
			scanf("%d", &temp);
			*(p[age]+member) = (unsigned char)temp;
		}
	}

	printf("\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");

	for (age = 0; age < 3; age++) {
		printf("%d0�� : ", age + 2);
		sum = 0;
		for (member = 0; member < limit_age[age]; member++) {
			sum += *(p[age]+member);
		}
		printf("%5.2f\n", (double)sum / limit_age[age]);
		free(p[age]);
	}
	
}
