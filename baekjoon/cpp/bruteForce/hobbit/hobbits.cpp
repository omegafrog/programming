#include <iostream>
#include <vector>
using namespace std;

// set input hobbits
int hobbitSet[9] = {0,};

// return vector's sum
int sum(vector<int>& v){
	int ret = 0;
	if(v.empty() == 0)
	{
		auto it = v.begin();
		for(it;it!=v.end();++it){
			ret+=*it;
		}
		
	}
	return ret;
}
// print hobbit vector
void printHobbits(vector<int>& hobbits){
	// cout << "okay"<<endl;
	if(hobbits.empty() == 0 ){
	auto it = hobbits.begin();
	for(it;it!=hobbits.end();++it){
		cout << *it << endl;
		// putc(*it,stdout);
		// putchar('\n');:
	}
	// cout << "okay"<<endl;
	}
}
// hobbits : vector for save answer
// index : current hobbit's order? 현재 답 난쟁이의 순서
// 오름차순으로 답을 내야한다.

void findHobbits(vector<int>& hobbits, int index){
	// 난쟁이가 7명이 있고 합이 100이라면
	if(index == 7 && sum(hobbits) == 100){  printHobbits(hobbits); exit(0); } //exit(0);}
	else if(index>7 || sum(hobbits) > 100) return;
	
	if(index == 0) hobbits.push_back(-1);
	// 가능한 입력 답안들 중 하나를 선택하고 재귀호출한다.
	for(int i=0;i<9;++i){
		if(hobbits.back()<hobbitSet[i]){
			if(index == 0 ) hobbits.erase(hobbits.begin());
			hobbits.push_back(hobbitSet[i]);
			findHobbits(hobbits, index+1);
			hobbits.pop_back();
		}
		
	}
}


int main(){
	
	for(int i=0;i<9;i++){
		cin >> hobbitSet[i];
	}
	vector<int> hobbits;
	
	findHobbits(hobbits, 0);
	
	return 0;
	
}