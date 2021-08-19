#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
 
 int prec(char c){
     switch (c)
     {
     case '*':
         return 2;
         break;
     case '/':
         return 2;
         break;
    case '+':
         return 1;
         break;
    case '-':
         return 1;
         break;
    case '^':
         return 3;
         break;
     default:
     return -1;
         break;
     }
 }
 string infix_prefix(string s){
     reverse(s.begin(),s.end());
     stack<char>st;
     string res="";

     for(int i=0;i<s.length();i++){
         if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
             res+=s[i];
         }else if(s[i]==')'){
             st.push(s[i]);
         }else if(s[i]=='('){
             while(!st.empty()&&st.top()!=')'){
                 res+=st.top();
                 st.pop();
             }
             if(!st.empty()){
                 st.pop();
             }
         }else {
             while(!st.empty()&&(prec(st.top())>=prec(s[i]))){
                 res+=st.top();
                 st.pop();
             }
             st.push(s[i]);
         }
     }
     while(!st.empty()){
         res+=st.top();
         st.pop();
     }
     reverse(res.begin(),res.end());
     return res;
 }
int main(){
   string k;
   cin>>k;
   cout<<infix_prefix(k);
return 0;
}