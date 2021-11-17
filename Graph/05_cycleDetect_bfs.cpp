#include<bits/stdc++.h>
using namespace std;
 
bool check_cycle(int s,int v,vector<int>&visited,vector<int>adj[]){
    queue<pair<int,int>>q;
    visited[s]=1;
    q.push({s,-1});
    while(!q.empty()){
        int node=q.front().first;
        int pre=q.front().second;
        q.pop();

        for(auto it:adj[node]){
            if(!visited[it]){
                q.push({it,node});
            }else if(it!=pre){
                return true;
            }
        }
    }
    return false;
}
bool detectCycle_bfs(int v,vector<int>adj[]){
   vector<int>visited(v+1,0);
   for(int i=1;i<v+1;i++){
       if(!visited[i]){
           if(check_cycle(i,v,visited,adj)){
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
       adj[v].push_back(u);
   }
   cout<<detectCycle_bfs(n,adj);
return 0;
}