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
        int n, k;
        cin >> n >> k;

        string s = " ";
        char ch = 'a';

        map<char, int> mp;

        for (int i = 0; i < n; i++)
        {

            for (char c = 'a'; c < 'a' + k; c++)
            {

                s += c;

                mp[c]++;

                if (mp[c] == n)
                {
                    mp.erase(c);
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}
