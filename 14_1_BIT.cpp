#include<iostream>
using namespace std;
int getBit(int n,int position){
    return((n&&(1<<position)));
}
 
int main(){
   int n;
   cin>>n;
   int position;
   cin>>position;
   cout<<getBit(n,position);
return 0;
}