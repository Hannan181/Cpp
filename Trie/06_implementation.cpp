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

 vector<int>maxXorQueries(vector<int>&arr,vector<vector<int>>&queries){
     vector<int>ans(queries.size(),0);
     vector<pair<int,pair<int,int>>>offlineQueries;
     sort(arr.begin(),arr.end());
     int index=0;
     for(auto &it:offlineQueries){
         offlineQueries.push_back({it[1],{it[0],index++}});
     }
     sort(offlineQueries.begin(,offlineQueries.end()));
     int i=0;
     int n=arr.size();
     Trie* trie=new Trie;

     for(auto &it:offlineQueries){
         while(i<n && arr[i]<=it.first){
             trie.insert(arr[i]);
             i++;
         }
         if(i!=0)ans[it.second.second]=trie->getMax(it.second.first);
         else ans[it.second.second]=-1;
     }
     return ans;
 }
int main(){
   
return 0;
}