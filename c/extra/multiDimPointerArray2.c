//각 연령층에 포함된 인원수가 변함-배열사용불가-동적메모리할당필요//
#include<stdio.h>
#include<malloc.h>
int main() {
	unsigned char limit_age[3];
	unsigned char *p[3];

	int age, temp, member, sum;

	for (age = 0; age < 3; age++) {
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
		printf("이 연령대는 몇 명입니까? : ");
		scanf("%d", &temp);
		limit_age[age] = (unsigned char)temp;
		p[age] = (unsigned char*)malloc(sizeof(unsigned char)*limit_age[age]);

		for (member = 0; member < limit_age[age]; member++) {
			printf("%dth : ", member + 1);
			scanf("%d", &temp);
			*(p[age]+member) = (unsigned char)temp;
		}
	}

	printf("\n연령별 평균 윗몸 일으키기 횟수\n");

	for (age = 0; age < 3; age++) {
		printf("%d0대 : ", age + 2);
		sum = 0;
		for (member = 0; member < limit_age[age]; member++) {
			sum += *(p[age]+member);
		}
		printf("%5.2f\n", (double)sum / limit_age[age]);
		free(p[age]);
	}
	
}
