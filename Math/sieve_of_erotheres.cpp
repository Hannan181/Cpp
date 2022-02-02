// Sieve of erothesis is used to count the numbers of prime numbers within  a given range
// Very fast with a time complexity of n*log(log n)
#include<bits/stdc++.h>
using namespace std;
 
int countPrime(int n){
    int cnt=0;
    vector<bool>visited(n,true);
    visited[0]=visited[1]=false;
    for(int i=2;i<n;i++){
        if(visited[i]){
            cnt++;
            for(int j=2*i;j<n;j+=i){
                visited[j]=false;
            }
        }
    }
    return cnt;
}
int main(){
   cout<<countPrime(40);
return 0;
}