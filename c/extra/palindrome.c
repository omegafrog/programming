#include<stdio.h>
#include<string.h>

int Palindrome(char arr[]);
int main() {
	char arr1[20];
	scanf("%s", arr1);
	switch (Palindrome(arr1)) {
	case 1:
		printf("회문입니다.\n");
		break;
	case 2:
		printf("회문이 아닙니다.\n");
		break;
	}
}

int Palindrome(char arr[]) {
	int len = strlen(arr);
	int a = 0;
	for (int x = 0; x < len / 2; x++) {
		if (*(arr + x) == *(arr + len - 1 - x))
			a = 1;
		else {
			a = 0;
			break;
		}

	}
	return a;
}