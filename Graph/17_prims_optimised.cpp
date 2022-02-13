#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int n,m;
   cin>>n>>m;
   vector<pair<int,int>>adj[n];
   int a,b,wt;
   for(int i=0;i<m;i++){
       cin>>a>>b>>wt;
       adj[a].push_back({b,wt});
       adj[b].push_back({a,wt});
   }
   int parent[n],key[n];
   bool mstSet[n];
   for(int i=0;i<n;i++){
       key[i]=INT_MAX;
       mstSet[i]=false;
   }
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>pq;
   key[0]=0;
   parent[0]=-1;
   pq.push({0,0});
   while(!pq.empty()){
       int u=pq.top().second;
       pq.pop();

       mstSet[u]=true;

       for(auto it:adj[u]){
           int v=it.first;
           int wt=it.second;
           if(mstSet[v]==false && wt<key[v]){
               parent[v]=u;
               key[v]=wt;//updating the adjacents
           }
       }
   }
return 0;
}