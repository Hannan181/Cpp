#include<iostream>
#include<vector>
using namespace std;
 
int main(){
   vector<int>v;
   cout<<"capacity->"<<v.capacity();
   cout<<"Size-->"<<v.size()<<endl;

   v.push_back(1);
   cout<<"capacity->"<<v.capacity();
   cout<<"Size-->"<<v.size()<<endl;

   v.push_back(2);
   cout<<"capacity->"<<v.capacity();
   cout<<"Size-->"<<v.size()<<endl;

   v.push_back(3);
   cout<<"capacity->"<<v.capacity();
   cout<<"Size-->"<<v.size()<<endl;

   v.push_back(4);
   cout<<"capacity->"<<v.capacity();
   cout<<"Size-->"<<v.size()<<endl;

   v.push_back(5);
   cout<<"capacity->"<<v.capacity();
   cout<<"Size-->"<<v.size()<<endl;

   cout<<"Element at 2->"<<v.at(2);
   cout<<endl;
   for(int i:v)cout<<i<<" ";
   v.pop_back();//pops last elements
   cout<<endl;
   for(int i:v)cout<<i<<" ";
   cout<<endl;
   /* After popping all the elements ....THe size becomes zero but the capacity remains the same*/
   v.clear();//clears all the elements in a vector
   for(int i:v)cout<<i<<" ";
   cout<<"vector size-->"<<v.size()<<"Vector capacity-->"<<v.capacity()<<endl;



   vector<int>a(4,1);//initialixes a vector a with 4 1s;
   for(int i:a)cout<<i<<" ";
   cout<<endl;
   vector<int>c(5);
   c.push_back(2);
   vector<int>copy(c);
   for(int i:c)cout<<i<<" ";
   cout<<endl;
   for(int i:copy)cout<<i<<" ";
   
return 0;
}