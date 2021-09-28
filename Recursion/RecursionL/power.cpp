#include<bits/stdc++.h>
using namespace std;
 
 int power(int n,int m){
     if(n==0)return 1;
     if(n%2==0){
         return power(n/2,m)*power(n/2,m);
     }
     return m*power(n/2,m)*power(n/2,m);
 }
int main(){
   int n;
   cin>>n;
  cout<<power(10,2);
return 0;
}