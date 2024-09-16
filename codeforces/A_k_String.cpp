#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin >> k;
    string s;
    cin >> s;

    int n = s.length();

    map<char, int> mp;

    for (char c : s)
    {
        mp[c]++;
    }

    string res = "";
    bool flag = true;

    for (auto &ch : mp)
    {
        if (ch.second % k != 0)
        {
            flag = false;
            break;
        }

        res += string(ch.second / k, ch.first);
    }

    if (!flag)
    {
        cout << "-1" << endl;
    }
    else
    {
        string ans = "";
        for (int i = 0; i < k; i++)
        {
            ans += res;
        }
        cout << ans << endl;
    }

    return 0;
}
