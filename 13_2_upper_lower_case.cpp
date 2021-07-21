#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main(){
   string s2="ADfjveir;JD";
   transform(s2.begin(),s2.end(),s2.begin(),::toupper);
   cout<<s2<<endl;
   transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    cout<<s2<<endl;
return 0;
}