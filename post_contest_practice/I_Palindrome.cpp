#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    bool f = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[s.size() - i - 1])
            f = true;
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
