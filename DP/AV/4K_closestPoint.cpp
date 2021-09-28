#include<bits/stdc++.h>
using namespace std;
 
   vector<pair<int,int>> k_closest(int arr[][2],int n,int k){
     priority_queue<pair<int,pair<int,int>>>pq;
    for(int i=0;i<n;i++){
        pq.push(make_pair((arr[i][0]*arr[i][0])+(arr[i][1]*arr[i][1]),make_pair(arr[i][0],arr[i][1])));

        if(pq.size()>k){
            pq.pop();
        }
    }
    vector<pair<int,int>>ans;
    while(pq.size()){
         ans.push_back(pq.top().second);
         pq.pop();
    }
     return ans;
 }
int main(){
   int n;
   cin>>n;
   int arr[n][2];
   for(int i=0;i<n;i++){
       for(int j=0;j<2;j++){
           cin>>arr[i][j];
       }
   }
   int k;
   cin>>k;
  vector<pair<int,int>>ans;
  ans=k_closest(arr,n,k);
  for(int i=0;i<k;i++){
        cout<<ans[i].first<<" "<<ans[i].second<<" ";
  }
return 0;
}