#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve(int m, int n)
{
    bool flag = false;

    for (int i = m; i <= n; ++i)
    {
        if (isPrime(i))
        {
            cout << i << endl;
            flag = true;
        }
    }

    if (flag)
    {
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int x = 0;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        solve(m, n);

        if (t > 0)
        {
            cout << endl;
        }
        x++;
    }

    return 0;
}
