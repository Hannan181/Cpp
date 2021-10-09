/*Given a smaller string and larger string. Find out if the smaller string is a subsequence of the larger*/
#include<bits/stdc++.h>
using namespace std;
 
bool LCSpresent(string a,int m,string b,int n){
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
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    if(dp[m][n]==m)return true;
    return false;
}
int main(){
   string a;
   cin>>a;
   string b;
   cin>>b;
   cout<<LCSpresent(a,a.length(),b,b.length());
return 0;
}