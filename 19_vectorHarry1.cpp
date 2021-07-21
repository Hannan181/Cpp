#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
 
int main(){
   vector<int>vec1;
   int element;
   int size;
   cin>>size; //size we want to be
//    for(int i=0;i<size;i++){
//        cin>>element;
//        vec1.push_back(element);
//    }
   //vec1.pop_back();
  // display(vec1);
   //inserting using iiterator
//    vector<int>::iterator iter=vec1.begin(); //it is just like declaring pointer 
//    vec1.insert(iter+1,45);
//    vec1.insert(iter+3,5,67);//inserting 5 copies of 67
  // display(vec1);
   vector<char>vec2(4);
   vector<int>vec3(3,6);//display 6 three times
   display(vec3);
return 0;
}