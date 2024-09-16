#include <bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, s1;
    cin >> s >> s1;

    int n = s.length();
    string ans(n, '0');

    for (int i = 0; i < n; ++i)
    {
        if (s[i] != s1[i])
        {
             ans[i] = '1';
        }
    }

    cout << ans << end;

    return 0;
}