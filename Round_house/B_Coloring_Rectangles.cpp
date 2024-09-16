#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int res = 0;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = (n * m);
        if (ans % 3 == 0)
        {
            res = ans / 3;
        }
        else
            res = (ans / 3) + 1;
        cout << res << endl;
    }

    return 0;
}
