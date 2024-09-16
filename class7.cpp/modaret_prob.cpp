#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

vector<int> add[N], rem[N], prefix;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;
        add[l].push_back(x);
        rem[r + 1].push_back(x);
    }

    for (int i = 1; i <= n; i++) {
        for (auto &x : add[i]) {
            prefix.push_back(x);
        }
        for (auto &x : rem[i]) {
            prefix.erase(find(prefix.begin(), prefix.end(), x));
        }
        for (auto &x : prefix) {
            cout << x << ' ';
        }
        cout << endl;
    }

    return 0;
}
