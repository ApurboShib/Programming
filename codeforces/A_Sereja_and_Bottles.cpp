#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        p.push_back({x, y});
        if (p[i].first == p[i].second)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}