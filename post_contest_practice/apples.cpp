#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll mn = 1e18;

    for (int i = 0; i < (1 << n); i++)
    {
        ll w1 = 0, w2 = 0;

        for (int j = 0; j < n; j++)
        {

            if (i & (1 << j))
                w1 += v[j];
            else
                w2 += v[j];
        }

        mn = min(mn, abs(w1 - w2));
    }

    cout << mn << endl;

    return 0;
}
