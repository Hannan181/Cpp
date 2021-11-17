/*
 Indegree:The number of edges pointing towards a particular node
 */

#include<bits/stdc++.h>
using namespace std;
 
vector<int>toposort(int n,vector<int>adj[]){
    queue<int>q;
    vector<int>indegree(n+1,0);
    for(int i=1;i<n+1;i++){//considering all nodes start from 1 not 0
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }
    for(int i=0;i<n+1;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int>topo;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);

        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
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
   vector<int>ans;
   ans=toposort(n,adj);
   for(auto it:ans){
       cout<<it<<" ";
   }
return 0;
}