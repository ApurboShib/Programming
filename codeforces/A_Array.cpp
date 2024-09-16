#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> pos;
    set<int> neg;
    set<int> zero;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
            pos.insert(v[i]);
        else if (v[i] < 0)
            neg.insert(v[i]);
        else
            zero.insert(v[i]);
    }

    cout << 1 << ' ' << -1 << endl;
    // for (auto &x : neg)
    // {
    //     cout << x << ' ';
    // }
    // cout << endl;
    if (pos.size() == 0)
    {
        cout << 1 << ' ' << 1 << endl;
    }
    else
    {
        cout << pos.size() << ' ';
        for (auto &x : pos)
        {
            cout << x << ' ';
        }
        cout << endl;
    }
    cout << zero.size() << ' ';
    for (auto &x : zero)
    {
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}
