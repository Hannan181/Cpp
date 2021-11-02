/*
  Given e no. of eggs and f no. of floors. Find the minimum number of eggs required for finding the threshold egg breaking floor. i.e the lowest floor from which the egg breaks.
*/

#include<bits/stdc++.h>
using namespace std;
 
int eggBreak(int e,int f){
    if(f==0||f==1)return f;
    if(e==1)return f;
    int mn=INT_MAX;
    for(int k=1;k<=f;k++){
        int temp=1+max(eggBreak(e-1,k-1),eggBreak(e,f-k));
        mn=min(mn,temp);
    }
   return mn;
}
int main(){
   int e,f;
   cin>>e>>f;
   cout<<eggBreak(e,f);
return 0;
}