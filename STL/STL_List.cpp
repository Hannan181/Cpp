#include<iostream>
#include<list>
using namespace std;
 
int main(){
   list<int>l;
   l.push_back(1);
   l.push_front(2);
   for(int i:l)cout<<i<<" ";
   cout<<endl;
   l.erase(l.begin());
   for(int i:l)cout<<i<<" ";
   l.push_back(1);
   l.push_front(2);
   cout<<l.size()<<endl;
   l.pop_front();
   l.pop_back();
return 0;
}