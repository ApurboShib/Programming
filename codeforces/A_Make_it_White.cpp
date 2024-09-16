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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int l = -1, r = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (l == -1)
                {
                    l = i;
                }
                r = i;
            }
        }

        if (l == -1)
        {
            cout << 0 << endl;
        }
        else
        {

            int mn = r - l + 1;
            cout << mn << endl;
        }
    }

    return 0;
}
