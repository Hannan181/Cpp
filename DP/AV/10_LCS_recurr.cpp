#include<bits/stdc++.h>
using namespace std;
 
int LCS(string x,int m,string y,int n){
    if(m==0||n==0){
        return 0;
    }
    if(x[m-1]==y[n-1])return 1+LCS(x,m-1,y,n-1);
    return max(LCS(x,m,y,n-1),LCS(x,m-1,y,n));
}
int main(){
   string x,y;
   cin>>x>>y;
   cout<<LCS(x,x.length(),y,y.length());
return 0;
}