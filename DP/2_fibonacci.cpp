#include<iostream>
#include<vector>
using namespace std;
 
int main(){
   long n;
   cin>>n;
   vector<long long>dp(n+2,0);
   dp[0]=0;
   dp[1]=1;
   dp[2]=1;
   for(long long i=2;i<=n;i++){
      dp[i]=dp[i-1]+dp[i-2];
   }
   cout<<dp[n]<<endl;
return 0;
}