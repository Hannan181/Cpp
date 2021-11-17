/*
   What is a Bipartite Graph?
   => A Bipartite graph is a graph whose nodes can be colored using two nodes such that no two adjacent nodes have the same color.

   Time Complexity:O(N+E)
   Space Complexity:O(N+E)+O(N)+O(N);
*/
#include<bits/stdc++.h>
using namespace std;
 
bool bipartite_bfs(int src,vector<int>adj[],int color[]){
    color[src]=1;
    queue<int>q;
    q.push(src);

    while(!q.empty()){
        int node=q.front();
        q.pop();

        for(auto it:adj[node]){
            if(color[it]==-1){
                color[it]=1-color[node];
                q.push(it);
            }else if(color[it]==color[node]){
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
            if(!bipartite_bfs(i,adj,color)){
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
   cout<<checkBipartite(adj,n);
return 0;
}