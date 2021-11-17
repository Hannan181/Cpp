/*
 to find the least expense from travelling from a node to all the other nodes in an directed wieghted graph
*/
#include<bits/stdc++.h>
using namespace std;
 
void toposort(int node,int vis[],stack<int>&st,vector<pair<int,int>>adj[]){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it.first]){
            toposort(it.first,vis,st,adj);
        }
    }
    st.push(node);
}
vector<int>shortest_path(int n,int src,vector<pair<int,int>>adj[]){
    int visited[n+1]={0};
    stack<int>st;
    for(int i=1;i<n+1;i++){
        if(!visited[i]){
            toposort(i,visited,st,adj);
        }
    }
    int dist[n+1];
    for(int i=0;i<n+1;i++){
        dist[i]=INT_MAX;
    }
    dist[src]=0;
    while(!st.empty()){
        int node=st.top();
        st.pop();

        if(dist[node]!=INT_MAX){
            for(auto it:adj[node]){
                if(dist[node]+it.second<dist[it.first]){
                    dist[it.first]=dist[node]+it.second;
                }
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
   vector<pair<int,int>>adj[n+1];
   for(int i=0;i<m;i++){
       int u,v,wt;
       cin>>u>>v>>wt;
       adj[u].push_back({v,wt});
    //    adj[v].push_back({u,wt});
   }
   int src;
   cin>>src;
   vector<int>ans;
   ans=shortest_path(n,src,adj);
   for(auto i:ans)cout<<i<<" ";
return 0;
}