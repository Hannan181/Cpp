/*
  Given two strings. Returna bollean true if they are Scrambled
  eg Great and grate;
*/
#include<bits/stdc++.h>
using namespace std;
 
unordered_map<string,bool>dp;
bool ScrambledString_memo(string a,string b){
   if(a.length()!=b.length())return false;
   if(a.length()==0)return true;
   if(a.compare(b)==0)return true;

   string key=a+"_"+b;
   if(dp.find(key)!=dp.end())return dp[key];
    int n=a.length();
    bool flag=false;
    for(int i=1;i<n;i++){
        bool c1=ScrambledString_memo(a.substr(0,i),b.substr(n-i,i))==ScrambledString_memo(a.substr(i,n-i),b.substr(0,i)); //Checking if both the parts match with each other;
        bool c2=ScrambledString_memo(a.substr(0,i),b.substr(0,i))==ScrambledString_memo(a.substr(i,n-i),b.substr(i,n-i));
        if(c1||c2){
            flag=true;
            break;
        }
    }
    dp[key]=flag;
    return dp[key];
}
int main(){
   string a;
   cin>>a;
   string b;
   cin>>b;
   cout<<ScrambledString_memo(a,b);
return 0;
}