#include<bits/stdc++.h>
using namespace std;
 
void dfs(int node,vector<int>&visited,vector<int>adj[],vector<int>&store){
     store.push_back(node);
     visited[node]=1;
     for(auto it:adj[node]){
         if(!visited[it]){
             dfs(it,visited,adj,store);
         }
     }
}
vector<int>dfs_main(int v,vector<int>adj[]){
    vector<int>store_dfs;
    vector<int>visited(v+1,0);

    for(int i=0;i<v+1;i++){
        if(!visited[i]){
            dfs(i,visited,adj,store_dfs);
        }
    }
    return store_dfs;
}
int main(){
   int n,m;
   cin>>n>>m;
   vector<int>gf[n+1];
   for(int i=0;i<m;i++){
       int u,v;
       cin>>u>>v;
       gf[u].push_back(v);
       gf[v].push_back(u);
   }
   vector<int>ans=dfs_main(n,gf);
   for(auto i:ans){
       cout<<i<<" ";
   }
return 0;
}