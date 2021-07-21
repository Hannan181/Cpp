#include <bits/stdc++.h>
using namespace std;
int binaryTOdecimal(int n)
{
    int a = 1, ans = 0;
    while (n > 0)
    {
        int y = n % 10;
        ans = ans + a * y;
        n = n / 10;
        a = a * 2;
    }
    return ans;
}
int octalTOdecimal(int n)
{
    int a = 1, ans = 0;
    while (n > 0)
    {
        int y = n % 10;
        ans = ans + a * y;
        n = n / 10;
        a = a * 8;
    }
    return ans;
}
int hexaTOdecimal(string n)
{
    int sum = 0, a = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            sum = sum + a * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            sum = sum + a * (n[i] - 'A' + 10);
        }
        a = a * 16;
    }
    return sum;
}

int main()
{

    string n;
    cin >> n;
    int d = hexaTOdecimal(n);
    cout << d;
    return 0;
}