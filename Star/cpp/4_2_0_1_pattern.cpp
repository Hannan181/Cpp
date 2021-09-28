#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
                cout<<" ";                
            }
            else{
                cout<<"0";
                cout<<" ";
            }
        }cout<<endl;
    }
    return 0;
}