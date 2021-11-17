#include<bits/stdc++.h>
using namespace std;
 
bool checkCycle(int node,int pre,vector<int>&visited,vector<int>adj[]){
    visited[node]=1;
    for(auto it:adj[node]){
        if(!visited[it]){
            checkCycle(it,node,visited,adj);
        }else if(it!=pre){
            return true;
        }
    }
    return false;
}
bool detectCycle_dfs(int v,vector<int>adj[]){
    vector<int>visited(v+1);
    for(int i=0;i<v+1;i++){
        if(!visited[i]){
            if(checkCycle(i,-1,visited,adj));
        }
    }
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
   cout<<detectCycle_dfs(n,adj);
return 0;
}