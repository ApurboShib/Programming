#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n), c(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];  
            
        }
    
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        for (ll i = 0; i < n; i++) {
            c[n - i - 1] = a[i];
        }
        bool check = (a == b) || (c == b);
        
        if (check) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }

    return 0;
}
