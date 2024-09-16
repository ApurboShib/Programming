#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve()
{
    ll n, k;
    cin >> n >> k;

    ll ans = (n * (n + 1)) / 2;

    if (k < ans)
    {
        cout << "-1" << endl;
        return;
    }
    ll res = k - (ans - 1);

    for (ll i = 1; i < n; i++)
        cout << "1 ";

    cout << res << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
