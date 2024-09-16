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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        int cnt = 0;

        for (auto &u : s)
        {
            mp[u]++;
        }
        for (auto &u : mp)
        {
            if (u.second % 2 != 0)
                cnt++;
        }
        if (cnt - 1 <= 0)
        {
            cnt = 0;
        }
        else
        {
            cnt--;
        }
        if (k >= cnt and k <= n)
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
