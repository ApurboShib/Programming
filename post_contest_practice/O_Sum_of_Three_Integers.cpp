#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll k, s;
    cin >> k >> s;
    ll cnt = 0;
    for (ll i = 0; i <= k; i++)
    {
        for (ll j = 0; j <= k; j++)
        {
            ll x = s - i - j;

            if (x >= 0 && x <= k)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
