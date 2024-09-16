#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
bool solve(vector<ll> &v)
{
    sort(v.begin(), v.end());
    for (ll i = 1; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] > 1)
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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (solve(v))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}


