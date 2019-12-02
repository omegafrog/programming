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
		printf("1.성적 입력\n");
		printf("2.성적 확인\n");
		printf("3.종료\n");
		printf("---------\n");
		printf("선택(1~3):");
		
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
			printf("잘못된 값을 입력하셨습니다.\n");
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

	printf("%d번째 학생 이름: ", *count+1);
	scanf("%s", &(p->name));
	printf("국어 점수:");
	scanf("%hu", &(p->korean));
	printf("영어 점수:");
	scanf("%hu", &(p->english));
	printf("수학 점수:");
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
		printf("저장된 주소록이 없습니다.\n");
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
			printf("  이름  국어  영어  수학  총점  평균  등수  \n");
			printf("%s      %d	  %d    %d    %d    %5.2f    %d등 \n",
				(*(p + *count - x - 1))->name, (*(p + *count - x - 1))->korean, (*(p + *count - x - 1))->english, (*(p + *count - x - 1))->math, (int)(*(p + *count - x - 1))->avg*3, (*(p + *count - x - 1))->avg, x + 1);
		}
		printf("-------------------------------------------------------\n\n");
	}
	free(p);
}