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

        vector<char> v, v1;
        map<char, int> mp;

        string ans = ""; // Fix: Initialize ans as an empty string

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'B')
            {
                if (!v1.empty())
                {
                    char c = v1.back();
                    mp[c]++;
                    v1.pop_back();
                    mp[toupper(c)]++;
                }
            }
            else if (s[i] == 'b')
            {
                if (!v.empty())
                {
                    char c = v.back();
                    mp[c]++;
                    v.pop_back();
                    mp[tolower(c)]++;
                }
            }
            else
            {
                if (isupper(s[i]))
                {
                    v1.push_back(s[i]);
                }
                else
                {
                    v.push_back(s[i]);
                }
                ans += s[i];
            }
        }

        for (char c : ans)
        {
            if (mp[c] > 0)
            {
                mp[c]--;
            }
            else
            {
                cout << c;
            }
        }

        cout << endl;
    }

    return 0;
}
