#include<iostream>
using namespace std;
 
bool powertwo(int n){
    return(n&&!(n&n-1));
}
int main(){

cout<<powertwo(54);
return 0;
}