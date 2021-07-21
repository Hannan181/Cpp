#include<iostream>
using namespace std;
 void reverse(string a){
     if(a.length()==0){
         return;
     }
     string ros=a.substr(1);
     reverse(ros);
     cout<<a[0];
 }
int main(){
    string a;
    getline(cin,a);
   reverse(a);
return 0;
}