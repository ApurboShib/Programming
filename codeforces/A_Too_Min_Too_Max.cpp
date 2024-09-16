#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

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
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = 0;

        ans = abs(v[0] - v[n - 2]) + abs(v[n - 2] - v[1]) + abs(v[n - 1] - v[1] + abs(v[0] - v[n - 1]));
        cout << ans << endl;
    }
    return 0;
}