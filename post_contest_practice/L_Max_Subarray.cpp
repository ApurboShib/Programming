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
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll l = 0; l < n; l++)
        {
            for (ll r = l; r < n; r++)
            {
                ll mx = INT_MIN;
                for (ll i = l; i <= r; i++)
                {
                    mx = max(mx, a[i]);
                }
                cout << mx << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
