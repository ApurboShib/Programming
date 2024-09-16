#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(string s)
{
    int mx = 0;
    int n = s.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j + i <= n; j++)
        {
            string subs = s.substr(j, i);
            for (int k = j + 1; k + i <= n; k++)
            {
                if (s.substr(k, i) == subs)
                {
                    mx = max(mx, i);
                }
            }
        }
    }
    cout << mx << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    solve(s);
    return 0;
}
