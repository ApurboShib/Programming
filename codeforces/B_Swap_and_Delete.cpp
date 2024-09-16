#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
    string s;
    cin >> s;
    string t = s;
    int len = s.size();
    int zCnt = 0, Ocnt = 0;
    int f = 0, cnt = 0;

    for (char c : s)
    {
        (c == '0') ? zCnt++ : Ocnt++;
    }

    if (zCnt == Ocnt)
    {
        return 0;
    }

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1' && zCnt > 0)
        {
            s[i] = '0';
            zCnt--;
        }
        else if (s[i] == '0' && Ocnt > 0)
        {
            s[i] = '1';
            Ocnt--;
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (s[i] != t[f])
        {
            f++;
            continue;
        }
        else
            cnt++;
    }

    return cnt;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        cout << solve() << endl;
    }

    return 0;
}
