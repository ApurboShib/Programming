#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
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
        ll total = n * (n + 1) / 2;
        ll ans = 0;
        for (ll i = 1; i <= n; i *= 2)
        {
            ans += i;
        }
        ll res = total - (2 * ans);
        cout << res << endl;
    }

    return 0;
}
