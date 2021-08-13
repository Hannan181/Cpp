#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;
 
 int get_maxArea(vector<int>a){
     int n=a.size();
     int i=0;
     int ans=INT_MIN;
     stack<int>st;
     while(i<n){
        while (!st.empty() && a[st.top()]>a[i])
        {
            int t=st.top();
            int h=a[t];
            st.pop();
            if(st.empty()){
                ans=max(ans,h*i);
            }else{
                int len=i-st.top()-1;
                ans=max(ans,h*len);
            }
        }
        st.push(i);
        i++;
     }
     return ans;
 }
int main(){
   vector<int>a={1,2,3,5,6,1};
   cout<<get_maxArea(a);
return 0;
}