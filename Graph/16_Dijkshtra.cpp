/*
   It is an algorithm used to solve the problems of Shortesst distances.
*/


#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int n,m,src;
   cin>>n>>m>>src;
   vector<pair<int,int>>g[n+1];
   for(int i=0;i<m;i++){
       int a,b,wt;
       cin>>a>>b>>wt;
       g[a].push_back(make_pair(b,wt));
       g[b].push_back(make_pair(a,wt));
   }
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
   vector<int>distTo(n+1,INT_MAX);
   distTo[src]=0;
   pq.push(make_pair(0,src));
   while(!pq.empty()){
       int dist=pq.top().first;
       int prev=pq.top().second;
       pq.pop();

       vector<pair<int,int>>::iterator it;
       for(it=g[prev].begin();it!=g[prev].end();it++){
           int next=it->first;
           int nextDist=it->second;

           if(distTo[next]>distTo[prev]+nextDist){
               distTo[next]=distTo[prev]+nextDist;
               pq.push(make_pair(distTo[next],next));
           }
       }
   }
   for(auto it:distTo)cout<<it<<" ";
return 0;
}