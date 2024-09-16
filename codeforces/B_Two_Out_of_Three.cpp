#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> v1(n, 1);
    vector<int> cnt(102, 0);
    bool two = false, three = false;

    for (int i = 0; i < n; i++)
    {
        cnt[v[i]]++;

        if (cnt[v[i]] == 2)
        {
            if (!two)
                v1[i] = 2, two = 1;
            else if (!three)
                v1[i] = 3, three = 1;
        }
    }

    if (three == false)
    {
        cout << -1 << endl;
        return;
    }

    for (auto &x : v1)
        cout << x << ' ';
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}