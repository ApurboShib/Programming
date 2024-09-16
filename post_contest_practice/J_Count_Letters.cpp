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
    for (auto it : s)
    {
        mp[it]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " " << ':' << ' ' << it.second << endl;
    }

    return 0;
}
