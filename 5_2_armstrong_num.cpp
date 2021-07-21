#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int o=n;//we have to store the value of n;;;;else it is divided and left nothing 
    while(n>0){
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
   
    if(sum==o){
        cout<<"Arm strong number";
    }
    else{
        cout<<"non armstrong number";
    }
    return 0;
}