#include<iostream>
using namespace std;

int main(){
    int n;
    int a[n];
    int current;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            current=0;
            current=current+a[j];
            cout<<current<<endl;
        }
    }
   return 0;
}