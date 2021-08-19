#include<iostream>
#include<stack>
using namespace std;
 
 int prec(char c){
    switch (c)
    {
    case '^':
        return 3;
        break;
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
    default:
        return -1;
        break;
    }
 }
 string infixTopostfix(string s){
     stack<char>st;
     string res="";

     for(int i=0;i<s.length();i++){
         if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
             res+=s[i];
         }else if (s[i]=='('){
             st.push(s[i]);
         }else if(s[i]==')'){
             while(!st.empty()&&st.top()!='('){
                 res+=st.top();
                 st.pop();
             }
             if(!st.empty()){
                 st.pop();
             }
         }else{
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
     return res;
 }
int main(){
   //challenges
   string k;
   cin>>k;
   cout<<infixTopostfix(k);
return 0;
}
/*
1.if operand -->print;
2.if ( -->push to stack
3.if ) pop from stack  andprintuntill ( is found
4.if operator pop from stack and print untill an operator with less precendnce is found;
*/