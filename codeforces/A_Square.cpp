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
        vector<pair<int, int>> vp(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> vp[i].first >> vp[i].second;
        }

        sort(vp.begin(), vp.end());

        int side = max(vp[1].first - vp[0].first, vp[3].second - vp[0].second);

        cout << side * side << endl;
    }

    return 0;
}
