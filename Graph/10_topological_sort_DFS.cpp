/*
  Topological Sort for a directed acyclic graph is a linear ordering of vertices such that for every directed branch u,v , u comes before v
*/

#include<bits/stdc++.h>
using namespace std;
 
void findToposort(int src,vector<int>&visited,stack<int>&st,vector<int>adj[]){
    visited[src]=1;
    for(auto it:adj[src]){
        if(!visited[it]){
            findToposort(it,visited,st,adj);
        }
    }
    st.push(src);
}
vector<int>toposort(int n,vector<int>adj[]){
    stack<int>st;
    vector<int>visited(n+1,0);
    for(int i=1;i<n+1;i++){
        if(!visited[i]){
            findToposort(i,visited,st,adj);
        }
    }
    vector<int>topo;
    while(!st.empty()){
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
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
return 0;
}