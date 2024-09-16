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
        ll ans = 0;
        ll x = 8;
        for (int i = 1; i <= (n / 2); i++)
        {
            ans += i * x;
            x += 8;
        }
        cout << ans << endl;
    }

    return 0;
}
