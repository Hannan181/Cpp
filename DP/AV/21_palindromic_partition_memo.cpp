#include<bits/stdc++.h>
using namespace std;
static int dp[11][11];

bool isPalindromic(string a,int i,int j){
    if(i==j)return true;
    if(i>j)return true;
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}
int palindromic_partition(string a,int i,int j){
    if(i>=j)return 0;
    if(isPalindromic(a,i,j))return 0;
    if(dp[i][j]!=-1)return dp[i][j];

    int ans=INT_MAX;
    int left,right;
    for(int k=i;k<j;k++){
        if(dp[i][k]!=-1){
            left=dp[i][k];
        }else{
            left=palindromic_partition(a,i,k);
            dp[i][k]=left;
        }

        if(dp[k+1][j]!=-1){
            right=dp[k+1][j];
        }else{
            right=palindromic_partition(a,k+1,j);
             dp[k+1][j]=right;
        }
        int temp=1+left+right;
        ans=min(ans,temp);
    }
    return ans;
}
int main(){
   string a;
   cin>>a;
   memset(dp,-1,sizeof dp);
   cout<<palindromic_partition(a,0,a.length()-1);
return 0;
}