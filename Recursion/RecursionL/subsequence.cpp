#include<bits/stdc++.h>
using namespace std;
 
void subSequence(string a,string b,int index){
    if(index>=a.size()){
        cout<<b<<" ";
        return ;
    }
    subSequence(a,b,index+1);
    b+=a[index];
    subSequence(a,b,index+1);
}
int main(){
   string s;
   cin>>s;
   string s1;
   subSequence(s,s1,0);
return 0;
}