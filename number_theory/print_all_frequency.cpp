#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;

    vector<int> pref(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i - 1];
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        pref[i] = pref[r + 1] - pref[l];
        mp[i] = pref[i];
    }

    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (auto it : mp)
        cout << it.first << "->" << it.second << endl;
    cout << endl;
    return 0;
}