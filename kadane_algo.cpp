#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
 
 int minSumSubArray(int a[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }
    return maxi;
 }
 int maxSumSubArray(int a[],int n){
     int maxSum=0;
     int currSum=0;
     bool sign=true;
     for(int i=0;i<n;i++){
         if(a[i]>0)sign=false;
     }
     if(sign){
         return minSumSubArray(a,n);
     }
     for(int i=0;i<n;i++){
         currSum+=a[i];
         if(currSum>maxSum){
             maxSum=currSum;
         }
         if(currSum<0){
             currSum=0;
         }
     }
     return currSum;
 }
int main(){
   int arr[4]={-1,-4,-5,-3};
   cout<<maxSumSubArray(arr,4);

return 0;
}