/*
  Q. Given an array of strings.Find the longest word whose all prefixes are present in the array as strings. if there are none return "NONE". If there are more than one return the lexicographically smallest string.  
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
    private:
    Node* root;
    public:
    Trie(){
        root=new Node();
    }
    //insert a word into trie;
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
    //check if all prefix exists
    bool checkifallPrefixExist(string word){
        Node* node=root;
        bool flag=true;
        for(int i=0;i<word.length();i++){
            if(node->containsKey(word[i])){
                node=node->get(word[i]);
                flag=flag & node->isEnd();
            }else{
                return false;
            }
        }
        return flag;
    }
};

string completeString(int n,vector<string>&a){
    Trie* obj=new Trie();
    for (auto it:a)obj->insert(it);
    string longest="";
    for(auto word:a){
        if(obj->checkifallPrefixExist(word)){
            if(word.length()>longest.length()){
                longest=word;
            }else if(word.length()==longest.length() && word<longest){
                longest=word;
            }
        }
    }
    if(longest=="")return "NONE";
    return longest;
}

int main(){
   vector<string>a={"n","ni","ninja","nin","ninga","ninj"};
   string ans=completeString(6,a);
   cout<<ans;
return 0;
}