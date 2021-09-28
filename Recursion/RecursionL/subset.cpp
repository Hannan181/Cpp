#include<bits/stdc++.h>
using namespace std;
 
void printSubset(vector<int>inputV,vector<int>outputV,int index){
    if(index>=inputV.size()){
        for(auto i:outputV)cout<<i<<" ";
        cout<<"A"<<endl;
        return;
    }
    printSubset(inputV,outputV,index+1);
    outputV.push_back(inputV[index]);
    printSubset(inputV,outputV,index+1);

}
int main(){
   int n;
   cin>>n;
   vector<int>v1;
   vector<int>v2;
   for(int i=0;i<n;i++){
       int t;
       cin>>t;
       v1.push_back(t);
   }
   printSubset(v1,v2,0);
return 0;
}