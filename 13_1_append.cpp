#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    s1="fam";
    s2="ily";
    s1.append(s2);
    cout<<s1<<endl;
    cout<<s1[1]<<endl;
    return 0;
}