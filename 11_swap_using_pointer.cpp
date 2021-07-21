#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int temp=* a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=10;
    int*aptr=&a;
    int b=20;
    int* bptr=&b;
    swap(*aptr,*bptr);
    cout<<a<<" "<<b;
}