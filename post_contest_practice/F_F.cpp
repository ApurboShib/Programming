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
    ll sum = 0, ans = 0;
    while (t--)
    {
        ll n;
        cin >> n;
        sum += n;
        ans ^= n;
    }
    // cout << sum << ' ' << ans << endl;
    cout << (sum - ans) << endl;

    return 0;
}
