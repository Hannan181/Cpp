#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
   int ans=2;
   int pd=s[1]-s[0];
   int j=2;
   int current=2;
   while(j<n){
       if(pd==s[j]-s[j-1]){
           current++;
       }
       else{
           pd=s[j]-s[j-1];
           current=2;
       }
       ans=max(ans,current);
       j++;
   }
  cout<<ans;
    return 0;
}