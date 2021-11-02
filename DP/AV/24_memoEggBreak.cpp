#include<bits/stdc++.h>
using namespace std;
static int t[3][11];
 
int eggBreak_memo(int e,int f){
    if(t[e][f]!=-1){
        return t[e][f];
    }
    if(f==0||f==1)return f;
    if(e==1)return f;
    int mn=INT_MAX;
    for(int k=1;k<=f;k++){
        int temp=1+max(eggBreak_memo(e-1,k-1),eggBreak_memo(e,f-k));
        mn=min(mn,temp);
    }
    t[e][f]=mn;
    return t[e][f];
}
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<11;j++){
            t[i][j]=-1;
        }
    }
   int e,f;
   cin>>e>>f;
   cout<<eggBreak_memo(e,f);
return 0;
}