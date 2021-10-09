/*Question:Given a string. Find out the longest repeating Subsequence*/
#include<bits/stdc++.h>
using namespace std;
 
string LongestRepeatingSubsequence(string a,int m){
   int dp[m+1][m+1];
   for(int i=0;i<m+1;i++){
       for(int j=0;j<m+1;j++){
           if(i==0||j==0){
               dp[i][j]=0;
           }
       }
   }
   string ans="";
   for(int i=1;i<m+1;i++){
       for(int j=1;j<m+1;j++){
           if(a[i-1]==a[j-1]&&i!=j){
               dp[i][j]=1+dp[i-1][j-1];
               ans+=a[i-1];
           }else{
               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
       }
   }
   return ans;
}
int main(){
   string a;
   cin>>a;
   cout<<LongestRepeatingSubsequence(a,a.length());
return 0;
}