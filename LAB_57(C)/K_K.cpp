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
        vector<int> v1;
        vector<int> v2;
        map<int, int> mp;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (mp[a[i]] == 1)
            {
                v1.push_back(a[i]);
            }
            else
            {
                v2.push_back(a[i]);
                mp[a[i]]++;
            }
        }

        sort(v2.begin(), v2.end());
        for (auto &x : v2)
            cout << x << ' ';

        for (auto &x : v1)
            cout << x << ' ';
        cout << endl;
    }

    return 0;
}
