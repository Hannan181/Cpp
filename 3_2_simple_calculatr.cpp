#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter your numbers"<<endl;
    cin>>n1>>n2;
    char op;//operator is a keyword
    cout<<"Enter your operator"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
       cout<<n1+n2<<endl;
        break;
    case '-':
       cout<<n1-n2<<endl;
        break;
    case '*':
       cout<<n1*n2<<endl;
        break;
    case '/':
       cout<<n1/n2<<endl;
        break;
    
    default:
        cout<<"your operation  is not valid!!!"<<endl;
        break;
    }
    return 0;
}