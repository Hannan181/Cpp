#include<bits/stdc++.h>
using namespace std;
 
vector<int>bfs(int v,vector<int>adj[]){
    vector<int>bf;
    vector<int>visited(v+1,0);

    for(int i=0;i<v+1;i++){
        if(!visited[i]){
           queue<int>q;
           q.push(i);
           visited[i]=1;

           while(!q.empty()){
               int node=q.front();
               q.pop();
               bf.push_back(node);

               for(auto it:adj[node]){
                   if(!visited[i]){
                       q.push(it);
                    visited[it]=1;
                   }
               }
           }
        }
    }
    return bf;
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
   vector<int>ans=bfs(n,gf);
   for(auto i:ans){
       cout<<i<<" ";
   }
return 0;
}