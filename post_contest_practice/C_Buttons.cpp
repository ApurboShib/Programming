#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int ans = 0;
    ans = max(ans, x + (x - 1));
    ans = max(ans, y + (y - 1));
    cout << max(ans, x + y) << endl;

    return 0;
}
