#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 1e5 + 9;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> v;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = a[0] * a[n - 1];
        
        for (ll i = 2; i * i <= ans; i++) {
            if (ans % i == 0) {
                v.push_back(i);
                if (i * i != ans) {
                    v.push_back(ans / i);
                }
            }
        }
        sort(v.begin(), v.end());
        if (a == v)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
