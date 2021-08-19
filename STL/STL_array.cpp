#include<iostream>
#include<array>
using namespace std;
 
int main(){
   array<int,4>a={1,2,3,4};
   for(int i=0;i<a.size();i++){
       cout<<a[i]<<" ";
   }
   cout<<endl;
   cout<<"Element at 2nd index "<<a.at(2)<<endl;
   cout<<"Empty or Not "<<a.empty()<<endl;
   cout<<"First element "<<a.front()<<endl;
   cout<<"Last element "<<a.back()<<endl;
return 0;
}