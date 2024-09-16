#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int a[n + 1];
    queue<int> q;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        q.push(i);
    }
    int ans = 0;
    while (!q.empty())
    {
        int x = q.front();
        ans = x + 1;
        if (mp[x] + m >= a[x])
            q.pop();
        else
        {
            q.pop();
            mp[x] += m;
            q.push(x);
        }
    }
    cout << ans << endl;

    return 0;
}
