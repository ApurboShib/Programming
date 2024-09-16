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
        ll n;
        cin >> n;

        int cnt = 0;
        for (int i = 1; i <= 9; i++)
        {
            ll x = i;
            while (x <= n)
            {
                cnt++;
                x = x * 10 + i;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
