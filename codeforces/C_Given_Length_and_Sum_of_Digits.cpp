#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if (m == 0)
    {
        if (n == 1)
        {
            cout << "0 0 " << endl;
            return 0;
        }
        else
        {
            cout << "-1 -1 " << endl;
            return 0;
        }
    }

    string mx;
    string mn;
    for (int i = 0; i < n; i++)
    {
        int x = min(9, m);
        mx.push_back('0' + x);
        m -= x;
        if (m > 0)
        {
            cout << "-1 -1 " << endl;
            return 0;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            mn.push_back(mx[i]);
        }
        int k = 0;
        while (mn[k] == '0')
            k++;
        mn[0]++;
        mx[k]--;
        cout << mn << ' ' << mx << endl;
    }

    return 0;
}
