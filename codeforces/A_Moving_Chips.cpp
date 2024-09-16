#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v)
{
    int n = v.size();
    vector<int> v1;

    for (int i = 0; i < n; ++i)
    {
        if (v[i] == 1)
        {
            v1.push_back(i);
        }
    }

    int l = 0;
    int r = 1;
    int cnt = 0;

    while (r < v1.size())
    {
        int ans = v1[r] - v1[l] - 1;
        cnt += ans;
        l++;
        r++;
    }

    return cnt;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        cout << solve(v) << endl;
    }
}
