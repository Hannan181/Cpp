/*
Indian Coin change problem
Given an integer(No of coins),an array of coins and a total.
Find out the nu,ber of cons required to form the total
*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
   cin>>n;
   vector<int>coins;
   for(int i=0;i<n;i++){
       int c;
       cin>>c;
       coins.push_back(c);
   }
   int total;
   cin>>total;
   int ans=0;
   sort(coins.begin(),coins.end(),greater<int>());
   for(int i=0;i<n;i++){
       ans+=total/coins[i];
       total-=(total/coins[i])*coins[i];
   }
   cout<<ans<<endl;
return 0;
}