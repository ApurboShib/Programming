#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> p;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        p.push_back({x, y});
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < k; i++)
    {
        if (n > p[i].first)
        {
            n += p[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}