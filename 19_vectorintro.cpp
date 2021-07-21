#include<iostream>
#include<vector>
using namespace std;
 
int main(){
   vector<int>v1;
   //First way of inserting vector
   v1.push_back(1);
   v1.push_back(2);
   v1.push_back(3);
   //Printing 1st vector
   for(int i=0;i<3;i++){
       cout<<v1[i]<<" ";
   }
   cout<<endl;
   //taking input if all the elements are same
   vector<int>v2(5,10);
   //Printing 2nd vector
   for(int i=0;i<5;i++){
       cout<<v2[i]<<" ";
   }
   cout<<endl;
   //swaping the vectors
   swap(v1,v2);
   //printing 1st vector
   for(int i=0;i<5;i++){
       cout<<v1[i]<<" ";
   }
   cout<<endl;
   //Printing 2nd vector
   for(int i=0;i<3;i++){
       cout<<v2[i]<<" ";
   }
return 0;
}