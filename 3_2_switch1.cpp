#include<iostream>
using namespace std;

int main(){
    char buttom;
    cin>>buttom;
    switch (buttom)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"Namskar"<<endl;
        break;
    case 'd':
        cout<<"Salut"<<endl;
        break;
    
    default:
       cout<<"Ciao"<<endl;
        break;
    }
return 0;
}