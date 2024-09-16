#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; 
    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b; 
        ll mx = 0;
        mx = n * a;
        if (b > a) {
            ll x = min(n, b - a);
            ll y = n - x;
            ll c = b - x;
            ll ans = y * a + (b * (b + 1) / 2) - (c * (c + 1) / 2);
            mx = max(mx, ans);
        }

        cout << mx << endl;
    }
    return 0;
}
