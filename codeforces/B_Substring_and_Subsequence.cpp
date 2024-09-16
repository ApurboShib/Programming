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
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int mn = n + m;
    for (int i = 0; i < m; ++i) {
        int x = i, y = i;
        for (int j = 0; j < n; ++j) {
            if (a[j] == b[y]) {
                y++;
            }
            if (y == m) {
                break;
            }
        }
        int res = x + m - y;
        mn = min(mn, res);
    }
    cout << mn + n << endl;
    }

    return 0;
}
