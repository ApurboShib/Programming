#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n *= 2;

        vector<ll> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
        sort(v.begin(), v.end());
        ll ans = 0;
        for (int i = 0; i < n; i += 2) 
        {
            ans += v[i];
        }
        cout << ans << endl;
    }
    return 0;
}
