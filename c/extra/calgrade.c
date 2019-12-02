#include<stdio.h>
int Psum(int *(arr)[5]){
	int sum;
	for (int x = 0; x < 4; x++) {
		
		int i = 0;
		for (i; i < 4; i++)sum += arr[x][i];
	}
	return sum;

int main(){
	int grade[5][5];
	for (int x = 0; x < 4; x++) {
		for (int i = 0; i < 4; i++)scanf("%d", *(grade + x)[i]);
	}
	grade[
		Psum(grade[][])
