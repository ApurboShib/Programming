#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool magic(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '1' && s[i] != '4')
            return false;
    }

    if (s[0] == '4')
        return false;

    if (s.find("444") != string::npos)
        return false;

    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    if (magic(s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
