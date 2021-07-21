#include <iostream>
using namespace std;
int fact(int n)
{
    int p = 1;
    for (int i = 2; i <= n; i++)
    {
        p *= i;
    }
    return p;
}

int main()
{
    int n, r;
    cin >> n >> r;
    int ans = fact(n) / (fact(r) * fact(n - r));
    cout << ans;
  return 0;  
}