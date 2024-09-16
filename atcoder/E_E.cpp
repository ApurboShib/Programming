#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int x = a; x <= b; ++x)
    {
        bool flag = true;
        for (int i = c; i <= d; i++)
        {
            flag &= !isPrime(x + i);
        }

        if (flag)
        {
            cout << "Takahashi" << endl;
            return 0;
        }
    }

    cout << "Aoki" << endl;

    return 0;
}
