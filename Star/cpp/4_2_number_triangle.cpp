#include <iostream>
using namespace std;

int main(){
    int b;
    cin>>b;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=b-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
    return 0;
}