#include<iostream>
using namespace std;
int increment(int a){
    a++;
    return a;
}

int main(){
    int a=10;
    int b=increment(a);
    cout<<a<<" ";
    cout<<b;
}