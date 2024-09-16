#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll mx = LLONG_MIN;
        for(ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            mx = max(mx, x + i);
        }
        cout << mx << endl;
    }
    return 0;
}
