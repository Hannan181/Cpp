#include<iostream>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;
    int ARR[N][N];
    int sum=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<"Enter the"<<i<<j<<"value"<<endl;
                    cin>>ARR[i][j];
            for(int k=0;k<K-1;k++){
                for(int l=0;l<K-1;l++){
                    
                    sum+=ARR[k][l];
                    
                }
            }
            
        }
    }
    cout<<sum;
}