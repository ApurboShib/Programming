#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        set<int> st1, st2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k)
                st1.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (b[i] <= k)
                st2.insert(b[i]);
        }
        if (st1.size() < k / 2 || st2.size() < k / 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool f = true;
            set<int> st3;
            for (auto x : st1)
                st3.insert(x);
            for (auto &x : st2)
                st3.insert(x);
            for (int i = 1; i <= k; i++)
            {
                if (st3.find(i) == st3.end())
                {
                    f = false;
                    break;
                }
            }
            if (!f)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}
