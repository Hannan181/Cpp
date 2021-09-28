#include<iostream>
#include<vector>
using namespace std;
 
#define ll long long

ll fib(int n,vector<ll>&k){
    if(k[n]!=-1)return k[n];
    if(n<=2)return 1;

    k[n]=fib(n-1,k)+fib(n-2,k);
    return k[n];
}
int main(){
   int n;
   cin>>n;
   vector<ll>dp(n+2,-1);
   cout<<fib(n,dp);
return 0;
}