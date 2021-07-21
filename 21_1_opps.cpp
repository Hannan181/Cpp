#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;
    void print(){
        cout<<"Name:";
        cout<<name<<endl;
        cout<<"Age:";
        cout<<age<<endl;
        cout<<"Gender:";
        cout<<gender<<endl;
    }
};
 
int main(){
    student c[3];
    for(int i=0;i<3;i++){
        cin>>c[i].name;
        cin>>c[i].age;
        cin>>c[i].gender;
    }
    for(int i=0;i<3;i++){
        c[i].print();
    }
   
return 0;
}