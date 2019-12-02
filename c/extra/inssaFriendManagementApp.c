#include<stdio.h>
#define MAX_COUNT	5


typedef struct Person {
	char name[14];
	unsigned short int age;
	double height;
	double weight;
}Person;


int AddFriend(Person* data,int count);
void ShowFriendList(Person* data,int count);


int main() {
	int count = 0;
	int select;

	Person data[MAX_COUNT];
	Person *p;
	p= &data;

	while (1) {

		printf("    	       [ 메뉴 ]	            \n====================================\n1. 친구 추가\n2. 친구 목록 보기\n3. 종료\n====================================\n번호 선택 : ");

		scanf("%d", &select);

		switch (select) {
		case 1:
			if (1 == AddFriend(p, count))count++;
			break;
		case 2:
			ShowFriendList(p,count);
			break;
		case 3:
			return 0;
		default:
			printf("1,2,3중 하나의 값을 입력하세요.\n\n");
		}
	}
}
int AddFriend(Person*data,int count) {
	if (count < MAX_COUNT) {
		printf("새로운 친구 정보를 입력하세요.\n");
		printf("1.이름 : ");
		scanf("%s", (data + count)->name);//data+count의 주소로 가서 name이라는 요소에 접근해라->근데 name은 배열이라 첫번째 주소값을 반환함->&필요없음
		printf("2.나이 : ");
		scanf("%hu", &((data + count)->age));
		printf("3.키 : ");
		scanf("%lf", &((data + count)->height));
		printf("4.몸무게 : ");
		scanf("%lf", &((data + count)->weight));
		printf("입력을 완료했습니다.\n");
		return 1;
	}
	else {
		printf("최대 인원을 초과하여 입력을 할 수 없습니다.\n");
		printf("최대 %d명까지만 관리 가능합니다.\n", MAX_COUNT);
		return 0;
	}
	
}
void ShowFriendList(Person*data,int count) {
	if (count > 0) {

		for (int i = 0; i < count; i++) {
			printf("등록된 친구 목록\n");
			printf("====================================\n");
			printf("%-14s,%3d,%6.2f,%5.2f\n", (data+i)->name,(data+i)->age,(data+i)->height,(data+i)->weight);
			printf("====================================\n");
		}
	}
	else {
		printf("등록된 친구가 없습니다.\n");
	}
}

		