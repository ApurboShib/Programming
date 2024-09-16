#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    map<ll, ll> mp;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        mp[k]++;
    }

    ll cnt1 = mp[100];
    ll cnt2 = mp[200];

    ll x = cnt2 % 2;
    ll y = cnt1 - (x * 2);

    if (y >= 0 && y % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
