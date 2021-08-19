#include<iostream>
#include<deque>
using namespace std;
 
int main(){
   deque<int>d;
   d.push_back(1);
   d.push_back(2);
   d.push_front(3);
   d.push_front(4);
   for(int i:d)cout<<i<<" ";
   cout<<endl;
   cout<<"Element at 2nd index-->"<<d.at(2)<<endl;
   cout<<"Element at first-->"<<d.front()<<endl;
   cout<<"Element at last-->"<<d.back()<<endl;
   d.pop_back();
   for(int i:d)cout<<i<<" ";
   cout<<endl;
   d.pop_front();
   for(int i:d)cout<<i<<" ";
   cout<<endl;

cout<<"max size-->"<<d.max_size()<<endl;
cout<<"Before Erase size-->"<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"After Erase size-->"<<d.size()<<endl;
cout<<"max size-->"<<d.max_size()<<endl;
return 0;
}