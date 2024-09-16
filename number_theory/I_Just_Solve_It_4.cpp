#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, l, r;
    cin >> n >> m >> l >> r;
    ll LCM = (n * m) / __gcd(n, m);
    ll ans = 0;
    if (n / __gcd(n, m) > r / m) {
        ans = 0;
    } else {
        ans = r / LCM - (l - 1) / LCM;
    }
    cout << ans << endl;
    return 0;
}
