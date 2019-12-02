#include<iostream>
#include<string>

int main(){
  std::string str;

  std::cout<<"get string through std::cin"<<std::endl;
  std::cin>>str;

  std::cout<<"get string through std::getline()"<<std::endl;
  std::getline(std::cin,str);
  return 0;
}
