#include<iostream>
#include<queue>
using namespace std;
 
int main(){
   //First in first out
queue<string>q;
q.push("Hannan");
q.push("afrdii");
cout<<"first element->"<<q.front()<<endl;;
cout<<"Size->"<<q.size();
return 0;
}