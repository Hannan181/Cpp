#include<iostream>
#include<queue>
using namespace std;
 
 class stack{
   int N;
   queue<int>q1;
   queue<int>q2;
   public:
   stack(){
       N=0;
   }
   void push(int val){
       q2.push(val);
       N++;
       while(!q1.empty()){
           q2.push(q1.front());
           q1.pop();
        }
        queue<int>temp;
        temp=q2;
        q2=q1;
        q1=temp;
   }
   void pop(){
       q1.pop();
       N--;
   }
   int top(){
      return q1.front();
   }
 };
int main(){
   stack st;
   for(int i=0;i<4;i++)st.push(i);
   cout<<st.top()<<endl;
return 0;
}