#include<iostream>
using namespace std;
int fact(int n){
    int p=1;
    for(int i=2;i<=n;i++){
        p*=i;
    }
    return p;
}
int combination(int n,int r){
    int answer=fact(n)/(fact(r)*fact(n-r));
    return answer;
}

int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
         int position=combination(i,j);
         cout<<position<<" ";
        }
        cout<<endl;
    }
    return 0;
}