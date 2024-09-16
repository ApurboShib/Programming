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
        ll n, k;
        cin >> n >> k;
        ll ans = 1;

        for (int i = 0; i < n; i++)
        {

            ll x;
            cin >> x;
            ans *= x;
        }

        if (2023 % ans == 0)
        {
            cout << "YES" << endl;
            cout << 2023 / ans << ' ';
            for (int i = 1; i < k; i++)

                cout << 1 << ' ';
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
