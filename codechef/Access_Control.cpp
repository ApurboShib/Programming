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
        ll n, X;
        cin >> n >> X;

        string s;
        cin >> s;

        ll ans = 0;
        bool flag = true;

        for (char c : s)
        {
            if (c == '0')
            {
                if (ans == 0)
                {
                    flag = false;
                    break;
                }
                ans--;
            }
            else
            {
                ans = X;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
