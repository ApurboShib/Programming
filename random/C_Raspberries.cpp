#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int even = 0, ans = k;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even++;
            if (x % k == 0)
                ans = 0;
            ans = min(ans, k - x % k);
        }
        if (k == 4)
        {
            if (even >= 2)
                ans = 0;
            else if (even == 1)
                ans = min(ans, 1);
            else
                ans = min(ans, 2);
        }
        cout << ans << endl;
    }
    return 0;
}