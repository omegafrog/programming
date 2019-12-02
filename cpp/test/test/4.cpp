#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


//상대방이 예측한 3자리 번호, 중복숫자가 있으면 안딤
string GeneratePreNumbers()
{
	string prenumbers = "";
	srand((unsigned int)time(NULL));
	int temp[3]={rand()%10,rand()%10,rand()%10};
	while(temp[0]!=temp[1]!=temp[2]){
	  for(int i=0;i<3;i++) temp[i]=rand()%10;
	}
	for(int i=0;i<3;i++){
	  prenumbers+=temp[i]+=48;
	}
	cout<<prenumbers;
	return prenumbers;
}

//내가 입력한 숫자와 상대방이 랜덤하게 예측한 번호와
//비교하여 아웃인지, 아웃이 아니라면 볼과 스트라이크의 개수를 출력하는 함수
void NumberBaseBall(string numbers) 
{
  string prenumbers=GeneratePreNumbers();
  int strike=0;
  int ball=0;
  bool out=0;
  for(int i=0;i<3;i++){
    if(numbers[i]==prenumbers[i]) strike++;
    for(int j=0;j<3;j++)
      if(numbers[i]==prenumbers[j]&&i!=j) ball++;
  }
  if(strike==0&&ball==0) out=1;
  if(out==0){
    if(strike==0) cout<<"볼:"<<ball<<endl;
    else if(ball==0) cout<<"스트라이크:"<<strike<<endl;
    else cout<<"스트라이크:"<<strike<<" "<<"볼:"<<ball<<endl;
  }
  else
    cout<<"아웃!";
}



//입력된 숫자가 3자리수인지, 중복숫자는 없는지 확인하는 함수
bool CheckValid(string numbers)
{
  if(numbers.length()!=3) return false;
  for(int i=0;i<3;i++){
    char cmp=numbers[i];
    for(int j=0;j<3;j++){
      if(cmp==numbers[j]&&i!=j) return false;
    }
  }
  return true;
}


int main()
{
	//상대방이 랜덤하게 생성한 중복숫자 없는 3자리 번호
	//3내가 입력할 번호
	string numbers;

	cout << "예상번호를 입력하세요(3자리수):";
	cin >> numbers;

	if (CheckValid(numbers)) {
	  NumberBaseBall(numbers);
	}
	else {
	  cout << "입력된 숫자가 유효하지 않습니다."<<endl;
	}

	return 0;
}
