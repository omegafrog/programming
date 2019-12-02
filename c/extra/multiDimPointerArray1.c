#include<stdio.h>
int main() {
	unsigned int limit_age[3] = { 4,2,3 };
	unsigned char count[3][4];
	
	int age, temp, member, sum;
	for (age = 0; age < 3; age++) {
		printf("\n%d0´ë ¿¬·ÉÀÇ À­¸ö ÀÏÀ¸Å°±â È½¼ö\n", age + 2);
		for (member = 0; member < limit_age[age]; member++) {

			printf("%dth : ", member + 1);
			scanf("%d", &temp);
			count[age][member] = (unsigned char)temp;
		}
	}

	printf("\n\n ¿¬·Éº° Æò±Õ À­¸ö ÀÏÀ¸Å°±â È½¼ö\n");
	for (age = 0; age < 3; age++) {
		printf("%d0´ë : ",age+2);
		sum = 0;
		for (member = 0; member < limit_age[age]; member++) {
			
			sum += count[age][member];
		}
		printf("%5.2f\n",(double)sum / limit_age[age]);
	}
}
			