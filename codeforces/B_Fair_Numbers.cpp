#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

bool solve(ll n)
{
    ll temp = n;
    while (n > 0)
    {
        ll x = n % 10;
        if (x == 0)
        {
            n /= 10;
            continue;
        }
        if (temp % x != 0)
        {
            return false;
        }
        n /= 10;
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
        ll n;
        cin >> n;
        while (!solve(n))
        {
            n++;
        }
        cout << n << endl;
    }

    return 0;
}
