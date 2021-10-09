#include<bits/stdc++.h>
using namespace std;

int static dp[11][11];

int MCM_memo(int arr[],int i,int j){
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i>=j)return 0;
    int mini=INT_MAX;
    for(int k=i;k<j;k++){
        int temp=MCM_memo(arr,i,k)+MCM_memo(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        mini=min(mini,temp);
    }
    dp[i][j]=mini;
    return mini;
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   memset(dp,-1,sizeof dp);
   cout<<MCM_memo(arr,1,n-1);
return 0;
}