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
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = b % 3;
        if (ans + c >= 3 || ans == 0) {
           cout << (a + static_cast<ll>(ceil(static_cast<double>(b + c) / 3))) << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
