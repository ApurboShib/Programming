#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        int x = ch - '0';
        if (x == 2)
            mp[2]++;
        else if (x == 3)
            mp[3]++;
        else if (x == 4)
            mp[2] += 2, mp[3]++;
        else if (x == 5)
            mp[5]++;
        else if (x == 6)
            mp[3]++, mp[5]++;
        else if (x == 7)
            mp[7]++;
        else if (x == 8)
            mp[2] += 3, mp[7]++;
        else if (x == 9)
            mp[2] += 1, mp[3] += 2, mp[7]++;
    }

    for (int i = 9; i >= 2; i--)
    {
        while (mp[i])
        {
            cout << i;
            mp[i]--;
        }
    }

    return 0;
}
