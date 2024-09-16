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
        ll sum = 0;
        ll ans = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
           
            if (i > 0 && (abs(a[i - 1]) % 2) == (abs(a[i]) % 2))
            {
                sum = a[i];
                ans = max(ans, sum);
            }
            else
            {
                sum = max(a[i], sum + a[i]);
                ans = max(ans, sum);
            }

           
        }
         cout << ans << endl;
    }

    return 0;
}
