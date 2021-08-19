#include<iostream>
using namespace std;
 
 const int N=1e5+2;
 int dp[N];
 int fibb(int n){
     if(n==0||n==1)return n;
     if(n==2)return 1;
     if(dp[n])return dp[n];
     dp[n]=fibb(n-1)+fibb(n-2);
     return dp[n];
 }
int main(){
   int n;
   cin>>n;
    cout<<fibb(n);
return 0;
}