/*
 To find the shortest distance from a particular source node to all the nodes of the graph using BFS
 in an undirected unit weight graph
*/
#include<bits/stdc++.h>
using namespace std;
 
 vector<int>short_bfs(int n,vector<int>adj[],int src){
    int dist[n+1];
    for(int i=0;i<n+1;i++){
        dist[i]=INT_MAX;
    }
    queue<int>q;
    dist[src]=0;
    q.push(src);
    
    while(!q.empty()){
        int node=q.front();
        q.pop();

        for(auto it:adj[node]){
            if(dist[node]+1<dist[it]){
                dist[it]=dist[node]+1;
                q.push(it);
            }
        }
    }
    vector<int>ans;
    for(auto it:dist){
        ans.push_back(it);
    }
    return ans;
}
int main(){
   int n,m;
   cin>>n>>m;
   vector<int>adj[n+1];
   for(int i=0;i<m;i++){
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
   }
   int src;
   cin>>src;
   vector<int>ans;
   ans=short_bfs(n,adj,src);
   for(auto i:ans){
       cout<<i<<" ";
   }
return 0;
}