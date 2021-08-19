#include<iostream>
#include<stack>
#include<string>
using namespace std;
 
 void reverse(string s){
     stack<string>s1;

     for(int i=0;i<s.length();i++){
         string word="";
         while(s[i]!=' ' && i<s.length()){
             word+=s[i];
             i++;
         }
         s1.push(word);
     }
     while(!s1.empty()){
         cout<<s1.top()<<" ";
         s1.pop();
     }
     cout<<endl;

 }
int main(){
   string s="Hey, how are you doing?";
  reverse(s);
return 0;

}