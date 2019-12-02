///직원의 연령층을 다양하게///
#include<stdio.h>
#include<malloc.h>
int main() {
	unsigned char *p_limit_age;
	unsigned char **p;
	int age_step = 3;

	printf("20대부터 시작해서 연령층이 몇 개인가요?: \n");
	scanf("%d", &age_step);

	p_limit_age = (unsigned char*)malloc(sizeof(unsigned char)*age_step);

	int age, member, temp, sum;

	p = (unsigned char**)malloc(sizeof(unsigned char*)*age_step);
	for (age = 0; age < age_step; age++) {
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
		printf("이 연령대는 몇 명입니까? : ");
		scanf("%d", &temp);
		*(p_limit_age + age) = (unsigned char)temp;

		
		*(p + age) = (unsigned char*)malloc(sizeof(unsigned char)*(*(p_limit_age)));
		for (member = 0; member < *(p_limit_age+age); member++) {
			printf("%dth : ", member + 1);
			scanf("%d", &temp);
			*(*(p + age) + member) = (unsigned char)temp;
		}
	}

	printf("\n연령별 평균 윗몸 일으키기 횟수\n");
	for (age = 0; age < age_step; age++) {
		printf("%d0대 : ", age + 2);
		sum = 0;
		for (member = 0; member < *(p_limit_age + age); member++)
			sum += *(*(p + age) + member);
		printf("%5.2f\n", (double)sum / (*(p_limit_age + age)));
	}
}