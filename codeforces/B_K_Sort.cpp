#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
const int N = 1e5 + 9;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        int v[N];
        for(int i = 0; i < n; i++) cin >> v[i];
        int v1[N];
        int x = v[0];
        ll sum = 0;
        int m = 0;
        
        for(int i = 1; i < n; i++) {
            if(x > v[i]) {
                v1[m++] = x - v[i];
                sum += x - v[i];
            }
            x = max(x, v[i]);
        }
        
        sort(v1, v1 + m);
        
        ll ans = 0;
        ll cnt = m;
        ll res = 0;
        
        for(int i = 0; i < m; i++) {
            v1[i] -= res;
            ll a = max(0LL, (cnt + 1) * (ll)v1[i]);
            ans += a;
            cnt--;
            res += v1[i];
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
