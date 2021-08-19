#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    //finding
    cout << binary_search(v.begin(), v.end(), 7) << endl;
    //lower_bound
    cout<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    //upperbound
    cout<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    //swap
    int a=3,b=5;
    cout<<"Before Swapping"<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After Swapping"<<a<<" "<<b<<endl;
    //Reversing
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"After inversing->"<<abcd<<endl;

    //rotate
    rotate(v.begin(),v.begin()+1,v.end());
   for(int i:v)cout<<i<<" ";
    return 0;
}