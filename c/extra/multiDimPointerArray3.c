///������ �������� �پ��ϰ�///
#include<stdio.h>
#include<malloc.h>
int main() {
	unsigned char *p_limit_age;
	unsigned char **p;
	int age_step = 3;

	printf("20����� �����ؼ� �������� �� ���ΰ���?: \n");
	scanf("%d", &age_step);

	p_limit_age = (unsigned char*)malloc(sizeof(unsigned char)*age_step);

	int age, member, temp, sum;

	p = (unsigned char**)malloc(sizeof(unsigned char*)*age_step);
	for (age = 0; age < age_step; age++) {
		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
		printf("�� ���ɴ�� �� ���Դϱ�? : ");
		scanf("%d", &temp);
		*(p_limit_age + age) = (unsigned char)temp;

		
		*(p + age) = (unsigned char*)malloc(sizeof(unsigned char)*(*(p_limit_age)));
		for (member = 0; member < *(p_limit_age+age); member++) {
			printf("%dth : ", member + 1);
			scanf("%d", &temp);
			*(*(p + age) + member) = (unsigned char)temp;
		}
	}

	printf("\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");
	for (age = 0; age < age_step; age++) {
		printf("%d0�� : ", age + 2);
		sum = 0;
		for (member = 0; member < *(p_limit_age + age); member++)
			sum += *(*(p + age) + member);
		printf("%5.2f\n", (double)sum / (*(p_limit_age + age)));
	}
}