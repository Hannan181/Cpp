/*
  Given two strings. Returna bollean true if they are Scrambled
  eg Great and grate;
*/  

#include<bits/stdc++.h>
using namespace std;
 
bool ScrambledString_recurr(string a,string b){
    if(a.length()!=b.length()){
        return false;
    }
    if(a.length()==0){
        return true;
    }
    if(a.compare(b)==0){
        return true;//Both the strings are similar;
    }
    int n=a.length();
    bool flag=false;
    for(int i=1;i<n;i++){
        bool c1=ScrambledString_recurr(a.substr(0,i),b.substr(n-i,i))==ScrambledString_recurr(a.substr(i,n-i),b.substr(0,i)); //Checking if both the parts match with each other;
        bool c2=ScrambledString_recurr(a.substr(0,i),b.substr(0,i))==ScrambledString_recurr(a.substr(i,n-i),b.substr(i,n-i));
        if(c1||c2){
            flag=true;
            return flag;
        }
    }
    return flag;
}
int main(){
   string a;
   cin>>a;
   string b;
   cin>>b;
   cout<<ScrambledString_recurr(a,b);
return 0;
}