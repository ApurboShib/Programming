#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n][2];

        int l = 0, r = 1e9;
        int cnt = 0;

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i][0] >> a[i][1];

            if (a[i][0] == 1)
            {
                l = max(l, a[i][1]);
            }
            else if (a[i][0] == 2)
            {
                r = min(r, a[i][1]);
            }
            else
            {
                mp[a[i][1]]++;
            }
        }

        int ans = max(0, r - l + 1);

        for (auto &x : mp)
        {
            if (x.first >= l && x.first <= r)
            {
                cnt++;
            }
        }

        cout << ans - cnt << endl;
    }

    return 0;
}
