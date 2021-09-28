/*
 Q. Given a few coins or a coin of arrays and a sum;
  1. Find out the maximum number of ways to form the amount of given sum with the array of coins.
  2. Find out the minimum number of coins required to form the amonut of sum with the array of coins.
*/
#include<bits/stdc++.h>
using namespace std;
 
int maximum_ways(int n,vector<int>&coins,int sum){
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                dp[i][j]=0;
            }
            if(j==0){
                dp[i][j]=1;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coins[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
            }
        }
    }
    return dp[n][sum];
}
int minimum_coins(int n,vector<int>&coins,int sum){
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
           if(j==0){
               dp[i][j]=0;
           }
           if(i==0){
               dp[i][j]=INT_MAX-1;
           }
        }
    }
    for(int j=1;j<sum+1;j++){
            if(j%coins[0]==0){
                dp[1][j]=j/coins[0];
            }else{
                dp[1][j]=INT_MAX-1;
            }
        }
    for(int i=2;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coins[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=min(dp[i-1][j],dp[i][j-coins[i-1]]+1);
            }
        }
    }
    return dp[n][sum];
}
int main(){
   int n;
   cin>>n;
   vector<int>coin;
   int sum;
   cin>>sum;
   for(int i=0;i<n;i++){
       int temp;
       cin>>temp;
       coin.push_back(temp);
   }
   cout<<maximum_ways(n,coin,sum)<<endl;
   cout<<minimum_coins(n,coin,sum);
return 0;
}