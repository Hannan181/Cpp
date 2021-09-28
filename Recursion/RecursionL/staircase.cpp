// Find the total number of steps to climb n steps if you can climb 1,2,3 at a time

#include<bits/stdc++.h>
using namespace std;
 
 int no_of_jumps(int n){
     if(n<0)return 0;
     if(n==0)return 1;
     return no_of_jumps(n-1)+no_of_jumps(n-2)+no_of_jumps(n-3);
 }
int main(){
   cout<<"Enter the Number of Steps: ";
   int n;
   cin>>n;
   cout<<"The total number of ways is: "<<no_of_jumps(n);
return 0;
}