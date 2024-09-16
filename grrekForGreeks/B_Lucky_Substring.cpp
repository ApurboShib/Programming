#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> mp;
    mp['4'] = 0, mp['7'] = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4')
        {
            mp['4']++;
        }
        else if (s[i] == '7')
        {
            mp['7']++;
        }
    }

    if (mp['4'] == 0 && mp['7'] == 0)
    {
        cout << "-1" << endl;
    }
    else if (mp['7'] < mp['4'])
    {
        cout << "4" << endl;
    }
    else if (mp['4'] < mp['7'])
    {
        cout << "7" << endl;
    }
    else
    {
        cout << "4" << endl;
    }

    return 0;
}
