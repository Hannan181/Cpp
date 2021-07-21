#include <iostream>
using namespace std;

int main()
{
    int b;
    cin >> b;
    if (b > 5000)
    {
        cout << "Neha" << endl;
    }
    else if(b<5000&& b>2000)
    {
        cout << "Rashmi" << endl;
    }
    else
    {
        cout << "Friends" << endl;
    }
    return 0;
}