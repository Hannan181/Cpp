#include<bits/stdc++.h>
using namespace std;
 
int dp[20][20]={-1};
int LCS(string a, int m,string b,int n){
    if(dp[m][n]!=-1)return dp[m][n];
    if(m==0||n==0){
        dp[m][n]=0;
        return dp[m][n];
    }
    if(a[m-1]==b[n-1]){
        dp[m][n]=1+LCS(a,m-1,b,n-1);
    }else{
        dp[m][n]=max(LCS(a,m-1,b,n),LCS(a,m,b,n-1));
    }
    return dp[m][n];
}
int main(){
   string x,y;
   cin>>x>>y;
   cout<<LCS(x,x.length(),y,y.length());
return 0;
}