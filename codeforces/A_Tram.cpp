#include <bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p.push_back({a, b});
    }
    int cap = 0;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s -= p[i].first;
        s += p[i].second;
        cap = max(cap, s);
    }
    cout << cap << end;
    return 0;
}
