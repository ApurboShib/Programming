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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res = " ";
        int ind = -1;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] > s[i + 1])
            {
                flag = true;
                ind = i;
                break;
            }
        }
        if (flag == false)
        {
            res = s;
        }
        for (int i = 0; i < n; i++)
        {
            if (ind != i)
            {
                res += s[i];
            }
        }
        cout << res << endl;
    }

    return 0;
}
