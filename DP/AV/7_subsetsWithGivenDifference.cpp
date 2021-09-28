// Count the number of subsets with the given difference

#include<bits/stdc++.h>
using namespace std;
int sumofvector(vector<int>&v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}
int countSubsetSum(vector<int>&v,int sum){
    int n=v.size();
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
    //dp[i][j]=dp[i][j-gset[i-1]]||dp[i-1][j];
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(v[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j]+dp[i-1][j-v[i-1]];
            }
        }
    }
    return dp[n][sum];
}
int main(){
   int n;
   cin>>n;
   vector<int>arr;
   for(int i=0;i<n;i++){
       int temp;
       cin>>temp;
       arr.push_back(temp);
   }
   int sum=sumofvector(arr);
   int diff;
   cin>>diff;
   int req=(sum-diff)/2;
   int ans=countSubsetSum(arr,req);
   cout<<ans;
return 0;
}