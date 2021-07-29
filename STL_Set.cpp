#include<iostream>
#include<set>
using namespace std;
 
int main(){
   //set is a data type which holds only the unique elements
   //no modification after the implementation --->only implement or delete
   //comes in sorted order
   //does not sort for unorderesd
   set<int>s;
   s.insert(4);
   s.insert(4);
   s.insert(6);
   s.insert(0);
   s.insert(1);
   s.insert(0);
   for(auto i:s)cout<<i<<" ";
   cout<<endl;
   //complexity 0[log n];
   set<int>::iterator it=s.begin();it++;
   //s.erase(s.begin());
   s.erase(it);
   for(auto i:s)cout<<i<<" ";
   cout<<endl;
   cout<<"5 is present or not-->"<<s.count(5)<<endl;
   cout<<"-5 is present or not-->"<<s.count(-5)<<endl;

   //find
   set<int>::iterator it1=s.find(5);
   cout<<*it1;
return 0;
}