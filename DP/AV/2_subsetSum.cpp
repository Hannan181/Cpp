#include<bits/stdc++.h>
using namespace std;
 
 bool subset_sum(int sum,vector<int>&gset){
     int n=gset.size();
     bool dp[n+1][sum+1];
     for(int i=0;i<n+1;i++){
         for(int j=0;j<sum+1;j++){
             if(i==0){
                 dp[i][j]=false;
             }
             if(j==0){
                 dp[i][j]-true;
             }
         }
     }
     for(int i=1;i<n+1;i++){
         for(int j=1;j<sum+1;j++){
             if(gset[i-1]<=j){
                 dp[i][j]=dp[i][j-gset[i-1]]||dp[i-1][j];
             }else{
                 dp[i][j]=dp[i-1][j];
             }
         }
     }
     return dp[n][sum];
 }
int main(){
   int n;
   cin>>n;
   vector<int>g_set;
   for(int i=0;i<n;i++){
       int temp;
       cin>>temp;
       g_set.push_back(temp);
   }
   int Sum;
   cin>>Sum;
   cout<<subset_sum(Sum,g_set);
return 0;
}