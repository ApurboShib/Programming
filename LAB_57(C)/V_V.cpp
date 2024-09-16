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
        int n, m;
        cin >> n >> m;

        int gcd = __gcd(n, m);
        int res = (n * m) / (gcd * gcd);

        cout << res << endl;
    }

    return 0;
}
