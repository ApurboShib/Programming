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

        set<char> se;
        int ans = 0;

        for (auto x : s)
        {
            se.insert(x);
            ans += se.size();
        }
        cout << ans << endl;
    }

    return 0;
}
