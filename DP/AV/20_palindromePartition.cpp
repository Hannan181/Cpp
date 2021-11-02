#include<bits/stdc++.h>
using namespace std;
 
bool is_palindrome(string a,int i,int j){
    if(i==j)return true;
    if(i>j)return true;
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}
int palindrome_partition_recurr(string a,int i ,int j){
    if(i>=j)return 0;
    if(is_palindrome(a,i,j))return 0;
    int ans=INT_MAX;
    for(int k=i;k<j;k++){
        int temp=palindrome_partition_recurr(a,i,k)+palindrome_partition_recurr(a,k+1,j)+1;
        ans=min(ans,temp);
    }
    return ans;
}
int main(){
   string a;
   cin>>a;
   cout<<palindrome_partition_recurr(a,0,a.length()-1);
return 0;
}