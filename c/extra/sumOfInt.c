#include<stdio.h>
#include<malloc.h>

int main() {
	int *sum_list, count = 0, sum = 0, limit = 0;
	printf("몇개를 더할래오?\n");
	scanf("%d", &limit);
	sum_list = (int*)malloc(sizeof(int)*limit);//malloc는 원래void*형태로 반환해서 처음 메모리할당시 형변환해주는것이좋음.또한malloc의 인자에 가독성을높이기위해 저렇게씀//

	while (count < limit) {
		printf("입력: ");
		scanf("%d", (sum_list + count));
		printf("(끝내려면 0000을 입력해)\n");
		if (*(sum_list + count) == 0000)break;
		count++;
	}

	for (int i = 0; i < count; i++) {
		sum += *(sum_list + i);
		(i < count - 1) ? printf("%d + ", *(sum_list + i)) : printf("%d = %d", *(sum_list + i), sum);
	}

	free(sum_list);
}