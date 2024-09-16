#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    int mx1 = INT_MIN;
    int mx2 = INT_MIN;
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < m; i++)
        cin >> v2[i];
    for (int i = 0; i < n; i++)
    {
        mx1 = max(mx1, v1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        mx2 = max(mx2, v2[i]);
    }
    // cout << mx1<< ' '<< mx2<< endl;
    ll ans = abs(mx1 - mx2);
    cout << ans << endl;

    return 0;
}
