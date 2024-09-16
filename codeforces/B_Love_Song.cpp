#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> v[28];
    int x = 1;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (s[0] == ch)
        {
            v[x].push_back(1);
        }
        else
        {
            v[x].push_back(0);
        }

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == ch)
            {
                v[x].push_back(v[x][i - 1] + 1);
            }
            else
            {
                v[x].push_back(v[x][i - 1]);
            }
        }
        x++;
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        ll ans = 0;
        for (int i = 1; i <= 26; i++)
        {
            int z = 0;
            if (a == 0)
            {
                z = v[i][b];
            }
            else
                z = v[i][b] - v[i][a - 1];

            ans += z * i;
        }
        cout << ans << endl;
    }

    return 0;
}
