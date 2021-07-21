#include<iostream>
#include<sstream>
using namespace std;
 
int main(){
   int input;
   cin>>input;
   stringstream ss;
   ss<<input;
   string strinput;
  ss>>strinput;
   cout<<"The input"<<strinput;
return 0;
}