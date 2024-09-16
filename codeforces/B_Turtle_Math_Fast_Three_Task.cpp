#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

int solve(ll n, vector<ll>& v) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    if (sum % 3 == 0) {
        return 0;
    }
    if (sum % 3 == 2) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        ll ans = sum - v[i];
        if (ans % 3 == 0) {
            return 1;
        }
    }
    return 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << solve(n, v) << endl;
    }

    return 0;
}
