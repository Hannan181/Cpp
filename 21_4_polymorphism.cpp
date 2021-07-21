#include<iostream>
using namespace std;
 
 //function overloading
 class ApnaCllg{
     public:
     void fnc(){
         cout<<"I am  a function with no arguments"<<endl;
     }
     void fnc(int x){
         cout<<"I am a function with a "<<x<<"arguments"<<endl;
     }
     void fnc(int x,int y){
         cout<<"I am a function with a "<<x<<y<<"arguments"<<endl;
     }
 };
 //operator overloading
 class complex{
     int r,i;
     public:
     complex(int x=0,int y=0){
         r=x;i=y;
     }
     complex operator + (complex const &obj){
         complex res;
         res.i=i+obj.i;
         res.r=r+obj.r;
         return res;
     }
     void display(){
         cout<<r<<"+i"<<i<<endl;
     }
 };
 //virtual overloading
 class base{
     public:
    virtual void print(){
         cout<<"This is a print function of base";
     }
     virtual void display(){
         cout<<"This  is a diplay function of base";
     }
 };
 class derived:public base{
     public:
     void print(){
         cout<<"This is a print function of derived";
     }
     void display(){
         cout<<"This  is a diplay function of derived";
     }
 };
int main(){
   /*complex c1(4,6),c2(5,2);
   complex c3=c1+c2;
   c3.display();*/
   base *bsetr;
   derived d;
   bsetr=&d;
   bsetr->print();
   bsetr->display();
return 0;
}