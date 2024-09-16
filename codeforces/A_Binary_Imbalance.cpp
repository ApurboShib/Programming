#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
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
        string s;
        cin >> s;
        int cnt = count(s.begin(), s.end(), '0');
        // cout << cnt << endl;
        if (cnt > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
