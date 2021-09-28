#include<bits/stdc++.h>
using namespace std;
 
int LCS(string a,int m,string b,int n){
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
            if(a[i]==b[j]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}

//Length Shortest Common Subsequence
int SCSL(string a,string b){
   int LCSlength=LCS(a,a.length(),b,b.length());
   int totalLength=a.length()+b.length();
   return totalLength-LCSlength;
}

//Minimun number of insertions and deletions to convert a string from a to b
int minINSandDel(string a,string b){
   int LCSlength=LCS(a,a.length(),b,b.length());
   int totalLength=a.length()+b.length();
   return totalLength-2*LCSlength;
}
int main(){
   string a;
   cin>>a;
   string b;
   cin>>b;
return 0;
}