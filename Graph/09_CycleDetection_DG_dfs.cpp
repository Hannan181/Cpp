#include<bits/stdc++.h>
using namespace std;
 
bool checkcycle(int node,vector<int>adj[],int vis[],int dfsvis[]){
    vis[node]=1;
    dfsvis[node]=1;

    for(auto it:adj[node]){
        if(!vis[it]){
            if(checkcycle(it,adj,vis,dfsvis)){
                return true;
            }
        }else if(!dfsvis[it]){
            return true;
        }
    }
    return false;
}
bool isCycle(int n,vector<int>adj[]){
    int visited[n+1],dfsVisited[n+1];
    memset(visited,0,sizeof visited);
    memset(dfsVisited,0,sizeof dfsVisited);

    for(int i=1;i<n+1;i++){
        if(!visited){
            if(checkcycle(i,adj,visited,dfsVisited)){
                return true;
            }
        }
    }
    return false;
}
int main(){
   int n,m;
   cin>>n>>m;
   vector<int>adj[n+1];
   for(int i=0;i<m;i++){
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v);
   }
   if(isCycle(n,adj)){
       cout<<"CYCLIC DIRECTED GRAPH";
   }else{
       cout<<"NOT CYCLIC DIRECTED GRAPH";
   }
return 0;
}