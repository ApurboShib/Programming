#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll l = 1, r = 2;
        ll ans = 0;
        while (l <= n) {
            while (r <= n) {
                if ((v[l - 1] * v[r - 1]) % (l * r) == 0) {
                    ans++;
                }
                r++;
            }
            l++;
            r = l + 1;
        }
        
        cout << ans << endl;
    }

    return 0;
}
