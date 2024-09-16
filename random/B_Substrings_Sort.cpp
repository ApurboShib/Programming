#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, string>> vp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vp.push_back({s.size(), s});
    }

    bool flag = false;
    sort(vp.begin(), vp.end());

    for (int i = 1; i < n; i++)
    {
        int it = vp[i].second.find(vp[i - 1].second);

        if (it == -1)
        {
            cout << "NO" << endl;
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << "YES" << endl;
        for (auto &x : vp)
            cout << x.second << endl;
    }

    return 0;
}
