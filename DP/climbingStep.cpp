#include<bits/stdc++.h>
using namespace std;
 
 int climb(int i,int n,vector<int>&dp){
     if(dp[i]!=-1)return dp[i];
     if(n==i)return 1;
     if(i>n)return 0;
     int op1=climb(i+1,n,dp);
     int op2=climb(i+2,n,dp);
     dp[i]=op1+op2;
     return dp[i];
 }
int main(){
   vector<int>dp(100,-1);
  int n;
  cin>>n;
  cout<<climb(0,n,dp);
return 0;
}