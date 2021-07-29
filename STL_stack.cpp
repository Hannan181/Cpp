#include<iostream>
#include<stack>
using namespace std;
 
int main(){
    //first in last out
   stack<string>s;
   s.push("Hannan");
   s.push("Afridi");
   s.push("Nothing");
   cout<<"Top Element->"<<s.top()<<endl;
   s.pop();
   cout<<"Top Element->"<<s.top()<<endl;
}