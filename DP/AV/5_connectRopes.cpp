#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
   cin>>n;
   priority_queue<int,vector<int>,greater<int>>pq;
   for(int i=0;i<n;i++){
       int temp;
       cin>>temp;
       pq.push(temp);
   }
   int cost=0;
   while(pq.size()>=2){
       int c1=pq.top();
       pq.pop();
       int c2=pq.top();
       pq.pop();

       cost=cost+c1+c2;
       pq.push(c1+c2);
   }
   cout<<cost<<endl;
return 0;
}