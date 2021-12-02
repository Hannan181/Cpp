/*
 Given two arrays. One is the amount of weight and the other is array of profit
 Given a certain capacity of a sack. Find the maximum profit that can be obtained in the sack;
*/
#include<bits/stdc++.h>
using namespace std;
 
bool compare(pair<int,int>&p1,pair<int,int>&p2){
    double v1=(double)p1.first/p1.second;
    double v2=(double)p2.first/p2.second;

    return v1>v2;
}
int main(){
   int n;
   cin>>n;
   vector<pair<int,int>>v(n);//Profit,weight
   for(int i=0;i<n;i++){
       cin>>v[i].first>>v[i].second;//INputs of individual profit and weight
   }
   sort(v.begin(),v.end(),compare);
   int w;//Weight
   cin>>w;
   int ans=0;
   for(int i=0;i<n;i++){
       if(w>=v[i].second){
           w-=v[i].second;
           ans+=v[i].first;
       }else{
           double vw=(double)v[i].first/v[i].second;
           ans+=vw*w;
           w=0;
           break;
       }
   }
   cout<<ans<<endl;
return 0;
}