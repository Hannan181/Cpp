#include<bits/stdc++.h>
using namespace std;
 
int cutting_rod(int n,int total,int *len,int* price){
    int dp[n+1][total+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<total+1;j++){
            dp[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=0;j<total+1;j++){
            if(len[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-len[i-1]]+price[i-1]);
            }
        }
    }
    return dp[n][total];
}
int main(){
   int n;
   cin>>n;
   int tlength;
   cin>>tlength;
   int cutlength[n],price[n];
   for(int i=0;i<n;i++){
       cin>>cutlength[i];
   }
   for(int j=0;j<n;j++){
       cin>>price[j];
   }
   cout<<cutting_rod(n,tlength,cutlength,price);
return 0;
}