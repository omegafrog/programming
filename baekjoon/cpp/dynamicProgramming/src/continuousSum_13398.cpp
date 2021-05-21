#include <iostream>
using namespace std;

int N;
int A[100001];
long long dp1[100001];
long long dp2[100001];
int main(){
    long long maxVal = -1000*100000; 
    for(int sub = 1; sub <= N; ++sub)
    {
        for(int i = 1; i <= N; ++i){
            for(int j = 1; j <= i; ++j){
                if(i==j)
                {
                    maxVal = max(maxVal, A[i]);
                    if(sub==i) continue;
                }
                else
                {
                    maxVal = max(maxVal, dp1[i]-dp1[j-1]);
                    if(i < sub && sub < j )
                    {
                        maxVal = max(maxVal, dp1[sub-1]-dp1[i-1]+dp2[sub+1]);
                    }
                } 
            }
        }
    }
}