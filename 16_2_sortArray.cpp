#include<iostream>
using namespace std;
 
 bool arraySort(int arr[],int n){
     if(n==1){
         return true;
     }
     return (arr[0]<arr[1]&&arraySort(arr+1,n-1));
 }
int main(){
   int k1[4]={3,4,5,6};
cout<<arraySort(k1,4);
return 0;
}