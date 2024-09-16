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
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        map<int, int> mp, mp2;
        for (int x : b) {
            mp[x]++;
        }

        int cur = 0, ans = 0;
        for (int i = 0; i < m; i++) {
            mp2[a[i]]++;
        }
        for (auto x : mp) {
            int val = x.first;
            if (mp2.find(val) != mp2.end()) {
                cur += min(mp[val], mp2[val]);
            }
        }

        if (cur >= k) {
            ans++;
        }

        if (n == m) {
            cout << ans << endl;
            continue;
        }

        for (int i = 0; i < n - m; i++) {
            if (a[i] != a[i + m]) {
                cur -= min(mp[a[i]], mp2[a[i]]);
                cur -= min(mp[a[i + m]], mp2[a[i + m]]);
                mp2[a[i]]--;
                mp2[a[i + m]]++;
                cur += min(mp[a[i]], mp2[a[i]]);
                cur += min(mp[a[i + m]], mp2[a[i + m]]);
            }
            if (cur >= k) {
                ans++;
            }
        }

        cout << ans << endl;
    }

 return 0;
}