//Printing shortest subsequence between two substrings
#include<bits/stdc++.h>
using namespace std;
 
string shortSubsequeceBetweenTwoString(string a,int m,string b,int n){
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
    string ans="";
    int i=m,j=n;
    while(j and i){
        if(a[i-1]=b[j-1]){
            ans+=a[i-1];
            i--;j--;
        }else{
            if(dp[i-1][j]>dp[i][j-1]){
                ans+=a[i-1];
                i--;
            }else{
                ans+=b[j-1];
                j--;
            }
        }
    }
    while(i){
        ans+=a[i-1];
        i--;
    }
    while(j){
        ans+=b[j-1];
        j--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
   string a;
   cin>>a;
   string b;
   cin>>b;
   cout<<shortSubsequeceBetweenTwoString(a,a.length(),b,b.length());
return 0;
}