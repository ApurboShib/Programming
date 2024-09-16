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
    while (t--) {
        ll n;
        cin >> n;
        int ans = 0;
        while (n != 1) {
            if (n & (n - 1)) {
                int ans = 63 - __builtin_clzll(n); 
                n -= (1LL << ans); 
            } else {
                n /= 2; 
            }
            ans++; 
        }
        //cout << ans << endl;

        if (ans % 2 == 0) {
            cout << "Richard" << endl;
        } else {
            cout << "Louise" << endl;
        }
    }

    return 0;
}
