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
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (2 * a <= b)
        {
            cout << a << ' ' << 2 * a << endl;
        }
        else
        {
            cout << -1 << ' ' << -1 << endl;
        }
    }

    return 0;
}
