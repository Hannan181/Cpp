/*
 Given an array of cost. Find the minimum cost of merging the elements until only 1 element left  of array if the cost of merging any two files is the sum fo individual cost.
*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   priority_queue<int,vector<int>,greater<int>>minheap;
   for(int i=0;i<n;i++){
       minheap.push(a[i]);
   }
   int ans=0;
   while(minheap.size()>1){
     int e1=minheap.top();
     minheap.pop();
     int e2=minheap.top();
     minheap.pop();
     ans+=e1+e2;
     minheap.push(e1+e2);
   }
   cout<<ans<<endl;
return 0;
}