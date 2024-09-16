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
    int t_case = 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v1(n);
        vector<ll> v2(n);
        for (ll i = 0; i < n; i++)
            cin >> v1[i];
        for (ll i = 0; i < n; i++)
            cin >> v2[i];
        sort(v1.begin(), v1.end());
        sort(v2.rbegin(), v2.rend());
        int ans = 1;
        for (ll i = 0; i < n; i++)
        {
            ans += 1LL * v1[i] * v2[i];
        }
        //cout << "Case "  << '#' << t_case++;
        cout << "Case #"<< t_case++;
        cout << ans << endl;
    }

    return 0;
}
