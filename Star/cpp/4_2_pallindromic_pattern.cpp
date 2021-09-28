#include <iostream>
using namespace std;

int main(){
    int c;
    cin>>c;
    for(int i=1;i<=c;i++){
        int j;
        for(j=1;j<=c-i;j++){
            cout<<" ";

        } 
        int k=i;
        for(;j<=c;j++) {
            cout<<k--;
        }
        k=2;
        for(;j<=c+i-1;j++){
            cout<<k++;
        }
        cout<<endl;
    } 
    return 0;
}