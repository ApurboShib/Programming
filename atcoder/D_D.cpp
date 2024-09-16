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
        string q, w;
        cin >> q >> w;

        map<char, int> mp;

        for (char ch : w)
        {
            mp[ch]++;
        }

        int cnt = 0;
        for (char ch : q)
        {
            if (mp[ch] > 0)
            {
                cnt++;
                mp[ch]--;
            }
            else
            {
                break;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
