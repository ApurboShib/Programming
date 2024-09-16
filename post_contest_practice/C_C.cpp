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
    int cs = 1;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        vector<ll> v1(n);
        for (ll i = 0; i < n; i++)
            cin >> v1[i];
        sort(v.begin(), v.end());
        sort(v1.rbegin(), v1.rend());
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += (1LL * v[i] * v1[i]);
        }
        cout << "Case #" << cs++ << ':' << ' ' << ans << endl;
    }

    return 0;
}
