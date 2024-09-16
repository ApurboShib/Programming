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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int odd = 0, even = 0, odd1 = 0, even1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[i] % 2 == 0)
                    even = 1;
                else
                    odd = 1;
            }
            else
            {
                if (v[i] % 2 != 0)
                    odd1 = 1;
                else
                    even1 = 1;
            }
        }
        if ((even && odd) or (even1 && odd1))
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
        // cout << even << ' ' << odd << ' ' << odd1 << ' ' <<odd<< endl;
    }

    return 0;
}
