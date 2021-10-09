/*
Q. Given an array of Length of matrices. Find out the minimum cost of multiplying the matrix;
eg a[]={10,20,30,40,50}
it means there are four matrices of the length 10*20,20*30,30*40,40*50;
Cost of Multiplication of two matrices of size a*b and b*c is a*b*c
*/

#include<bits/stdc++.h>
using namespace std;
 
int MCM_recurr(int arr[],int i,int j){
    if(i>=j)return 0;
    int mini=INT_MAX;
    for(int k=i;k<j;k++){
        int temp=MCM_recurr(arr,i,k)+MCM_recurr(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        mini=min(mini,temp);
    }
    return mini;
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<MCM_recurr(arr,1,n-1);
return 0;
}