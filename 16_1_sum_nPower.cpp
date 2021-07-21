#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int power(int n,int p){
    if(p==0){
        return 1;
    }
    return n*power(n,p-1);
}
// printing decreasing numbers till n
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
void inc(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
int main(){
   inc(5);
return 0;
}