#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    map<int, int> mp, mp2;
    vector<int> a(n), b(m);
    
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        mp[b[i]]++;
    }
    
    int cur = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        mp2[a[i]]++;
    }

    for (auto it : mp) {
        int val = it.first;
        if (mp2.find(val) != mp2.end()) {
            cur += min(mp[val], mp2[val]);
        }
    }

    if (cur >= k) {
        ans++;
    }

    if (n == m) {
        cout << ans << endl;
        return 0;
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

    return 0;
}
