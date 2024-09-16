#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        map<int, int> mp;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (auto &it : v)
        {
            mp[it % 3]++;
        }

        int ans = 0;

        while (mp[1] > mp[2] + 1 || mp[2] > mp[1] + 1)
        {
            if (mp[1] > mp[2] + 1)
            {
                mp[1] -= 2;
                ans++;
            }
            else if (mp[2] > mp[1] + 1)
            {
                mp[2] -= 2;
                ans++;
            }
        }

        ans += min(mp[1], mp[2]) + mp[0];

        cout << ans << endl;
    }

    return 0;
}
