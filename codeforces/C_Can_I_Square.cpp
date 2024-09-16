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
        int n;
        cin >> n;

        ll sqr = 0;
        for (int i = 0; i < n; i++)
        {
            ll sqb;
            cin >> sqb;
            sqr += sqb;
        }

        ll x = sqrt(sqr);
        if (x * x == sqr)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
