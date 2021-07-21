#include<iostream>
using namespace std;
void fibonacci(int n){
    int t1=0;
    int t2=1;
    int t_i;
    for(int i=1;i<=n;i++){
        cout<<t1;
        cout<<" ";
        t_i=t1+t2;
        t1=t2;
        t2=t_i;
     }
}

int main(){
   int n;
   cin>>n;
    fibonacci(n);
    return 0;
}