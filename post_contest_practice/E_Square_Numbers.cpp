#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b;

    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        ll cnt = 0;
        for (ll i = a; i <= b; i++)
        {

            ll ans = sqrt(i);
            if (ans * ans == i)
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
