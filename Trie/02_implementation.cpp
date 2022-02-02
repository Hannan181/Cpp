#include<bits/stdc++.h>
using namespace std;
 
struct Node{
    Node* links[26];
    int cntEndWith=0;
    int cntPrefix=0;

    bool containsKey(char ch){
        return links[ch-'a']!=NULL;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    void increasePrefix(){
        cntPrefix++;
    }
    void reducePrefix(){
        cntPrefix--;
    }
    void increaseEnd(){
        cntEndWith++;
    }
    void deleteEnd(){
        cntEndWith--;
    }
    int getEnd(){
        return cntEndWith;
    }
    int getPrefix(){
        return cntPrefix;
    }
};

class Trie{
    private: Node* root;
    public:
    Trie(){
        root=new Node();
    }
    //Inserting a new word
    void insert(string word){
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(!node->containsKey(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
            node->increasePrefix();
        }
        node->increaseEnd();
    }
    //count the number of words
    int countWordsEqualto(string word){
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(node->containsKey(word[i])){
                node=node->get(word[i]);
            }else{
                return 0;
            }
        }
        return node->getEnd();
    }
    //count the number of words starting with prefix
    int countWordsStartingWith(string word){
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(node->containsKey(word[i])){
                node=node->get(word[i]);
            }else{
                return 0;
            }
        }
        return node->getPrefix();
    }
    //erasing a word;
    void erase(string word){
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(node->containsKey(word[i])){
                node=node->get(word[i]);
                node->reducePrefix();
            }else{
                return;
            }
        }
        node->deleteEnd();
    }
};
int main(){
   Trie* obj=new Trie();
   obj->insert("apple");
   obj->insert("apple");
   obj->insert("app");
   cout<<obj->countWordsEqualto("app")<<" "<<obj->countWordsEqualto("apple")<<endl;
   cout<<obj->countWordsStartingWith("app")<<" "<<obj->countWordsStartingWith("apple")<<endl;
   obj->erase("apple");
   cout<<obj->countWordsEqualto("app")<<" "<<obj->countWordsEqualto("apple")<<endl;
   cout<<obj->countWordsStartingWith("app")<<" "<<obj->countWordsStartingWith("apple")<<endl;
return 0;
}