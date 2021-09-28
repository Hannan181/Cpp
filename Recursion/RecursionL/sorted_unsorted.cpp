#include<bits/stdc++.h>
using namespace std;
 
 bool isSorted(vector<int>&v){
     if(v.size()==1)return true;
     bool mainAns=true;
     if(v[v.size()-1]<v[v.size()-2]){
          mainAns=false;
     }
     v.pop_back();
     bool ans=isSorted(v);
     return ans&&mainAns;
 }
int main(){
   vector<int>v={1,2,3,4,5,6,7};
   cout<<isSorted(v);
   for(auto i:v)cout<<i<<" ";
return 0;
}