#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll expo(double base, int exp)
{
    if (exp < 0)
    {
        base = 1 / base;
        exp = -exp;
    }

    double ans = 1.0;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            ans *= base;
        }
        exp /= 2;
        base *= base;
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        set<ll> se;
        for (ll i = 0;; i++)
        {
            ll x = expo(a, i);
            if (x > c)
                break;

            bool found = false;
            for (ll y = 0;; y++)
            {
                ll value = x * expo(b, y);
                if (value > c)
                    break;
                if (c % value == 0)
                {
                    se.insert(c/ value);
                    found = true;
                }
            }
            if (!found)
                break;
        }
        cout << se.size() << endl;
    }
    return 0;
}
