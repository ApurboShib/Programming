#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


int solve(int n) {
    if ((n & (n - 1)) == 0) {
        return n;
    }
    int ans = 1;
    while ((1 << ans) <= n) {
        ans++;
    }
    return 1 << (ans - 1);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int res = solve(m);
        vector<int> v(n);
        if (n == 1) {
            cout << m << endl;
            continue;
        } else {
            res--;
            v[0] = res;
            m -= res;
            v[1] = m;
            for (int i = 2; i < n; i++) {
                v[i] = 0;
            }
            for (auto x : v) cout << x << ' ';
            cout << endl;
        }
    }
    return 0;
}
