#include<stdio.h>
#include<malloc.h>

int main() {
	int *sum_list, count = 0, sum = 0, limit = 0;
	printf("��� ���ҷ���?\n");
	scanf("%d", &limit);
	sum_list = (int*)malloc(sizeof(int)*limit);//malloc�� ����void*���·� ��ȯ�ؼ� ó�� �޸��Ҵ�� ����ȯ���ִ°�������.����malloc�� ���ڿ� �����������̱����� �����Ծ�//

	while (count < limit) {
		printf("�Է�: ");
		scanf("%d", (sum_list + count));
		printf("(�������� 0000�� �Է���)\n");
		if (*(sum_list + count) == 0000)break;
		count++;
	}

	for (int i = 0; i < count; i++) {
		sum += *(sum_list + i);
		(i < count - 1) ? printf("%d + ", *(sum_list + i)) : printf("%d = %d", *(sum_list + i), sum);
	}

	free(sum_list);
}