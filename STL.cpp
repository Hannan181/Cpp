#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main(){
   int a[]={1,4,5,3,4};
   sort(a,a+sizeof(a)/sizeof(a[0]));
   for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
       cout<<a[i]<<" ";
   }
   vector<int>k;
   k.push_back(1);
   k.push_back(5);
   k.push_back(2);
   sort(k.begin(),k.end());

return 0;
}

//STL-->Standard Template Library