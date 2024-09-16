#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vp.push_back({x, i + 1});
    }
    sort(vp.begin(), vp.end());
    for (int i = 0; i < n / 2; i++)
    {
        cout << vp[i].second << ' ' << vp[n - i - 1].second << endl;
    }

    return 0;
}
