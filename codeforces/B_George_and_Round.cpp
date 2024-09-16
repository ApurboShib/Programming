#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> v1(m);
    for (int i = 0; i < m; i++)
        cin >> v1[i];

    sort(v1.begin(), v1.end());

    int cnt = 0;
    for (auto it : v)
    {
        auto x = lower_bound(v1.begin(), v1.end(), it);
        if (x == v1.end())
            cnt++;
        else
            v1.erase(x);
    }

    cout << cnt << endl;

    return 0;
}
