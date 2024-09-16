#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int lb = lower_bound(v.begin() + i + 1, v.end(), l - v[i]) - v.begin();
            int ub = upper_bound(v.begin() + i + 1, v.end(), r - v[i]) - v.begin();
            ans += (ub - lb);
        }
        cout << ans << "\n";
    }
    return 0;
}
