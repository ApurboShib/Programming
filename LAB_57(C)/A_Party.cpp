#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int dfs(int x, const vector<vector<int>> &v1, vector<int> &depth)
{
    int maxDepth = 0;
    for (int subordinate : v1[x])
    {
        int curr = dfs(subordinate, v1, depth);
        maxDepth = max(maxDepth, curr);
    }
    depth[x] = maxDepth + 1;
    return depth[x];
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> v(n + 1);
    vector<vector<int>> v1(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        if (v[i] != -1)
        {
            v1[v[i]].push_back(i);
        }
    }

    vector<int> ans(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        if (v[i] == -1)
        {
            dfs(i, v1, ans);
        }
    }

    int cnt = 0;

    for (int i = 1; i <= n; ++i)
    {
        cnt = max(cnt, ans[i]);
    }

    cout << cnt << endl;

    return 0;

    return 0;
}
