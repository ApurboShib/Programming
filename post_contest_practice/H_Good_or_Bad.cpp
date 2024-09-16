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
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') or (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
                flag = true;
        }
        if (flag)
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }

    return 0;
}
