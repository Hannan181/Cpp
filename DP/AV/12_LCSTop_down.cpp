#include<bits/stdc++.h>
using namespace std;
 
int LCS_topDown(string a,int m,string b,int n){
    int dp[m+1][n+1];
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    return dp[m][n];
}
int main(){
   string x;
   cin>>x;
   string y;
   cin>>y;
 //  cout<<x.length()<<y.length();
   cout<<LCS_topDown(x,x.length(),y,y.length());
return 0;
}