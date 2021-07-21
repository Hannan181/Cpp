#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    int maxi=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
        cout<<maxi<<endl;
    }

    return 0;
}