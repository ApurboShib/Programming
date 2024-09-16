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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        while (m--) {
            int l, r;
            cin >> l >> r;
            map<char, int> mp;
            for (int i = l - 1; i < r; i++) { 
                mp[s[i]]++;
            }
            int cnt = 0;
            for (auto x : mp) {
                if (x.second & 1) {
                    cnt++;
                }
            }
            if (cnt > 1) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
