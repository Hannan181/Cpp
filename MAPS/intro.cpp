#include<bits/stdc++.h>
using namespace std;
 
int main(){
   map<string,int>mp;
   mp["Hannan"]=98;
   mp["Hary"]=78;
   mp["Rohan"]=32;
   mp.insert({{"Afridi",91},{"Afriiri",76}});
   map<string,int>::iterator itr;
   for(itr=mp.begin();itr!=mp.end();itr++){
       cout<<(*itr).first<<" "<<(*itr).second<<endl;
   }
   cout<<mp.size()<<" "<<mp.max_size()<<endl;
return 0;
}