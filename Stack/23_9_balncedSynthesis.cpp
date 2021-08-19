#include<iostream>
#include<stack>
using namespace std;
 
 bool balanced(string s){
     int n=s.size();
     stack<char>st;
    //  bool ans;

     for(int i=0;i<n;i++){
         if(s[i]=='(' ||s[i]=='{'||s[i]=='['){
             st.push(s[i]);
         }else if(s[i]==')'){
             if(!st.empty()&&st.top()=='('){
                 st.pop();
             }else{
                 return false;
                 break;
             }
         }else if(s[i]=='}'){
             if(!st.empty()&&st.top()=='{'){
                 st.pop();
             }else{
                 return false;
                 break;
             }
         }else if(s[i]==']'){
             if(!st.empty()&&st.top()=='['){
                 st.pop();
             }else{
                 return false;
                 break;
             }
         }
     }
     if(!st.empty()){
         return false;
     }else{
         return true;
     }
 }
int main(){
   string s;
   cin>>s;

   if(balanced(s)==1){
       cout<<"yes";
   }else{
       cout<<"No";
   }
return 0;
}