/*
1. Insert a word
2. Check if the word is present 
3. Check if the word is present as a suffix
*/

#include<bits/stdc++.h>
using namespace std;
 
struct Node{
    Node* links[26];
    bool flag=false;

    bool containsKey(char ch){
        return links[ch-'a']!=NULL;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};

class Trie{
    private: Node* root;
    public:
    Trie(){
        root=new Node();
    }

    //Inserting a string
    void insert(string word){
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(!node->containsKey(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
        }
        node->setEnd();
    }

    //search for a word i.e check if its present
    bool search(string word){
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(!node->containsKey(word[i])){
                return false;
            }
            node=node->get(word[i]);
        }
        if(node->isEnd()){
            return true;
        }
        return false;
    }

    //check for prefix
    bool startwith(string prefix){
        Node* node=root;
        for(int i=0;i<prefix.length();i++){
            if(!node->containsKey(prefix[i])){
                return false;
            }
            node=node->get(prefix[i]);
        }
        return true;
    }
};

int main(){
   Trie* obj=new Trie();
   obj->insert("hannan");
   bool c1=obj->search("han");
   bool c2=obj->startwith("han");
   cout<<c1<<" "<<c2<<endl;
return 0;
}