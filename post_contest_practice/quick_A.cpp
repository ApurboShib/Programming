#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool solve(int n, vector<int> &v)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] != v[n - i - 1])
            return false;
    }
    return true;
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
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (solve(n, v))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
