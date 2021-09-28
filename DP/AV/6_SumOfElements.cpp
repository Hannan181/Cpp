#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int k1,k2;
   cin>>k1>>k2;
   sort(arr,arr+n);
   int sum=0;
   for(int i=k1;i<=k2-2;i++){
       sum+=arr[i];
   }
   cout<<sum;
return 0;
}