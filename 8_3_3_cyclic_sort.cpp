#include<bits/stdc++.h>
using namespace std;
 
void cyclic_sort(int n,int arr[]){
    int i=0;
    while(i<n){
        int correct=arr[i]-1;
        if(arr[correct]!=arr[i]){
            swap(arr[correct],arr[i]);
        }else{
            i++;
        }
    }
}
int main(){
   int arr[5]={4,3,2,1,5};
   cyclic_sort(5,arr);
   for(auto i:arr)cout<<i<<" ";
return 0;
}

//This type of sorting is mostly used for sorting continuous array
