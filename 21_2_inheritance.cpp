#include<iostream>
using namespace std;
 
 class Employee{
     public:
     int id;
     float salary;
     Employee(int input){
         id=input;
         salary=34.00;
     }
 };
class programmer:Employee{
    public:
    int language=9;
};
int main(){
   Employee Harry(1),Rohan(2);
   cout<<Harry.salary<<endl;

return 0;
}