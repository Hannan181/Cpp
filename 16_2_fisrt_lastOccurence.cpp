#include<iostream>
using namespace std;
 int firstOCC(int arr[],int n,int i,int k){
     if(i==n){
         return -1;
     }
     if(arr[i]==k){
         return i;
     }
     firstOCC(arr,n,i+1,k);
 }
 int lastOcc(int arr[],int n,int i,int k){
     int restArr;
     
 }
int main(){
   int arr[7]={1,4,3,6,2,5,2};
   cout<<firstOCC(arr,7,0,2);
return 0;
}