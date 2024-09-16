#include <bits/stdc++.h>

using namespace std;
#define ll long long

const int MOD = 1000000007;

ll power(ll base, ll expo, int mod);
ll power(ll base, ll expo, int mod)
{
    ll res = 1;
    while (expo > 0)
    {
        if (expo % 2 == 1)
        {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        expo /= 2;
    }
    return res;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    ll a = 0;
    for (int i = 1; i <= n; i++)
    {
        a = (a + i) % MOD;
    }

    ll b = 1;
    for (int i = 1; i <= n; i++)
    {
        b = (b * n) % MOD;
    }

    ll c = 1;
    for (int i = 1; i <= n; i++)
    {
        c = (c * i) % MOD;
    }

    ll d = (2 * power(2, n - 1, MOD) + 3 * power(3, n - 1, MOD)) % MOD;

    cout << a << " " << b << " " << c << " " << d << endl;

    return 0;
}


