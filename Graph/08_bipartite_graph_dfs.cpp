/*
   What is a Bipartite Graph?
   => A Bipartite graph is a graph whose nodes can be colored using two nodes such that no two adjacent nodes have the same color.

   Time Complexity:O(N+E)
   Space Complexity:O(N+E)+O(N)+O(N);
*/

#include<bits/stdc++.h>
using namespace std;
 
bool bipartite_dfs(int src,vector<int>adj[],int color[]){
    if(color[src]==-1){
        color[src]=1;
    }
    for(auto it:adj[src]){
        if(color[it]==-1){
            color[it]=1-color[src];
            if(!bipartite_dfs(it,adj,color)){
                return false;
            }else if(color[it]==color[src]){
                return false;
            }
        }
    }
    return true;
}
bool checkBipartite(vector<int>adj[],int n){
    int color[n+1];
    memset(color,-1,sizeof color);
    for(int i=1;i<n+1;i++){
        if(color[i]==-1){
            if(!bipartite_dfs(i,adj,color)){
                return false;
            }
        }
    }
    return true;
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
return 0;
}