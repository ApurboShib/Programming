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

        string a, b, c;
        cin >> a >> b >> c;

        bool flag = false;

        for (int i = 0; i < n; ++i)
        {
            if (c[i] != a[i] && c[i] != b[i])
            {
                flag = true;
            }
                }

        if (flag)
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
