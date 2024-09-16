#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

bool f(const vector<ll> &v, ll bug, ll x, ll y, ll mid)
{
    ll ans = 0, mn = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        mn = min(y, abs(v[i] - ans) * x);
        if (mn > mid)
            return false;
        bug -= mn;
        ans = v[i];
    }
    return bug > 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, m, x, y;
        cin >> n >> m >> x >> y;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll l = 0, r = 1e18, ans = -1;

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            if (f(v, m, x, y, mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (ans != -1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
