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
    bool flag = false;
    int mn = INT_MAX;
    while (n--)
    {
        int x;
        cin >> x;

        mp[x]++;
        mn = min(mn, x);
    }
    if (mp[mn] % 2 == 1)
    {
        flag = true;
    }
    if (flag)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;

    return 0;
}
