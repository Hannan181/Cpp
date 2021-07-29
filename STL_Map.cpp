#include<iostream>
#include<map>
using namespace std;
 
int main(){
   map<int,string>m;
   m[1]="Babbar";
   m[2]="Love";
   for(auto i:m)cout<<i.first<<" ";
   cout<<endl;
   m.insert({5,"Bheem"});
   cout<<"Before Erase"<<endl;
   for(auto i:m)cout<<i.first<<" "<<i.second<<endl;
   cout<<endl;
   cout<<"Finding 5---->"<<m.count(5)<<endl;
   m.erase(5);
   cout<<"After Erase"<<endl;
   for(auto i:m)cout<<i.first<<" "<<i.second<<endl;
   cout<<endl;
return 0;
}