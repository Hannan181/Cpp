/*
  Kahn's Algorithm is basically to detect the cycle in directed graph using topological sorting method
*/

#include<bits/stdc++.h>
using namespace std;
 
bool kahns_algo(int n,vector<int>adj[]){
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
    int cnt=0;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cnt++;

        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    if(cnt==n)return false;//no cyce present
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
   }
   cout<<kahns_algo(n,adj);
return 0;
}