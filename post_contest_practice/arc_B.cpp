#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
vector<ll> v;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    int mx = *max(v.begin(), v.end());
    int mn = *min(v.begin(), v.end());
    int diff = abs(mx - mn);
    if (diff == 1)
        cout << 0 << endl;
    else
        cout << diff << endl;

    return 0;
}
