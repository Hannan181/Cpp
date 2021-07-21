#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    string name;
    string num;
    string key;
    cin>>n;
    map<string,string>pbook;
    for(int i=0;i<n;i++){
        cin>>name>>num;
        pbook[name]=num;
    }
    while(cin>>key){
        if(pbook.find(key)!=pbook.end()){
            cout<<key<<"="<<pbook.find(key)->second<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}