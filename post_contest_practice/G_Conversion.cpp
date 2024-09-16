#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ',')
        {
            cout << ' ';
        }
        else if (islower(s[i]))
        {
            cout << (char)toupper(s[i]);
        }
        else if (isupper(s[i]))
        {
            cout << (char)tolower(s[i]);
        }
        else
        {
            cout << s[i];
        }
    }

    return 0;
}
