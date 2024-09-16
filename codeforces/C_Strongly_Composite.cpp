#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            for (int j = 2; j * j <= x; j++) {
                while (x % j == 0) {
                    mp[j]++;
                    x /= j;
                }
            }
            if (x > 1)
                mp[x]++;
        }
        ll ans1 = 0, ans2 = 0;
        for (auto &x : mp) {
            ans1 += (x.second / 2);
            ans2 += (x.second % 2);
        }
        ans1 += (ans2 / 3);
        cout << ans1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
