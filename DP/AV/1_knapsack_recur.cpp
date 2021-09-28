#include<bits/stdc++.h>
using namespace std;
 
 int knapsack_recur(int w,vector<int>&weight,vector<int>&value,int n){
     if(w<=0||n<=0){
         return 0;
     }
     if(weight[n-1]<=w){
         return max(value[n-1]+knapsack_recur(w-weight[n-1],weight,value,n-1),knapsack_recur(w,weight,value,n-1));
     }
     else{
        return knapsack_recur(w,weight,value,n-1);
     }
 }
int main(){
   int n;
   cin>>n;
   vector<int>weight;
   vector<int>value;
   for(int i=0;i<n;i++){
       int temp;
       cin>>temp;
       weight.push_back(temp);
   }
   for(int i=0;i<n;i++){
       int temp;
       cin>>temp;
       value.push_back(temp);
   }
   int w;//optimal weight|| capacity
   cin>>w;
   cout<<knapsack_recur(w,weight,value,n);
return 0;
}