#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int total = 0;
        int mn = 1e9, mx = 0;
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if ((mask >> j) & 1)
            {
                total += a[j];
                mx = max(mx, a[j]);
                mn = min(mn, a[j]);
                cnt++;
            }
        }
        int subs = (mx - mn);
        if (total >= l && total <= r && subs >= x && cnt >= 2)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
