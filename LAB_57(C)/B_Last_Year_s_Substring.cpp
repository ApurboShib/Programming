#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    for (int i = 0; i <= 4; i++)
    {
        int x = 4 - i;
        if (s.substr(0, i) + s.substr(n - x) == "2020")
            flag = true;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
