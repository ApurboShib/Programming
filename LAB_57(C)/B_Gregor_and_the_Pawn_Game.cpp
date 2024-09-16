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
        long n;
        cin >> n;
        string s, s1;
        cin >> s >> s1;
        long cnt(0);
        for (long p = 0; p < n; p++)
        {
            if (s1[p] == '0')
            {
                continue;
            }

            if (p > 0 && s[p - 1] == '1')
            {
                s[p - 1] = 'x';
                ++cnt;
            }
            else if (s[p] == '0')
            {
                s[p] = 'x';
                ++cnt;
            }
            else if (p + 1 < n && s[p + 1] == '1')
            {
                s[p + 1] = 'x';
                ++cnt;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
