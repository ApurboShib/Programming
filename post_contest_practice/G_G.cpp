#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool isPrime(int n)
{
    if (n < 3)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 5)
            cout << -1 << endl;
        else if (!isPrime(n - 2))
            cout << 2 << ' ' << n - 2 << endl;
        else if (!isPrime(n - 3))
            cout << 3 << ' ' << n - 3 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
