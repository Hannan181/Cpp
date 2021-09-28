#include<bits/stdc++.h>
using namespace std;
 
 int knapsacktopDown(int n,int W,vector<int>&weight,vector<int>&value){
     int dp[n+1][W+1];
     for(int i=0;i<n+1;i++){
         for(int j=0;j<W+1;j++){
             if(i==0||j==0){
                 dp[i][j]=0;
             }
         }
     }
     for(int i=1;i<n+1;i++){
         for(int j=1;j<W+1;j++){
            if(weight[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=max(value[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
            }
         }
     }
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
   cout<<knapsacktopDown(n,W,weight,value);
return 0;
}