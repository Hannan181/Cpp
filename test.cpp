#include<iostream>
#include<climits>
using namespace std;
 
int main(){
   int search=INT_MAX;
   int arr[5]={1,2,3,5,6,};
   for(int i=0;i<5;i++){
      if(arr[i]>4){
         search=min(search,arr[i]);
      }
   }
   cout<<search;
return 0;
}