#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        set<ll> se;
        se.insert(0);
        vector<ll> v(n);
        bool flag = false;
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i % 2 == 0)
                v[i] *= -1;
            sum += v[i];
            if (se.find(sum) != se.end())
                flag = true;
            se.insert(sum);
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        se.clear();
    }

    return 0;
}
