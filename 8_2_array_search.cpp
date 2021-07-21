#include <iostream>
using namespace std;
int linear_search(int n, int arr[], int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << linear_search(n,arr,key);

    return 0;
}