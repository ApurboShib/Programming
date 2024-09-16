#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
bool isPalindrome(vector<int> &v) {
    for (int i = 0; i < v.size() / 2; i++) {
        if (v[i] != v[v.size() - 1 - i])
            return false;
    }
    return true;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int a, b;
        int ans = -1;
        int l = 0;
        int r = v.size() - 1;
        while (l <= r) {
            if (v[l] != v[r]) {
                ans = 1;
                a = v[l];
                b = v[r];
                break;
            }
            l++;
            r--;
        }
        if (ans == -1) {
            cout << "YES" << endl;
        } else {
            vector<int> ans1, ans2;
            for (int i = 0; i < n; i++) {
                if (v[i] == a) {
                    continue;
                }
                ans1.push_back(v[i]);
            }
            for (int i = 0; i < n; i++) {
                if (v[i] == b) {
                    continue;
                }
                ans2.push_back(v[i]);
            }

            int res1 = isPalindrome(ans1);
            int res2 = isPalindrome(ans2);

            if (res1 == 1 || res2 == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
