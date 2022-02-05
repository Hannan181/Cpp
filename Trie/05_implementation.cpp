/*
Return the maximum xor between any two values of different arrays
*/
#include<bits/stdc++.h>
using namespace std;
 
 struct Node{
     Node* links[2];

     bool containsBit(int ind){
         return links[ind]!=NULL;
     }
     Node* get(int ind){
         return links[ind];
     }
     void put(int ind,Node* node){
         links[ind]=node;
     }
 };

 class Trie{
    private:
    Node* root;
    public:
    Trie(){
        root=new Node();
    }
    public:
    void insert(int num){
        Node* node=root;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(!node->containsBit(bit)){
                node->put(bit,new Node());
            }
            node=node->get(bit);
        }
    }
    public:
    int getMax(int num){
        Node* node =root;
        //cout<<1<<endl;
        int maxNum=0;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(node->containsBit(!bit)){
                maxNum=maxNum|(1<<i);//adding,jdi ultaa tu thake set bit kori diye
                node=node->get(!bit);
            }else{
                node=node->get(bit);
            }
        }
        return maxNum;
    }
 };

 int maxXor(int n,int m,vector<int>&arr1,vector<int>&arr2){
    Trie* trie=new Trie();
    for(int i=0;i<n;i++){
        trie->insert(arr1[i]);
    } 
    int maxi=0;
    for(int i=0;i<m;i++){
        maxi=max(maxi,trie->getMax(arr2[i]));
    }
    return maxi;
 }
int main(){
//    vector<int>arr1={6,6,0,6,8,5,6};
//    vector<int>arr2={1,7,1,7,8,0,2};
   vector<int>arr1(7);
   vector<int>arr2(7);
   for(int i=0;i<7;i++)cin>>arr1[i];
   for(int i=0;i<7;i++)cin>>arr2[i];
   cout<<maxXor(7,7,arr1,arr2);
return 0;
}