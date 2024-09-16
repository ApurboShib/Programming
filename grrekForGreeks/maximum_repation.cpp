#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    char ch = 'A';
    int ans = 1;
    int ind = 0;

    for (auto c : s)
    {
        if (c == ch)
        {
            ind++;
            ans = max(ans, ind);
        }
        else
        {
            ch == c;

            ind = 1;
        }
    }
    cout << ans << endl;

    return 0;
}
