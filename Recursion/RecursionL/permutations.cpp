#include<bits/stdc++.h>
using namespace std;
 
 void get_permu(string a,int index){
     if(index>=a.length()){
         cout<<a<<" ";
         return;
     }
     for(int i=0;i<a.length();i++){
         swap(a[i],a[index]);
         get_permu(a,index+1);
         swap(a[i],a[index]);
     }
 }
int main(){
   cout<<"Enter the String"<<endl;
   string a;
   cin>>a;
   cout<<"The permutations are:"<<endl;
   get_permu(a,0);

return 0;
}