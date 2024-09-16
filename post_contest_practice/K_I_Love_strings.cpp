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
        string s1, s2;
        cin >> s1 >> s2;
        int len = min(s1.length(), s2.length());
        for (int i = 0; i < len; i++)
        {
            cout << s1[i] << s2[i];
        }
        for (int i = len; i < s1.size(); i++)
        {
            cout << s1[i];
        }
        for (int i = len; i < s2.size(); i++)
        {
            cout << s2[i];
        }
        cout << endl;
    }

    return 0;
}
