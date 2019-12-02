#include<stdio.h>
#include<malloc.h>


typedef struct Node {
	char name[14];
	unsigned short korean;
	unsigned short english;
	unsigned short math;
	double avg;
	struct Node *next_grade;
}GRADE;

GRADE *p_head = NULL;
GRADE *p_tail = NULL;

void addNewGrade(GRADE **pp_head, GRADE **pp_tail,int *count);
void showGrade(GRADE *p_head, int *count);

int main() {
	int count = 0;
	int temp;

	while (1) {

		printf("\n[Menu]\n");
		printf("1.���� �Է�\n");
		printf("2.���� Ȯ��\n");
		printf("3.����\n");
		printf("---------\n");
		printf("����(1~3):");
		
		if (scanf("%d", &temp)!=0) {
			switch (temp) {
			case 1:
				addNewGrade(&p_head, &p_tail, &count);
				count++;
				break;
			case 2:
				showGrade(p_head, &count);
				break;
			case 3:
				while (count > 0) {
					GRADE *p = p_head;
					free(p);
					p_head = p_head->next_grade;
					count--;
				}
				return 0;
			}
		}
		else{
			printf("�߸��� ���� �Է��ϼ̽��ϴ�.\n");
			rewind(stdin);
			continue;
			}
	}
}

void addNewGrade(GRADE **pp_head, GRADE **pp_tail, int *count) {

	int avg = 0;
	GRADE *p;
	if (*pp_head != NULL) {
		p = *pp_tail;
		p->next_grade = (GRADE*)malloc(sizeof(GRADE));
		p = p->next_grade;
		*pp_tail = p;
	}
	else {
		*pp_head = (GRADE*)malloc(sizeof(GRADE));
		p = *pp_head;
		*pp_tail = *pp_head;
	}

	printf("%d��° �л� �̸�: ", *count+1);
	scanf("%s", &(p->name));
	printf("���� ����:");
	scanf("%hu", &(p->korean));
	printf("���� ����:");
	scanf("%hu", &(p->english));
	printf("���� ����:");
	scanf("%hu", &(p->math));
	avg = (double)(p->korean + p->english + p->math) / 3.0;
	p->avg = avg;

	
	p->next_grade = NULL;
	
}

void showGrade(GRADE *p_head, int *count) {
	GRADE **p = (GRADE **)malloc(sizeof(GRADE*)*(*count));
	GRADE *p2;
	p2 = p_head;

	if (p_head == NULL)
		printf("����� �ּҷ��� �����ϴ�.\n");
	else {
		for (int x = 0; x < *count; x++) {
			*(p + x) = p2;
			p2 = p2->next_grade;
		}
		for (int x = 0; x < *count - 1; x++) {
			if ((*(p + x))->avg > (*(p + x + 1))->avg) {
				int temp;
				temp = *(p + x);
				*(p + x) = *(p + x + 1);
				*(p + x + 1) = temp;
			}
		}
		printf("------------------------------------------------------\n\n");
		for (int x = 0; x < *count; x++) {
			printf("  �̸�  ����  ����  ����  ����  ���  ���  \n");
			printf("%s      %d	  %d    %d    %d    %5.2f    %d�� \n",
				(*(p + *count - x - 1))->name, (*(p + *count - x - 1))->korean, (*(p + *count - x - 1))->english, (*(p + *count - x - 1))->math, (int)(*(p + *count - x - 1))->avg*3, (*(p + *count - x - 1))->avg, x + 1);
		}
		printf("-------------------------------------------------------\n\n");
	}
	free(p);
}