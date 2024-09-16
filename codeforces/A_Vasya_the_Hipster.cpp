#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int ans = min(x, y);
    int res = abs(x - y) / 2;
    cout << ans << ' ' << res << endl;

    return 0;
}
