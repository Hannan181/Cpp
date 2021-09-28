#include<bits/stdc++.h>
using namespace std;
 
 int dp[100][100]={-1};
int knapsack_memo(int n,int W,vector<int>&weight,vector<int>&value,int**dp){
    if(W<=0||n<=0){
        dp[n][W]=0;
        return 0;
    }
    if(dp[n][W]!=-1){
        return dp[n][W];
    }
    if(weight[n-1]>W){
         dp[n][W]=knapsack_memo(n-1,W,weight,value,dp);
         return dp[n][W];
    }
    dp[n][W]=max(value[n-1]+knapsack_memo(n-1,W-weight[n-1],weight,value,dp),knapsack_memo(n-1,W,weight,value,dp));
    return dp[n][W];
}
int main(){
   int n;
   cin>>n;
   vector<int>weight;
   vector<int>value;
   for(int i=0;i<n;i++){
       int temp;
       cin>>temp;
       weight.push_back(temp);
   }
   for(int i=0;i<n;i++){
       int temp;
       cin>>temp;
       value.push_back(temp);
   }
   int W;
   cin>>W;
   int **dp;
    dp=new int*[n+1];
    for(int i=0;i<=n;i++){
        dp[i]=new int[W+1];
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            dp[i][j]=-1;
        }
    }
   cout<<knapsack_memo(n,W,weight,value,dp);
return 0;
}