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
        sort(v.rbegin(), v.rend());
        int cnt1 = 0, cnt2 = 0;
        for (auto &x : v)
        {
            if (cnt1 <= cnt2)
            {
                cnt1 += x;
            }
            else
            {
                cnt2 += x;
            }
        }
        if (cnt1 == cnt2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
