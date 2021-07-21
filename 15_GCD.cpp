#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b>a){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    while(b!=0){
        int rem=a%b;
        a=b;b=rem;
    }
    return a;
}
 
int main(){
cout<<gcd(42,24);
return 0;
}