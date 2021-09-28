#include<bits/stdc++.h>
using namespace std;
 
 void say(int n){
   string arr[]={"zero","one","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
   if(n==0)return;
   say(n/10);
   cout<<arr[n%10]<<" ";
}
int main(){
   int n;
  cin>>n;
  say(n);
return 0;
}