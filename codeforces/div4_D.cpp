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
        string s;
        cin >> s;

        bool f1 = is_sorted(s.begin(), s.end());
        bool f2 = is_sorted(s.rbegin(), s.rend());

        if (f1) {
            cout << 1 << endl;
        } else if (f2) {
            cout << 2 << endl;
        } else {
            int cnt = 0;
            for (int i = 0; i + 1 < s.size(); i++) {
                if (s[i] != s[i + 1]) {
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
