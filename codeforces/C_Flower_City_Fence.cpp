#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n + 1);
    map<int, int> mp1;
    map<int, int> mp2;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
        mp1[i] = x;
        mp2[x] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        int p = v[i];
        int q = mp1[p];
        int r = mp2[q];
        if (p != r)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
